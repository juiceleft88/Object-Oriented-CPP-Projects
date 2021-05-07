#include<iostream>
using namespace std;

template <class T>
T total (T number, T counter[])
{
    int index;
    for (int count = 0; count < index; count++)
        number += counter[count];
    return counter;
}

int main()
{
    int values;
    int counter = 0;
    int tempArray[0];
    double tempArr[0];
    int intNum;
    double doubleNum;

    cout << "How many integer values do you wish to total?" << endl;
    cin >> values;

    for (int count = 0; count < values; count++)
        {
            cout << "Enter an integer: ";
            cin >> tempArray[intNum];
            counter += tempArray[intNum];
        }

    cout << total(counter);

    cout << "\nHow many double values do you wish to total?" << endl;

    cin >> values;

    for (int count = 0; count < values; count++)
        {
            cout << "Enter an double: ";
            cin >> tempArr[values];
            counter += tempArr[values];
        }

    cout << total(counter);

    return 0;

}