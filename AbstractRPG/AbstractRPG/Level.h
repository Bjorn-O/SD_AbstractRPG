#pragma once
#include <string>
#include <vector>
#include "Player.h"

class Level
{
public:
	Level(std::string sName);
	~Level();

	std::vector<Player*> GetPlayers();
	void AddPlayers(Player* player);
	void RemovePlayers(Player* targetPlayer);

	std::string GetName();
	void setName(std::string sName);
private:
	std::string name;
	std::vector<Player*> players;
};

