#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double *testScores = nullptr, total = 0.0, average;
    int testNumber, count;

    //Getting number of tests from user
    cout << "How many test scores would you like to enter? " ;
    cin >> testNumber;

    //Dynamically allocate array large enough to hold tests given by input
    testScores = new double[testNumber];

    //get test data from user, use for loop to get 
    cout << "Please enter the test scores. " << endl;
    for (count =0; count < testNumber; count++)
        {
            cout << "Test #" << (count +1) << ": ";
            cin >> testScores[count];
        }
    delete [] testScores;
    testScores = nullptr;

    return 0;

}

//void sortOrder ()