// Annie Zhao
// October 8, 2024
// Lab 5, Part 3.1

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    // Variables
    int north = 0; // Directions
    int south = 0;
    int east = 0;
    int west = 0; 
    int i; // variable for loop
    i = 0;
    
    srand(time(0));    

    // Loop
    for (i=0; i<=25;i++) {
        int directNum; // Variable of direction as a number
        directNum = rand() % 4 + 1;
        switch (directNum) {
            case 1:
            north += 1;
            break;

            case 2:
            south += 1;
            break;

            case 3:
            east += 1;
            break;

            case 4:
            west += 1;
            break;
        }
        i = i+1;
        cout << "The robot is now " << north << " blocks north, " <<          south << " blocks south, " << east << " blocks east, and " <<         west << " blocks west of the starting point. " << endl;
    }

    return 0;
}
// Output 
/*
The robot is now 0 blocks north, 0 blocks south, 1 blocks east, and 0 blocks west of the starting point. 
The robot is now 0 blocks north, 1 blocks south, 1 blocks east, and 0 blocks west of the starting point. 
The robot is now 0 blocks north, 2 blocks south, 1 blocks east, and 0 blocks west of the starting point. 
The robot is now 0 blocks north, 2 blocks south, 2 blocks east, and 0 blocks west of the starting point. 
The robot is now 0 blocks north, 2 blocks south, 2 blocks east, and 1 blocks west of the starting point. 
The robot is now 1 blocks north, 2 blocks south, 2 blocks east, and 1 blocks west of the starting point. 
The robot is now 1 blocks north, 2 blocks south, 2 blocks east, and 2 blocks west of the starting point. 
The robot is now 1 blocks north, 3 blocks south, 2 blocks east, and 2 blocks west of the starting point. 
The robot is now 2 blocks north, 3 blocks south, 2 blocks east, and 2 blocks west of the starting point. 
The robot is now 2 blocks north, 4 blocks south, 2 blocks east, and 2 blocks west of the starting point. 
The robot is now 2 blocks north, 5 blocks south, 2 blocks east, and 2 blocks west of the starting point. 
The robot is now 3 blocks north, 5 blocks south, 2 blocks east, and 2 blocks west of the starting point. 
The robot is now 3 blocks north, 5 blocks south, 3 blocks east, and 2 blocks west of the starting point. 
*/