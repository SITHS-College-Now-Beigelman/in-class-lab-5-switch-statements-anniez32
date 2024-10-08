// Annie Zhao
// October 8, 2024
// Lab 5, Part 1

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    // Variables
    int exerciseMin;
    int weight; 
    char type; // type of exercise

    // Get type of exercise
    cout << "What type of exercise are you doing? Slow walking: s, fast walking: f, jogging: j : ";
    cin >> type;

    switch (type) {
        
    case 's':
        {
        // Ask user input
        cout << "How long was the exercise, in minutes? : ";
        cin >> exerciseMin;
        cout << "What is your weight, in kilograms? : ";
        cin >> weight;

        // Calculation and Output Message
        double slowWalking = (exerciseMin * 2 * 3.5 * weight)/200;
        cout << "Calories burned when walking slowly: " << slowWalking << endl;

        break;
        }

    case 'f':
        {
        // Ask user input
        cout << "How long was the exercise, in minutes? : ";
        cin >> exerciseMin;
        cout << "What is your weight, in kilograms? : ";
        cin >> weight;

        //Calculation and Output Message
        double fastWalking = (exerciseMin * 3 * 3.5 * weight)/200;
        cout << "Calories burned when walking quickly: " << fastWalking << endl;

        break;
        }

    case 'j':
        {
        // Ask user input
        cout << "How long was the exercise, in minutes? : ";
        cin >> exerciseMin;
        cout << "What is your weight, in kilograms? : ";
        cin >> weight;

        // Calculation and Output Message
        double jogging = (exerciseMin * 8.8 * 3.5 * weight)/200;
        cout << "Calories burned when jogging: " << jogging << endl;

        break;
        }

    }

    // Extra Credit:

    // Variables
    float burnGoal;
    float weight2;

    // Ask the user how many calories they want to burn and their weight in kilograms
    cout << "How many calories do you want to burn? : ";
    cin >> burnGoal;
    cout << "What is your weight in kilograms? : ";
    cin >> weight2;

    // Calculations
    double goalSlow = (200 * burnGoal)/(2 * 3.5 * weight2);
    double goalQuick = (200 * burnGoal)/(3 * 3.5 * weight2);
    double goalJog = (200 * burnGoal)/(8.8 * 3.5 * weight2);

    // Output
    cout << "________________________________________" << endl;
    cout << "| Walking Slowly | " << fixed << setprecision(2) << goalSlow << " Minutes |" << endl;
    cout << "________________________________________" << endl;
    cout << "| Walking Quickly | " << fixed << setprecision(2) << goalQuick << " Minutes |" << endl;
    cout << "________________________________________" << endl;
    cout << "| Jogging         | " << fixed << setprecision(2) << goalJog << " Minutes |" << endl;
    cout << "________________________________________" << endl;
    
    return 0;
}

// output

/* 
What type of exercise are you doing? Slow walking: s, fast walking: f, jogging: j : s
How long was the exercise, in minutes? : 50
What is your weight, in kilograms? : 70
Calories burned when walking slowly: 122.5
How many calories do you want to burn? : 30
What is your weight in kilograms? : 75
________________________________________
| Walking Slowly | 11.43 Minutes |
________________________________________
| Walking Quickly | 7.62 Minutes |
________________________________________
| Jogging         | 2.60 Minutes |
________________________________________
*/