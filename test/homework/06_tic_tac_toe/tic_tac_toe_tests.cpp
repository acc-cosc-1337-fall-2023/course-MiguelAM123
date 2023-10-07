#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if the board is full") 
{
	TicTacToe game;

	game.markBoard(1);
	REQUIRE(game.gameOver() == false);
	game.markBoard(2);
	REQUIRE(game.gameOver() == false);
    game.markBoard(3);
	REQUIRE(game.gameOver() == false);
	game.markBoard(4);
	REQUIRE(game.gameOver() == false);
	game.markBoard(5);
	REQUIRE(game.gameOver() == false);
	game.markBoard(7);
	REQUIRE(game.gameOver() == false);
	game.markBoard(6);
	REQUIRE(game.gameOver() == false);
	game.markBoard(9);
	REQUIRE(game.gameOver() == false);
	game.markBoard(8);

	REQUIRE(game.gameOver() == true);

}
