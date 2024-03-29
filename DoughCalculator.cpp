//Hugo Izquierdo
//December 12, 2020
//This is a program I created to help me easily calculate the amount of ingredients I would need to make my pizza dough. 

#include <iostream>
#include <cmath>

using namespace std;

void ingredientsAmount(double);
int finishedDough(int);

int main()
{
    int doeballs;
    cout << "Enter the amount of doughballs needed: ";
    cin >> doeballs;
    cout << finishedDough(doeballs) << " Kg of flour is needed" << endl;

    return 0;
}

void ingredientsAmount(double weight)
{
    double amount = weight; // total flour weight (ex 25000)
    int doughBalls;
    double totalFlourAmount = .60 * finishedDough(doughBalls);
    cout << totalFlourAmount << " kg" << endl;

}

int finishedDough(int doughballs)
{
    int balls = doughballs;
    double ballWeight = 7.5;
    double ballPerKgWeight = 58.5;
    double dballWeightAmount = ((balls*ballWeight)*ballPerKgWeight);

    return dballWeightAmount;
}

