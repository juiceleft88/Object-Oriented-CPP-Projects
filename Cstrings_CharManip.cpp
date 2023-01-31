//Hugo Izquierdo 
//Program to allow user to input and manipulate C-Strings, count vowels, count consonants.

#include <iostream>
#include <cstdlib>

using namespace std;

int vowels (const char*); //function prototype to count vowels
int consonants(const char*); //function prototype to count consonants

int main()
{
    char input[50]; // variable to hold the user input
    char selection; // variable to hold the menu selection

    cout << "Please enter a string that is no more than 49 characters long." << endl;
    cin.getline (input, 50);
    cout << "\n"; //getline to get the input string from user

    do //do-while statement for displaying menu and getting selection input in form of a character
    {
        //menu of choices
        cout << "Please enter a choice from the following menu:" << endl;
        cout << "A) Count the number of vowels in the string" << endl;
        cout << "B) Count the number of consonants in the string" << endl;
        cout << "C) Count both the vowels and consonants in the string" << endl;
        cout << "D) Enter another string" << endl;
        cout << "E) Exit the program " << endl;
        cout << "\nPlease make a selection: " << endl;
        cin >> selection; //getting the single character selection
        cout << "\n";

        switch (toupper(selection)) //to not have so much data validation, just converted char to capital automatically here. 
        //to perform following actions based on the selection from user.
        {
            case 'A' : cout << vowels(input) << " vowels are in this string." << endl; //to count vowels
            break;

            case 'B' : cout << consonants(input) << " consonants are in this string." << endl; //to count consonants
            break;

            //to count consonants and vowels, wasnt sure if they had to bee added into one number or displayed separately so did both
            case 'C': cout << vowels(input) << " vowels and " << consonants(input) << " consonants are in this string, " << "for a total of " << vowels(input) + consonants(input) << endl;
            break;

            case 'D': cout << "Enter string of no more than 49 characters: " << endl; // to enter another string
                  cin.ignore(); //to clear previous cin.getline
                  cin.getline(input, 50); //input
                  cout << "\n";
                  break;

            //no action to be taken here if E is chosen
            case 'E' : break;
            //using default statement here for input validation
            default : cout << "\nPlease enter a valid choice of A, B , C, D or E. ";
        }

    } while (toupper(selection) !='E'); //end of do-while statament. Repeats the 'do' portion so long as 'E' is not a selection

    if (toupper(selection) == 'E') //ends program if 'E' is selected
    return 0;
}

int vowels(const char *x ) //function to count the vowels, using pointer as parameter
{
    int counter = 0; //variable to hold the count of vowels

    while (*(x) != '\0') //while x is not at the end of the string
    {
        // loop to count the vowels
        if (toupper(*x) == 'A' || toupper(*x) == 'E' || toupper(*x) == 'I' || toupper(*x) == 'O'
            || toupper(*x) == 'U' || toupper(*x) == 'Y')
            counter++; //keeps tally of vowels
            x++;
    }
    return counter;
}

int consonants(const char *x) //same idea as above function, except while statement excludes vowels, and counts the rest of string letters
{
    int counter = 0; //variable to keep count

    while (*(x) != '\0') //while x is not at end of string
    {
        if (toupper(*x) != 'A' && toupper(*x) != 'E' && toupper(*x) != 'I' && toupper(*x) != 'O'
            && toupper(*x) != 'U' && toupper(*x) != 'Y' && toupper(*x) != ' ' && !ispunct(*x) && !isdigit(*x)) //!isdigit and !ispunct to not include any digits or punctuation as consonant count and ' ' to not count empty spaces
            counter++;
            x++;
    }
    return counter;
}

