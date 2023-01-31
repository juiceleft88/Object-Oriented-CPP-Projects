//Hugo Izquierdo
//Program to keep track of a soccer match, where user can input the team names, player name, and the points scored by individual players

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Futbolero
{
    string playerName;
    int playerNumber;
    int playerPoints;
};

int main()
{
    const int TEAM_SIZE = 2;
    Futbolero player[TEAM_SIZE];
    int teamPoints = 0;
    int highestScorer = 0;

    //ask for player's number
    cout << "Enter the names for " << TEAM_SIZE << " players, along with their number and points scored.\n";

    for (int count = 0; count < TEAM_SIZE; count ++)
    {
        cout << "Please enter a name for player " << (count +1) << " : ";
        cin >> player[count].playerName;

        cout << "Please enter a number for player " << (count +1) << " : ";
        cin >> player[count].playerNumber;
        while (player[count].playerNumber < 0)
        {
            cout << "No negative numbers, please reenter: ";
            cin >> player[count].playerNumber;
        }

        cout << "Please enter the points scored by player " << (count+1) << ": ";
        cin >> player[count].playerPoints;
        while (player[count].playerPoints < 0)
        {
            cout << "No negative numbers, please reenter: ";
            cin >> player[count].playerPoints;
        }

        teamPoints += player[count].playerPoints;

        if (player[highestScorer].playerPoints < player[count].playerPoints)
            highestScorer = count;
    }

    //Display results
    cout << "Here is the information for the players: " << endl;
    cout << "Player Name\tPlayer Number\tPlayer Points" << endl;
    for (int count = 0; count < TEAM_SIZE; count++)
    {
        cout << setw(10) << player[count].playerName << setw(15) << player[count].playerNumber << setw(15) << player[count].playerPoints << endl;
    }
    


    return 0;
}
