#include<iostream>
using namespace std;

template <class T> //template to return the sum of given numbers
T total (int num)
{
    T counter = 0;
    T val;

    
    for (int count = 0; count < num; count++)
    {
        cout << "Enter value #" << count+1 << ": "; 
        cin >> val;
        counter += val;
    }

    return counter;
}

int main()
{
    int values;
    double vals;

    cout << "Enter how many int numbers you would like to sum: ";
    cin >> values;

    cout << "\nThe sum of these numbers is: " << total<int>(values);

    cout << "Enter how many double numbers you would like to sum: ";
    cin >> values;

    cout << "\nThe sum of these numbers is: " << total<double>(values);


    return 0;

}