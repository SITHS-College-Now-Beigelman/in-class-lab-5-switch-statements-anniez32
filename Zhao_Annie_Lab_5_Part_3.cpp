// Annie Zhao
// October 8, 2024
// Lab 5, Part 3

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    // Variables for loop
    int i;
    int directNum; // The direction as a number
    for (i=1; i<=25; i++)
    {
        srand(time(0));
        directNum = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable
        //1 means North, 2 means South, 3 means East and 4 means West
        // Loop for 25 times
        // Determine which direction the robot will move at each step

        // Set a direction for the corresponding number

        if (directNum == 1)
        {
            cout << "North" << endl;
            srand(time(0));
            directNum = rand() % 4 + 1;
        }
        else if (directNum == 2)
        {
            cout << "South" << endl;
            srand(time(0));
            directNum = rand() % 4 + 1;
        }
        else if (directNum == 3)
        {
            cout << "East" << endl;
            srand(time(0));
            directNum = rand() % 4 + 1;
        }
        else if (directNum == 4)
        {
            cout <<  "West" << endl;
            srand(time(0));
            directNum = rand() % 4 + 1;
        }

    }

    return 0;
}