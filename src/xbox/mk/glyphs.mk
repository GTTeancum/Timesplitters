# Xbox button glyphs (tools/xboxglyphs.py). The game draws its button
# prompts with small textures in MISC.PAK (cross, circle twice, square,
# triangle, SELECT, L1, L2); the Xbox disc carries them redrawn as the Duke
# controller's A, B, X, Y, BACK, White and left trigger, written over the
# originals in its copy of the PS2 disc image (build/xbox/iso/ps2disc.iso,
# which the game reads MISC.PAK from). Same sizes, so nothing else on the
# disc moves; the PC build is untouched. The replacement textures are
# committed (src/xbox/assets/buttons/qpm, made from the atlas there by
# `xboxglyphs.py crop` and `build`); the patch needs any Python 3:
# GLYPHS_PYTHON, else the first of python3, python, py on the PATH.
GLYPHS_TOOL   := $(XBOX)/tools/xboxglyphs.py
GLYPHS_QPMS   := $(wildcard $(XBOX)/assets/buttons/qpm/*.qpm)
GLYPHS_STAMP  := $(OUT)/gen/glyphs.stamp
GLYPHS_PYTHON ?=

$(OUT)/TimeSplitters.iso: $(GLYPHS_STAMP)

# A fresh copy of the image (newer than the stamp) is patched again.
$(GLYPHS_STAMP): $(OUT)/iso/ps2disc.iso $(GLYPHS_TOOL) $(GLYPHS_QPMS)
	@mkdir -p $(dir $@)
	@echo "[ GLYPHS  ] $<"
	@py='$(GLYPHS_PYTHON)'; \
	if [ -z "$$py" ]; then \
	    for c in python3 python py; do \
	        if "$$c" -c "import sys; sys.exit(sys.version_info[0] < 3)" > /dev/null 2>&1; then py="$$c"; break; fi; \
	    done; \
	fi; \
	if [ -z "$$py" ]; then echo "[ GLYPHS  ] no Python 3 (set GLYPHS_PYTHON)"; exit 1; fi; \
	"$$py" $(GLYPHS_TOOL) patch $< && touch $@
