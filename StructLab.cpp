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
    }

    //Display results
    cout << "Here is the information for the players: " << endl;

    for (int count = 0; count < TEAM_SIZE; count++)
    {
        cout << "\nPlayer " << (count +1) << "'s name is: #" << player[count].playerName;

        cout << "\nPlayer " << (count +1) << "'s number is: " << player[count].playerNumber;

        cout << "\nPlayer " << (count +1) << " scored " << player[count].playerPoints << " points. ";
    }
    


    return 0;
}

int totalPoints (int points, int count)
{
    int player;
    int teamSize;

    for (int count = 0; count < teamSize; count++)
    {
        int points = 0;
        points = player[count];
    }
    return points;
}