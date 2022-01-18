#include "types.h"
#include "enums.h"
#include "vars.h"
#include "lib.h"
#include "offsets.h"
#include "natives.h"
#include "extraNatives.h"
#include "gameFunctions.h"
#include "functions.h"

extern "C" void _main(void) {
	if(!init) {
		initLibs();
		setTextData = reinterpret_cast<text_info*>(TEXT_INFO_POINTER);
		init = true;
	}
		int FrameCount = GET_FRAME_COUNT();
		if (FrameCount > frameCount) {
			frameCount = FrameCount;
			SET_ENTITY_INVINCIBLE(PLAYER_PED_ID(), true);
	}
}