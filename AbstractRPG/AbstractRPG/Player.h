#pragma once
#include <string>

class Player
{
public:
	Player(std::string name);
	~Player();

	std::string GetName();
	int GetAge();
	int GetScore();
	
	void SetName(std::string sName);
	void SetAge(int iAge);
	void SetScore(int iScore);
private:
	std::string name;
	int age;
	int score;
};

