#include "Game.h"

Game::Game(std::string sName)
{
    name = sName;
}

Game::~Game()
{
}

std::vector<Level*> Game::GetLevels()
{
    return levels;
}

void Game::AddLevel(Level* level)
{
    levels.push_back(level);
}

void Game::RemoveLevel(Level* level)
{
    levels.erase(std::remove(levels.begin(), levels.end(), level), levels.end());
}

void Game::SetName(std::string sName)
{
    name = sName;
}

std::string Game::GetName()
{
    return name;
}
