/* 
 * File:   main.cpp
 * Author: Andrew Bowser
 * Created on August 31, 2024, 3:16 PM
 *Purpose: All programs to use this template
 */

//System libraries
#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

// User libraries

//Global Constants only
//Conversions/Math/Physics Constants like PI/Speed of Light, etc...

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    //Set Random Number Seed Here
    srand(time(0));
    //Declare Variables/Data Types Here
    char wthr[3][30];        //Array for weather types
    int snyCnt[3] = {0, 0, 0}; // Variables to count weather for each mnth and overall
    int rnyCnt[3] = {0, 0, 0};
    int cldyCnt[3] = {0, 0, 0};
    int ttlSny = 0, ttlRny = 0, ttlCldy = 0;
    string mnthNms[3] = {"June", "July", "August"};
    //Initialize value variables here
    
    //Fill arr with random day weather
    //I opted to use a rand function so generate weather types rather than creating a file to read in the data from
    for (int mnth = 0; mnth < 3; mnth++) {
        for (int day = 0; day < 30; day++) {
            int randomNum = rand() % 3; // Generate a random number between 0 and 2
            if (randomNum == 0) {
                wthr[mnth][day] = 'S'; // Sunny
            } else if (randomNum == 1) {
                wthr[mnth][day] = 'R'; // Rainy
            } else {
                wthr[mnth][day] = 'C'; // Cloudy
            }
        }
    }

    // Process inputs here

    // Count the weather occurrences
    for (int mnth = 0; mnth < 3; mnth++) {
        for (int day = 0; day < 30; day++) {
            if (wthr[mnth][day] == 'S') {
                snyCnt[mnth]++;
                ttlSny++;
            } else if (wthr[mnth][day] == 'R') {
                rnyCnt[mnth]++;
                ttlRny++;
            } else if (wthr[mnth][day] == 'C') {
                cldyCnt[mnth]++;
                ttlCldy++;
            }
        }
    }
    // Display Results
    for (int mnth = 0; mnth < 3; mnth++) {
        cout << mnthNms[mnth] << " Summary:" << endl;
        cout << "Sunny days: " << snyCnt[mnth] << endl;
        cout << "Rainy days: " << rnyCnt[mnth] << endl;
        cout << "Cloudy days: " << cldyCnt[mnth] << endl;
        cout << endl;
    }
    cout << "Overall 3-mnth Summary:" << endl;
    cout << "Total Sunny days: " << ttlSny << endl;
    cout << "Total Rainy days: " << ttlRny << endl;
    cout << "Total Cloudy days: " << ttlCldy << endl;  
    // Determine which month had the most rainy days
    int mxRnyDys = rnyCnt[0];//For max rainy day count
    int mxRnyMthIdx = 0;     //For max rainy day count
    
    for (int mnth=1;mnth<3;mnth++) {
        if (rnyCnt[mnth]>mxRnyDys) {
            mxRnyDys=rnyCnt[mnth];
            mxRnyMthIdx=mnth;
        }
    }
    cout<<mnthNms[mxRnyMthIdx]<<" had the most rainy days with " <<mxRnyDys<< " rainy days."<<endl;
    //Exit Program
    return 0;
}
