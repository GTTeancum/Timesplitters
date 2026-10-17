# B-AUDIO (src/xbox/PUSH-BC-PLAN.md section 5.5): the mixer (M4.3) and the
# music loader (M4.4).
#   TS_SPU2_VOICE_MAJOR (ps2_spu2.cpp, default 1)  voice-major SPU2 mix
#   TS_SPU2_SELFCHECK (default 0)                  voice-major vs frame-major, every mix (spu2diff)
#   TS_MUSIC_LOADER (ps2_music.cpp, default 1)     the music read ahead on a loader thread
#   TS_MUSIC_SELFCHECK (default 0)                 blocks vs the file (musicdiff)
# Check build: make EXTRA_DEFINES="-DTS_SPU2_SELFCHECK=1 -DTS_MUSIC_SELFCHECK=1"
# ([TS:audio] spu2diff= and musicdiff= must stay 0).
HOST_TESTS += audio_mix_test
HOST_TEST_FLAGS_audio_mix_test := -DTS_MUSIC_SELFCHECK=1 -DTS_MUSIC_SELFCHECK_EVERY=7 $(RUNTIME)/src/lib/ps2_music.cpp
