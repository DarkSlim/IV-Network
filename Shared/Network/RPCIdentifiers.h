//================= IV:Network - https://github.com/GTA-Network/IV-Network =================
//
// File: RPCIdentifier.h
// Project: Client.Core
// Author: FRi<FRi.developing@gmail.com>
// License: See LICENSE in root directory
//
//==========================================================================================

#ifndef RPCIdentifier_h
#define RPCIdentifier_h

// Type of RPC
typedef unsigned short RPCIdentifier;

// RPCs definitions
enum eRPCIdentifier : RPCIdentifier
{
	RPC_INITIAL_DATA,
	RPC_START_GAME,
	RPC_NEW_PLAYER,
	RPC_DELETE_PLAYER,
	RPC_SYNC_PACKAGE,
	RPC_PLAYER_CHAT,
	RPC_PLAYER_DEATH,
	RPC_PLAYER_SPAWN,
	RPC_PLAYER_RESPAWN,
	RPC_ENTER_VEHICLE,
	RPC_EXIT_VEHICLE,
	RPC_CREATE_VEHICLE,
	RPC_DELETE_VEHICLE,

	RPC_PLAYER_VEHICLE_ENTER_EXIT,

	RPC_PLAYER_NAME_CHANGE,
	RPC_PLAYER_SET_POSITION,
	RPC_PLAYER_SET_ROTATION,
	RPC_PLAYER_SET_HEADING,
	RPC_PLAYER_SET_MOVE_SPEED,
	RPC_PLAYER_SET_TURN_SPEED,
	RPC_PLAYER_SET_HEALTH,
	RPC_PLAYER_SET_ARMOR,
	RPC_PLAYER_SET_MODEL,
	RPC_PLAYER_SET_MONEY,
	RPC_PLAYER_SET_DIMENSION,
	RPC_PLAYER_SET_WANTED_LEVEL,
	RPC_PLAYER_GIVE_WEAPON,
	RPC_PLAYER_GIVE_MONEY,
	RPC_PLAYER_SET_COLOR,
	RPC_PLAYER_MESSAGE,
};

#endif // RPCIdentifier_h