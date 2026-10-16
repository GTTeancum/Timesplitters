// Native display-list builders (src/xbox/PUSH-BC-PLAN.md section 3.2, Tier
// 1; owned by C-EMIT): dlSetZB, dlSetBlend, dlSetDitherMatrix, dlSetFBMSK,
// dlSetClip, dlSetClipTag, dlSelectTextureKick, dlTextureRectangle(+Float),
// dlFillRectangle(+Float), dlClearFB and dlDrawTriangleStrip in packet mode
// (the original's packets) and op mode (an in-list token and a host op).
//
// Week 0 (W0-I): the registration entry exists as a stub so that
// ts_overrides.cpp's registration list is complete; the natives come with
// C-EMIT's trains (dlSetBlend and dlSetClip move here from
// ts_native_game.cpp then).
#pragma once

class PS2Runtime;

// Called by applyTimeSplittersOverrides after the transcribed natives.
void registerTsNativeDl(PS2Runtime &runtime);
