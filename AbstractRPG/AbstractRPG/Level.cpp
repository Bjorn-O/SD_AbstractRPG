#include "Level.h"

Level::Level(std::string sName)
{
	name = sName;
}

Level::~Level()
{
}

std::vector<Player*> Level::GetPlayers()
{
	return players;
}

void Level::AddPlayers(Player* player)
{
	players.push_back(player);
}

void Level::RemovePlayers(Player* targetPlayer)
{
	players.erase(std::remove(players.begin(), players.end(), targetPlayer), players.end());
}

std::string Level::GetName()
{
	return name;
}

void Level::setName(std::string sName)
{
	name = sName;
}
