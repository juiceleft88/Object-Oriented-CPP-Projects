#include <iostream>
#include <cstdlib>

using namespace std;

int vowels (const char*);
int consonants(const char*);

int main()
{
    char input[50]; // variable to hold the user input
    char selection; // variable to hold the menu selection

    cout << "Please enter a string that is no more than 49 characters long." << endl;
    cin.getline (input, 50); //getline to get the input string from user

    do //do-while statement for displaying menu and getting selection input in form of a character
    {
        cout << "Please enter a choice from the following menu:" << endl;
        cout << "A) Count the number of vowels in the string" << endl;
        cout << "B) Count the number of consonants in the string" << endl;
        cout << "C) Count both the vowels and consonants in the string" << endl;
        cout << "D) Enter another string" << endl;
        cout << "E) Exit the program " << endl;
        cout << "\nPlease make a selection: " << endl;
        cin >> selection;
        // while statement serves as input validation
    } while (selection != 'A' || selection != 'B' || selection != 'C' || selection != 'D' || selection != 'E' );
    {
        cout << "The selection you made is not valid, please re-enter: " << endl;
        cin >> selection;
    }



    return 0;
}

int vowels(const char *x )
{
    int counter = 0;

    while (*(x) != '\0')
    {
        if (toupper(*x) == 'A' || toupper(*x) == 'E' || toupper(*x) == 'I' || toupper(*x) == 'O'
            || toupper(*x) == 'U')
            counter++;
            x++;
    }
    return counter;
}

int consonants(const char *x)
{
    int counter = 0;

    while (*(x) != '\0')
    {
        if (toupper(*x) != 'A' || toupper(*x) != 'E' || toupper(*x) != 'I' || toupper(*x) != 'O'
            || toupper(*x) != 'U')
            counter++;
            x++;
    }
    return counter;
}

