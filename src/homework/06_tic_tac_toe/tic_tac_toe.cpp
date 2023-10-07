#include "tic_tac_toe.h"

using std::cout;

bool TicTacToe::gameOver()
{
    return checkBoardFull();
}

void TicTacToe::startGame(std::string firstPlayer)
{
    player = firstPlayer;
    clearBoard();

}

void TicTacToe::markBoard(int position)
{
    pegs[position - 1] = player;
    setNextPlayer();

}

void TicTacToe::displayBoard() const
{
    for (long unsigned int i = 0; i < pegs.size(); i += 3)
    {
        cout << pegs[ i ] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
    }
}


// private functions
void TicTacToe::clearBoard()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::setNextPlayer()
{
    if (player == "X")
    {
        player = "O";
    }
    else 
    {
        player = "X";
    }
}

bool TicTacToe::checkBoardFull()
{
    
    for (long unsigned int i = 0 < pegs.size(); i++;)
    {
        
        if (pegs[i] == " ")
        {
            return false;
        }

    }

    return true;
}