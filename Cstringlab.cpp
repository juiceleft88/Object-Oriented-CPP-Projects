#include <iostream>
#include <cstdlib>

using namespace std;

int testArray (int*, int);

int main()
{
    char input[50];
    char selection;

    cout << "Please enter a string that is no more than 49 characters long." << endl;
    cin.getline (input, 50);

    do
    {
        cout << "Please enter a choice from the following menu:" << endl;
        cout << "A) Count the number of vowels in the string" << endl;
        cout << "B) Count the number of consonants in the string" << endl;
        cout << "C) Count both the vowels and consonants in the string" << endl;
        cout << "D) Enter another string" << endl;
        cout << "E) Exit the program " << endl;
        cout << "\nPlease make a selection: " << endl;
        cin >> selection;
    } while (selection != 'A' || selection != 'B' || selection != 'C' || selection != 'D' || selection != 'E' );
    {
        cout << "The selection you made is not valid, please re-enter: " << endl;
        cin >> selection;
    }

    return 0;
}

