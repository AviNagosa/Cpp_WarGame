
#include <stdexcept>
#include <iostream>
#include "Board.hpp"
#include "Soldier.hpp"
namespace WarGame
{

    // operator for putting soldiers on the game-board during initialization.
    Soldier *& Board::operator[](std::pair<int, int> location)
    {
    
        return board[location.first][location.second];
    }

    // operator for reading which soldiers are on the game-board.
    Soldier * Board::operator[](std::pair<int, int> location) const
    {
        return board[location.first][location.second];
    }

    // The function "move" tries to move the soldier of player "player"
    //     from the "source" location to the "target" location,
    //     and activates the special ability of the soldier.
    // If the move is illegal, it throws "std::invalid_argument".
    // Illegal moves include:
    //  * There is no soldier in the source location (i.e., the soldier pointer is null);
    //  * The soldier in the source location belongs to the other player.
    //  * There is already another soldier (of this or the other player) in the target location.
    // IMPLEMENTATION HINT: Do not write "if" conditions that depend on the type of soldier!
    // Your code should be generic. All handling of different types of soldiers
    //      must be handled by polymorphism.
    void Board::move(uint player_number, std::pair<int, int> source, MoveDIR direction)
    {

        if (!is_legal_location(source))
        {
            throw("invalid_argument the soldider loaction is null");
        }

        std::pair<int, int> dest;
        switch (direction)
        {
        case Up:
            dest = {source.first + 1, source.second};
            if (is_legal_location(dest))
            {
                Soldier *s = (*this)[source];
                *(*this)[dest] = s;
            }
            break;

        case Down:
            dest = {source.first - 1, source.second};
            if (is_legal_location(dest))
            {
                Soldier *s = (*this)[source];
                *(*this)[dest] = s;
            }
            break;

        case Right:
            dest = {source.first, source.second + 1};
            if (is_legal_location(dest))
            {
                Soldier *s = (*this)[source];
                *(*this)[dest] = s;
            }
            break;

        case Left:
            dest = {source.first, source.second - 1};
            if (is_legal_location(dest))
            {
                Soldier *s = (*this)[source];
                *(*this)[dest] = s;
            }
            break;
        }
    }
    // returns true iff the board contains one or more soldiers of the given player.
    bool Board::has_soldiers(uint player_number) const
    {
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; i < board[i].size(); j++)
            {
                std::pair<int, int> location(i, j);
                Soldier *s = (*this)[location];
                if (s->get_num() == player_number)
                {
                    return true;
                }
            }
        }

        return false;
    }

    bool Board::is_legal_location(std::pair<int, int> location)


    {
        if (location.first < 0 || location.first > board.size() || location.second < 0 || location.second > board.size())
        {
            throw "invalid_argument outsize of range";
        }
        Soldier *s = (*this)[location];
        if (s != NULL)
        {
            return false;
        }
        return true;
    }


    // std::pair<int,int> Board::get_location(const Soldier &s)
    // {
    //     for(int i=0;i<board.size();i++)
    //     {
    //         for(int j=0;j<board.size();j++)
    //         {
    //             std::pair<int,int> location(i,j);
    //             Soldier *temp=(*this)[location];
    //             if()
    //         }
    //     }
    // }
} // namespace WarGame
