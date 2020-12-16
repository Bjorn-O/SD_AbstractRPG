#pragma once
#include <string>
#include <vector>
#include "Game.h"

class Core
{
public:
	Core(std::string sName, int iID);
	~Core();

	std::vector<Game*> getGames();
	void addGames(Game*);

	void RequestPlayerCount();
	
	void setName(std::string sName);
	std::string getName();

	void setCountry(std::string sCountry);
	std::string getCountry();

	void setID(int iID);
	int getID();

	void setVersion(int iVersionNumb);
	int getVersion();

private:

	std::vector<Game*> games;
	
	std::string name;
	std::string country;
	
	int ID;
	int versionNumb;
};

