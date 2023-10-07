#include "tic_tac_toe.h"
#include<iostream>
#include<string>

using std::cout; using std::cin; using std::string;



int main() 
{
	TicTacToe game;
	string firstPlayer;
	char userChoice = 'y';



	do
	{
		cout<< "Enter first player; ";
		cin>> firstPlayer;

		game.startGame(firstPlayer);

		int position;

		while (!game.gameOver())
		{
			cout<< "Enter a position: ";
			cin>> position;
			game.markBoard(position);
			game.displayBoard();
		}

		cout<< "Play again, enter y or Y? ";
		cin>> userChoice;

	}while(userChoice == 'y' || userChoice == 'Y' );

	return 0;
}