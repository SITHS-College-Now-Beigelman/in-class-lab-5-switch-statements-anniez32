// Annie Zhao
// October 13, 2024
// Lab 5, Part 3.2

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    // Variables
    int north = 0; // Directions
    int east = 0;
    int steps = 0; // Number of steps that robot takes
    int loop = 0; // if loop = 1, the loop ends. If loop = 0, the loop continues.

    srand(time(0));    
    // Loop
    while (loop == 0) {
            int directNum; // Variable of direction as a number
            directNum = rand() % 4 + 1;
            
            switch (directNum) {   
            case 1:
            north += 1;
            break;

            case 2:
            north -= 1;  // This is South
            break;

            case 3:
            east += 1;
            break;

            case 4:
            east -= 1;  // This is West
            break;
            }
        if (north == 3 && east == 2)  // If condition is met, end loop
            loop = 1;
        else if (north != 3 && east != 2) // If condition is not met, continue loop
            loop =0;
        steps += 1;
    }
    // Output Statement
    cout << "It took the robot " << steps << " steps to reach the destination." << endl;

    return 0;
}

// Calculating the average for 10 runs
/*
(89 + 19 + 1065 + 5709 + 2029 + 265 + 77 + 13 + 8215 + 668395)/10 = 68,587.6
*/

// Output 
/*
// First run
It took the robot 89 steps to reach the destination.
// Second run
It took the robot 19 steps to reach the destination. 
// Third run
It took the robot 1065 steps to reach the destination. 
// Fourth run
It took the robot 5709 steps to reach the destination.
// Fifth run
It took the robot 2029 steps to reach the destination.
// Sixth run
It took the robot 265 steps to reach the destination.
// Seventh run
It took the robot 77 steps to reach the destination.
// Eighth run 
It took the robot 13 steps to reach the destination.
// Ninth run
It took the robot 8215 steps to reach the destination.
// Tenth run
It took the robot 668395 steps to reach the destination. 
*/