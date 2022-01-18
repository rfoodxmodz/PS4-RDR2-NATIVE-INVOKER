#pragma once
#include "type.h"
#include "version.h"
#include "nativesData.h"

#if GAME_VERSION == 100
	#define DRAW_SPRITE_FIX (void*)0x1ED130D
	#define RDRVarsAddress (void*)0x6B900FE //1.00
	#define SyscallAddress (void*)0x66A4BD8 //1.00
    #elif GAME_VERSION == 113
	#define RDRVarsAddress (void*)0x74580FE //1.13
	#define SyscallAddress (void*)0x6FAE368 //1.13
	#elif GAME_VERSION == 119
	#define RDRVarsAddress (void*)0x75C00FE //1.19
	#define SyscallAddress (void*)0x71092E0 //1.19
	#elif GAME_VERSION == 124
	#define RDRVarsAddress (void*)0x76980FE //1.24
	#define SyscallAddress (void*)0x71DEDD8 //1.24
	#elif GAME_VERSION == 129
	#define RDRVarsAddress (void*)0x7AF00FE //1.29
	#define SyscallAddress (void*)0x762F688 //1.29
#endif
#define regionAddr (void*)0x5E57A6
#define SyscallBytes 0x48, 0x89, 0xF8, 0x48, 0x89, 0xF7, 0x48, 0x89, 0xD6, 0x48, 0x89, 0xCA, 0x4D, 0x89, 0xC2, 0x4D, 0x89, 0xC8, 0x4C, 0x8B, 0x4C, 0x24, 0x08, 0x0F, 0x05, 0xC3
#define HookBytes_100 0x48, 0x8D, 0x15, 0xDE, 0xCD, 0x57, 0x04
#define HookBytes_113 0x48, 0x8D, 0x15, 0xD8, 0xDD, 0x94, 0x04
#define HookBytes_119 0x48, 0x8D, 0x15, 0x70, 0x67, 0xFC, 0x04
#define HookBytes_124 0x48, 0x8D, 0x15, 0x88, 0x9F, 0x05, 0x05
#define HookBytes_129 0x48, 0x8D, 0x15, 0x58, 0xC8, 0x46, 0x05
#define retn 0xC3// asm return

struct _gtaVars {
	BOOL allocationNeeded;
	int allocationSize;
	void* executableSpace;
	void* dataSpace;
};

static struct _gtaVars *gtaVars = (struct _gtaVars*)RDRVarsAddress;



int nativeHook();
