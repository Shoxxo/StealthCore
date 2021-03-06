/*
 * Copyright (C) 2011-2016 StealthCore <http://www.stealthcoders.net/>
 *
 * A Private Project by StealthCoders. Emulator Codename: StealthCore [SC]
 *
 * Do not Share this Source. All contributors from [SC] StealthCoders, shouldn't remove any 
 * Copyright Text or notice.
 *
 */

#ifndef DEF_BLOOD_FURNACE_H
#define DEF_BLOOD_FURNACE_H

enum bloodFurnace
{
	DATA_THE_MAKER						= 0,
	DATA_BROGGOK						= 1,
	DATA_KELIDAN						= 2,
	MAX_ENCOUNTER						= 3,

	DATA_DOOR1							= 10,
	DATA_DOOR2							= 11,
	DATA_DOOR3							= 12,
	DATA_DOOR4							= 13,
	DATA_DOOR5							= 14,
	DATA_DOOR6							= 15,

	DATA_PRISON_CELL1					= 20,
	DATA_PRISON_CELL2					= 21,
	DATA_PRISON_CELL3					= 22,
	DATA_PRISON_CELL4					= 23,

	ACTION_ACTIVATE_BROGGOK				= 30,
	ACTION_PREPARE_BROGGOK				= 31
};

enum bloodFurnaceNPC
{
	NPC_THE_MAKER						= 17381,
	NPC_BROGGOK							= 17380,
	NPC_KELIDAN							= 17377,
	NPC_NASCENT_FEL_ORC					= 17398,
	NPC_CHANNELER						= 17653
};

#endif

