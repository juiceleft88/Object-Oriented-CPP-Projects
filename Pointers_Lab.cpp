#include <iostream>
#include <iomanip>

using namespace std;

void sortOrder(double[], int);
void totalAverage (double[], int);

int main()
{
    double *testScores = nullptr;
    int testNumber;

    cout << setprecision(2) << fixed << endl;
    //Getting number of tests from user
    cout << "How many test scores would you like to enter? " ;
    cin >> testNumber;

    //Dynamically allocate array large enough to hold tests given by input
    testScores = new double[testNumber];

    //get test data from user, use for loop to get 
    cout << "Please enter the test scores below: " << endl;
    for (int count = 0; count < testNumber; count++)
        {
            cout << "Test #" << (count +1) << ": ";
            cin >> testScores[count];
            while (testScores[count] < 0)
            {
                cout << "No negative values allowed. Please re-enter test score: ";
                cin >> testScores[count];
            }
            
        }

    sortOrder(testScores, testNumber);
    totalAverage (testScores, testNumber);

    delete [] testScores;
    testScores = nullptr;

    return 0;

}

void sortOrder(double *scores, int size) // sorts the array of pointers in ascending order
{
    int maxElem;
    int index;

    for(maxElem = size -1; maxElem > 0; maxElem--)
    {
        for (index = 0; index < maxElem; index ++)
        {
            if (scores[index] > scores[index + 1])
            {
                swap(scores[index], scores[index +1]);
            }
        }
    }
    cout << "\n\nThe test scores in ascending order, and their average, is listed below: " << endl;
    cout << "\n\nScores: \n" << "--------\n";
    for (int count = 0; count < size; count ++)
    {
        cout << *(scores + count) << "\n";
    }
    cout << endl;
}

void totalAverage (double *arrScores, int size)
{
    double average = 0.0;
    for (int count = 0; count < size ; count++)
    {
        average += *arrScores / size;
        arrScores++;
    }
    cout << "Average Score: " << average <<endl;
}