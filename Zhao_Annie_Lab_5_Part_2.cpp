// Annie Zhao
// October 8, 2024
// Lab 5, Part 2

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    // variables
    int gigs; 
    char type;

    // Get type of quality
    cout << "Do you wish to download Low (l), Normal (n), or High (h) quality music? l/n/h : ";
    cin >> type;

    switch(type) {

        case 'l':
        {
            // Input
	        cout << "How many gigabytes are in your monthly hotspot plan? : ";
            cin >> gigs;
            int megab = gigs * 1000;
            float lowQ = megab / 43.2;
            // Output
            cout << "For low quality music (96 kbps), you can stream : " << fixed << setprecision(2) << lowQ << " hours" << endl;

        break;
        }

        case 'n':
        {
            // Input
	        cout << "How many gigabytes are in your monthly hotspot plan? : ";
            cin >> gigs;
            int megab = gigs * 1000;
            float normQ = megab / 72;
            // Output
            cout << "For normal quality music (160 kbps), you can stream : " << fixed << setprecision(2) << normQ << " hours" << endl;

        break;
        }

        case 'h':
        {
            // Input
	        cout << "How many gigabytes are in your monthly hotspot plan? : ";
            cin >> gigs;
            int megab = gigs * 1000;
            float highQ = megab / 115.2;
            // Output
            cout << "For high quality music, you can stream (320 kbps): " << fixed << setprecision(2) << highQ << " hours" << endl;

        break;
        }

        default:
            cout << "ERROR." << endl;
    }
    return 0;
    
}
// Output Message
/*
Do you wish to download Low (l), Normal (n), or High (h) quality music? l/n/h : h
How many gigabytes are in your monthly hotspot plan? : 500
For high quality music, you can stream (320 kbps): 4340.28 hours
*/