#include "Core.h"
#include "Game.h"
#include <vector>

Core::Core(std::string sName, int iID)
{
	name = sName;
	ID = iID;
}

Core::~Core()
{
}

std::vector<Game*> Core::getGames()
{
	return games;
}

void Core::addGames(Game* game)
{
	games.push_back(game);
}

void Core::RequestPlayerCount()
{
}

void Core::setName(std::string sName)
{
	name = sName;
}

std::string Core::getName()
{
	return name;
}

void Core::setCountry(std::string sCountry)
{
	country = sCountry;
}

std::string Core::getCountry()
{
	return country;
}

void Core::setID(int iID)
{
	ID = iID;
}

int Core::getID()
{
	return ID;
}

void Core::setVersion(int iVersionNumb)
{
	versionNumb = iVersionNumb;
}

int Core::getVersion()
{
	return versionNumb;
}
