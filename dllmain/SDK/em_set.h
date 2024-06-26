#pragma once
#include "basic_types.h"

enum EM_BE_FLAG : uint8_t
{
	EM_BE_FLAG_ALIVE = 0x1,
	EM_BE_FLAG_SET = 0x2,

	// if one of these two are set, game seems to swap between them when loading
	// maybe as some way of telling if it's loaded from a save or from a file?
	// only starts doing it if one of them is set though...
	EM_BE_FLAG_UNK4 = 0x4,
	EM_BE_FLAG_UNK8 = 0x8,

	// flags for ModExpansion.cpp SetEmListParamExtensions
	EM_BE_FLAG_MODEXP_10 = 0x10, // available for use
	EM_BE_FLAG_MODEXP_20 = 0x20, // available for use
	EM_BE_FLAG_MODEXP_SPEEDSCALE = 0x40, // indicates speed/scale values should be set from inside ESL data

	EM_BE_FLAG_DIE = 0x80,
};

struct EM_LIST
{
	EM_BE_FLAG be_flag_0;
	char id_1;
	char type_2;
	char set_3;
	uint32_t flag_4;
	int16_t hp_8;
	uint8_t emset_no_A;
	char Character_B;
	SVEC s_pos_C;
	SVEC s_ang_12;
	uint16_t room_18;
	int16_t Guard_r_1A;

	// extended params added by re4_tweaks, normally field is Dummy / unused
	uint16_t percentageMotionSpeed_1C;
	uint16_t percentageScale_1E;
};
assert_size(EM_LIST, 0x20);
