//Hugo Izquierdo
//886895301
//The purpose of this program is to create a temp
#include<iostream>
using namespace std;

template <class T> //template to return the sum of given numbers
T total (int num) //integer as a parameter, because number of values will be an integer
{
    T counter = 0; //using T type so that 'counter' can be an int or double
    T val; //using T type so that the inputted values can be an int or double type

    for (int count = 0; count < num; count++) //loop to enter the values which will be added
    {
        cout << "Enter value #" << count+1 << ": "; 
        cin >> val; //entering the values, can be integers or doubles
        counter += val; //accumulator 'counter' adds all 'val' entries and holds total
    }

    return counter; //function returns counter of all values entered
}

int main()
{
    int values; //variable to hold the number of values to be calculated (also serves as argument for function)

    cout << "Enter how many int numbers you would like to sum: ";
    cin >> values; 

    cout << "\nThe sum of these numbers is: " << total<int>(values); //calling total function for integers, using 'values' as an argument

    cout << "Enter how many double numbers you would like to sum: ";
    cin >> values;

    cout << "\nThe sum of these numbers is: " << total<double>(values); //calling total function for doubles, using 'values' as an argument
    
    return 0;
}