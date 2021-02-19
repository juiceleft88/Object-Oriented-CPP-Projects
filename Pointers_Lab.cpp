#include <iostream>
#include <iomanip>

using namespace std;

//void sortOrder(double[], int);
void totalAverage (double[], int);

int main()
{
    double *testScores = nullptr, total = 0.0, average;
    int testNumber, count;

    cout << setprecision(2) << fixed << endl;
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
            while (testScores[count] < 0)
            {
                cout << "No negative values allowed. Please reenter test score: ";
                cin >> testScores[count];
            }
            
        }

    //cout << "The average of the scores is: " << endl;
    //cout << testScores;

    //sortOrder(testScores, testNumber);
    totalAverage (testScores, testNumber);

    delete [] testScores;
    testScores = nullptr;

    return 0;

}

/*void sortOrder(double *scores[], int size) // sorts the array of pointers in ascending order
{
    int sort; 
    int minIndex; //declaring variables
    double *minElement;

    for (sort = 0; sort < (size - 1); sort++) //outer for loop to step through array
    {
        minIndex = sort; //starting point of minIndex 
        minElement = scores[sort]; 
        for(int count = sort +1; count < size; count ++)
        {
            if (*(scores[count]) < *minElement)
            {
                minElement = scores[count];
                minIndex = count;
            }
        }
        scores[minIndex] = scores[sort];
        scores[sort] = minElement;
    }
}
*/
void totalAverage (double *arrScores, int size)
{
    double average = 0.0;
    for (int count = 0; count < size ; count++)
    {
        average += *arrScores / size;
        arrScores++;
    }
    cout << "The average of the scores is: " << average <<endl;
}