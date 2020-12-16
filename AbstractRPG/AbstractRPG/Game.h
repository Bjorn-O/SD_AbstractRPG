#pragma once
#include <string>
#include <vector>
#include "Level.h"

class Game
{
public:
	Game(std::string sName);
	~Game();

	std::vector<Level*> GetLevels();
	void AddLevel(Level* level);
	void RemoveLevel(Level* level);
	void SetName(std::string sName);
	std::string GetName();
private:
	std::vector<Level*> levels;
	std::string name;
};

