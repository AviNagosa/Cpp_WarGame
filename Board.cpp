
#include <stdexcept>
#include <iostream>
#include "Board.hpp"
#include "Soldier.hpp"
namespace WarGame
{

    // operator for putting soldiers on the game-board during initialization.
    Soldier *&Board::operator[](std::pair<int, int> location)
    {

        return board[location.first][location.second];
    }

    // operator for reading which soldiers are on the game-board.
    Soldier *Board::operator[](std::pair<int, int> location) const
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

        //  print();
        std::pair<int, int> dest{0,0};

        switch (direction)
        {

        case Up:

            dest = {source.first + 1, source.second};
       
            cout << "UP befor if Case" << endl;
            if (is_legal_location(dest))
            {

                Soldier *s = (*this)[source];
                (*this)[dest] = s;
                (*this)[source] = NULL;
                cout << "UP after if Case" << endl;
            }
            cout<<"break"<<endl;
            break;
        case Down:
            dest = {source.first - 1, source.second};
            cout << "Down befor if Case" << endl;
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
        default:
            dest = {source.first, source.second - 1};
            if (is_legal_location(dest))
            {
                Soldier *s = (*this)[source];
                *(*this)[dest] = s;
            }
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
        static int a = 0;
        cout << "is_legal_location number " << a++ << endl;
        cout << location.first << "," << location.second << endl;

        if (location.first < 0 || location.first >= board.size() || location.second < 0 || location.second >= board.size())
        {

            return false;
        }

        Soldier *s = (*this)[location];
        //     cout<<(*this)[location]->id<<endl;
        cout << "---" << endl;
        if (s != NULL)
        {
            cout << "---is_legal_location----return FALSE-----" << endl;
            return false;
        }
        cout << "---is_legal_location----return TRUE-----" << endl;
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
