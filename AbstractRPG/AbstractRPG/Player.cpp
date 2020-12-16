#include "Player.h"

Player::Player(std::string sName)
{
	name = sName;
}

Player::~Player()
{
}

std::string Player::GetName()
{
	return name;
}

int Player::GetAge()
{
	return age;
}

int Player::GetScore()
{
	return score;
}

void Player::SetName(std::string sName)
{
	name = sName;
}

void Player::SetAge(int iAge)
{
	age = iAge;
}

void Player::SetScore(int iScore)
{
	score = iScore;
}
