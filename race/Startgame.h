#ifndef __START_GAME_H__
#define __START_GAME_H__

#include "map.h"

class StartGame:
	public Command
{
public:
	StartGameCommand(RoadCommand& _roadCommand, int _sizeRoad);

	void Execute();

	~StartGameCommand();
private:
	int sizeRoad;
};

#endif#pragma once
