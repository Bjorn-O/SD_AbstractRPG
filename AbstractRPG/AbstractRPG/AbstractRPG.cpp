#include <iostream>
#include <vector>
#include "Core.h"
#include "Game.h"
#include "Level.h"
#include "Player.h"


int main()
{
	Core System("NintendoSwitch", 69420);

	Game game1("Ultra Bash Sisters. Perfect");
	Game game2("Super Sonic World-Tour");
	Game game3("Last Imagination XIV: Part 2, perfectability");
	Game game4("Realm of Conflict: Fogs of Bearland");
	Game game5("ExcavateConstruction");

	System.addGames(&game1);
	System.addGames(&game2);
	System.addGames(&game3);
	System.addGames(&game4);
	System.addGames(&game5);

	Level level11("Eindlocatie");
	Level level12("Slagveld");
	Level level13("PoggerFloats");

	Level level21("Green Hill Kingdom");
	Level level22("Metropolis Desert");
	Level level23("THE EGGERS");

	Level level31("Gridania");
	Level level32("Ul'Dah");
	Level level33("Limsa Lominsa");

	Level level41("Goldshire");
	Level level42("Stormwind");
	Level level43("Oggrimar");

	Level level51("Overworld");
	Level level52("Netherlands");
	Level level53("The end is Neigh");

	System.getGames().at(0)->AddLevel(&level11);
	System.getGames().at(0)->AddLevel(&level12);
	System.getGames().at(0)->AddLevel(&level13);

	System.getGames().at(1)->AddLevel(&level21);
	System.getGames().at(1)->AddLevel(&level22);
	System.getGames().at(1)->AddLevel(&level23);

	System.getGames().at(2)->AddLevel(&level31);
	System.getGames().at(2)->AddLevel(&level32);
	System.getGames().at(2)->AddLevel(&level33);

	System.getGames().at(3)->AddLevel(&level41);
	System.getGames().at(3)->AddLevel(&level42);
	System.getGames().at(3)->AddLevel(&level43);

	System.getGames().at(4)->AddLevel(&level51);
	System.getGames().at(4)->AddLevel(&level52);
	System.getGames().at(4)->AddLevel(&level53);

	Player player1("Bjorn 'Emil' Oudkerk");
	Player player2("Bob HoogsteBoom");
	Player player3("Jesse Wissiknie");
	Player player4("Robin SylvanasSimp");
	Player player5("CHAD THUNDERCOCK");

	System.getGames().at(0)->GetLevels().at(0)->AddPlayers(&player1);
	System.getGames().at(0)->GetLevels().at(0)->AddPlayers(&player2);

	System.getGames().at(1)->GetLevels().at(2)->AddPlayers(&player2);

	System.getGames().at(2)->GetLevels().at(0)->AddPlayers(&player1);
	System.getGames().at(2)->GetLevels().at(1)->AddPlayers(&player3);
	System.getGames().at(2)->GetLevels().at(2)->AddPlayers(&player4);
	
	System.getGames().at(3)->GetLevels().at(0)->AddPlayers(&player3);
	System.getGames().at(3)->GetLevels().at(0)->AddPlayers(&player4);
	System.getGames().at(3)->GetLevels().at(0)->AddPlayers(&player5);

	System.getGames().at(4)->GetLevels().at(1)->AddPlayers(&player1);
	System.getGames().at(4)->GetLevels().at(0)->AddPlayers(&player2);
	System.getGames().at(4)->GetLevels().at(0)->AddPlayers(&player3);
	System.getGames().at(4)->GetLevels().at(0)->AddPlayers(&player4);
	System.getGames().at(4)->GetLevels().at(2)->AddPlayers(&player5);

	System.getGames().at(0)->RemoveLevel(&level13);

	System.getGames().at(3)->GetLevels().at(0)->RemovePlayers(&player5);
	System.getGames().at(4)->GetLevels().at(2)->RemovePlayers(&player5);

	player5.~Player();

	for (Game* g : System.getGames())
	{
		for (Level* l : g->GetLevels())
		{
			std::cout << g->GetName() <<" - Level: " << l->GetName() << std::endl;

			for (Player* p : l->GetPlayers())
			{
				std::cout << "This Player: " << p->GetName() << std::endl;
			}
		}
		
	}
}
