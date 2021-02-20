// Hugo Izquierdo
// 886895301
// The purpose of this program is to dynamically allocate an array large enough to hold a user-defined number of test scores.

#include <iostream>
#include <iomanip>

using namespace std;

//function prototypes 
void sortOrder(double[], int);
void totalAverage (double[], int);

int main()
{
    double *testScores = nullptr; //setting up testScores pointer to point to null
    int testNumber; //for size of array

    cout << setprecision(2) << fixed << endl; // for formatting output data

   
    cout << "How many test scores would you like to enter? " ;  //Getting number of tests from user, which determines size of array needed
    cin >> testNumber;

    //Dynamically allocate array large enough to hold tests dictated by input
    testScores = new double[testNumber];

    
    cout << "Please enter the test scores below: " << endl; //get test score data from user to create array values
    for (int count = 0; count < testNumber; count++)
        {
            cout << "Test #" << (count +1) << ": ";
            cin >> testScores[count];
            while (testScores[count] < 0) //while loop for input verification (doesn't allow for negative numbers to be input)
            {
                cout << "No negative values allowed. Please re-enter test score: ";
                cin >> testScores[count];
            }
            
        }

    sortOrder(testScores, testNumber); //function call for sorting in ascending order / and displaying the data
    totalAverage (testScores, testNumber); // function call for accumulator used for calculating average of scores / and displaying the data

    delete [] testScores; //frees the memory 
    testScores = nullptr; //points testScores back to null

    return 0;

}

void sortOrder(double *scores, int size) // sorts the array of pointers in ascending order
{
    int maxElem; //variables used in loop to help sort the data
    int index;

    for(maxElem = size -1; maxElem > 0; maxElem--)
    {
        for (index = 0; index < maxElem; index ++)
        {
            if (scores[index] > scores[index + 1]) 
            {
                swap(scores[index], scores[index +1]); 
                //"Bubble sorting" as explained in Chapter 8 of Gaddis' book 
            }
        }
    }
    cout << "\n\nThe test scores in ascending order, and their average, is listed below: " << endl; //for data formatting and explanation to user
    cout << "\n\nScores: \n" << "--------\n";
    for (int count = 0; count < size; count ++)
    {
        cout << *(scores + count) << "\n"; // to display the sorted scores in column fashion
    }
    cout << endl;
}

void totalAverage (double *arrScores, int size) // for calculating the average of the test scores
{
    double average = 0.0; //accumulator set to 0
    for (int count = 0; count < size ; count++) // for loop to step through array
    {
        average += *arrScores / size; // to adjust average with each subsequent iteration until loop has stepped through all of array
        arrScores++; //step to next element
    }
    cout << "Average Score: " << average <<endl;
}