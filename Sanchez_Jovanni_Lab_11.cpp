// Jovanni Sanchez
// November 12
// Lab 11

#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

const int ARRAY_SIZE = 50;
const int NUMBERS_PER_LINE = 10;

int main()
{
    int currentItem;
    int sumOfArray = 0;
    double alpha[ARRAY_SIZE];
    int numbersPrinted = 0;

    srand(time(0));

    for (currentItem = 0; currentItem != ARRAY_SIZE; currentItem++)
    {
        if (currentItem < 25)
        {
            alpha[currentItem] = pow(rand() % 100 + 1, 2);
        }
        else
        {
            alpha[currentItem] = (rand() % 100 + 1) * 3;
        }

        if (numbersPrinted != NUMBERS_PER_LINE)
        {
            cout << alpha[currentItem] << " ";
        }
        else
        {
            cout << "\n";
            numbersPrinted = 0;
        }

        numbersPrinted++;
        sumOfArray = sumOfArray + alpha[currentItem];
    }

    cout << "\nThe average of the array is " << sumOfArray / 50;

    return 0;
}