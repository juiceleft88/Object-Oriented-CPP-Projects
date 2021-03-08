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
    cin.getline (input, 50);
    cout << "\n"; //getline to get the input string from user

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
        cout << "\n";

        switch (toupper(selection))
        {
            case 'A' : cout << vowels(input) << " vowels are in this string." << endl;
            break;

            case 'B' : cout << consonants(input) << " consonants are in this string." << endl;
            break;
        
            case 'C': cout << vowels(input) << " vowels and " << consonants(input) << " consonants are in this string." << endl;
            break;

            case 'D': cout << "Enter string of no more than 49 characters: ";
                  cin.ignore();
                  cin.getline(input, 50);
                  break;
        
            case 'E' : break;
            default : cout << "Please enter a valid choice of A, B , C, D or E. ";
        }

    } while (toupper(selection) !='E');

    if (toupper(selection) == 'E')
    return 0;
}

int vowels(const char *x )
{
    int counter = 0;

    while (*(x) != '\0')
    {
        if (toupper(*x) == 'A' || toupper(*x) == 'E' || toupper(*x) == 'I' || toupper(*x) == 'O'
            || toupper(*x) == 'U' || toupper(*x) == 'Y')
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
        if (toupper(*x) != 'A' && toupper(*x) != 'E' && toupper(*x) != 'I' && toupper(*x) != 'O'
            && toupper(*x) != 'U' && toupper(*x) != 'Y')
            counter++;
            x++;
    }
    return counter;
}

