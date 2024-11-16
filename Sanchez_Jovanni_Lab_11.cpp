// Jovanni Sanchez
// November 12
// Lab 11

#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

const int ARRAY_SIZE = 50;       // The size of the array "alpha"
const int NUMBERS_PER_LINE = 10; // How many numbers should be in each line

int main()
{
    int currentItem;          // Used for iterating the items within "alpha"
    int sumOfArray = 0;       // Will be assinged to the sum of all items
    int numbersPrinted = 0;   // The amount of numbers printed in a line
    double alpha[ARRAY_SIZE]; // The array everything will be stored in

    srand(time(0));

    for (currentItem = 0; currentItem != ARRAY_SIZE; currentItem++)
    {
        /* The loop keeps itterating until it reaches the end of the array */

        if (currentItem < 25) // Items 0-24
        {
            alpha[currentItem] = pow(rand() % 100 + 1, 2);
        }
        else // 25-49 (The rest of the 50 items)
        {
            alpha[currentItem] = (rand() % 100 + 1) * 3;
        }

        if (numbersPrinted != NUMBERS_PER_LINE)
        {
            /* If the numbers printed so far isnt the limit of numbers per line,
            keep printing. Each number is seperated with a space */
            cout << alpha[currentItem] << " ";
        }
        else
        {
            /* Once the limit has been reached, start a new line and reset the
            counter to keep looping until we reach the end of the array */
            cout << "\n";
            numbersPrinted = 0;
        }

        numbersPrinted++; // Count a number printed for every item
        sumOfArray = sumOfArray + alpha[currentItem];
        // The sum is equal to its current value + the value of the current item
    }

    // Find and Print the average of the array
    cout << "\nThe average of the array is " << sumOfArray / 50;

    return 0;
}