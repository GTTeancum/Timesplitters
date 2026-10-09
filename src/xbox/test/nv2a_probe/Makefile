# nv2a_probe: console feasibility tests T1-T8 of src/xbox/REWRITE-PLAN.md
# (M0.7), a standalone nxdk program built like nxdk's samples. See README.md.
#
# Build with build.sh (MSYS2 CLANG64): it copies these files to
# build/nv2a_probe and runs make there, so nothing is written next to the
# sources, and it stops make from rebuilding nxdk's own libraries.
#
# Switches (make VAR=value, or build.sh VAR=value):
#   PROBE_IMAGE_PAD_MB  BSS padding so the image is about the game's size (T1)
#   PROBE_PAGED         page-table DMA tests that may upset the GPU: bit 0 T6a,
#                       bit 1 T6b (default 3, or 0 with PROBE_RISKY=0)
#   PROBE_TARGETS       PCI/AGP-target DMA tests that may upset the GPU: bit 0
#                       T2c, bit 1 T2d (default 3, or 0 with PROBE_RISKY=0)
#   PROBE_RISKY         0: the defaults of both above become 0
#   PROBE_T7_CPU_MS     CPU time of one simulated frame in T7
#   PROBE_T7_GPU_MS     GPU work of one simulated frame in T7 (below the CPU's)
#   PROBE_T7_FRAMES     frames simulated in T7

# nxdk's clean rule deletes nxdk's shared libraries in C:\nxdk.
ifneq ($(filter clean distclean,$(MAKECMDGOALS)),)
$(error nxdk's clean would delete C:\nxdk's shared libraries: use "build.sh clean" (removes build/nv2a_probe only))
endif

XBE_TITLE = nv2a_probe
GEN_XISO = $(XBE_TITLE).iso
SRCS = $(CURDIR)/nv2a_probe.c
SHADER_OBJS = probe_vs.inl probe_ps.inl
NXDK_DIR ?= /c/nxdk

PROBE_IMAGE_PAD_MB ?= 13
PROBE_RISKY ?= 1
ifeq ($(PROBE_RISKY),0)
PROBE_PAGED ?= 0
PROBE_TARGETS ?= 0
else
PROBE_PAGED ?= 3
PROBE_TARGETS ?= 3
endif
PROBE_T7_CPU_MS ?= 25
PROBE_T7_GPU_MS ?= 15
PROBE_T7_FRAMES ?= 60
CFLAGS += -O2 -Wall -Wno-unused-function \
          -DPROBE_IMAGE_PAD_MB=$(PROBE_IMAGE_PAD_MB) -DPROBE_RISKY=$(PROBE_RISKY) \
          -DPROBE_PAGED=$(PROBE_PAGED) -DPROBE_TARGETS=$(PROBE_TARGETS) \
          -DPROBE_T7_CPU_MS=$(PROBE_T7_CPU_MS) -DPROBE_T7_GPU_MS=$(PROBE_T7_GPU_MS) \
          -DPROBE_T7_FRAMES=$(PROBE_T7_FRAMES)

include $(NXDK_DIR)/Makefile

# nxdk's rules do not see flag changes: a stamp holding the flags (rewritten
# only when they change) rebuilds the program when a switch changes.
FLAGS_STAMP := $(CURDIR)/probe.flags
$(shell [ "$$(cat $(FLAGS_STAMP) 2>/dev/null)" = '$(CFLAGS)' ] || printf '%s\n' '$(CFLAGS)' > $(FLAGS_STAMP))
$(CURDIR)/nv2a_probe.obj: $(FLAGS_STAMP)
