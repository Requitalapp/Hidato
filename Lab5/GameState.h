#pragma once

#include <sstream>

#include <SFML/Graphics.hpp>
#include "State.h"
#include "Game.h"

namespace hidato
{
	class GameState : public State
	{
	public:
		GameState(GameDataRef data);

		void init();

		void handleInput();
		void update(float dt);
		void draw(float dt);

	private:
		struct piece
		{
			int value;
			sf::RectangleShape gridShape;
			sf::Text gridText;
			int x, y;
		};


		void initGridPieces();

		void checkAndPlacePiece();

		int getPathLength(int player);

		void deleteIntArray(int **array);

		void getPossibleMoves(std::vector <std::vector<int> >& possibleMoves, int x, int y, int player);

		int minimax(int player, int depth , int alpha, int beta);

		GameDataRef _data;

		sf::Sprite _background;

		sf::Sprite _pauseButton;

		//sf::Sprite _gridSprite;

		sf::Text _timeText;

		//sf::Sprite _gridPieces[BOARD_SIZE][BOARD_SIZE];
		//sf::RectangleShape _gridPieces[BOARD_SIZE][BOARD_SIZE];
		piece gridArray[BOARD_SIZE][BOARD_SIZE];

		sf::Clock _clock;

		std::ostringstream _timeElapsed;

		int turn;
		int gameState;
		int best_row, best_column;
	};
}