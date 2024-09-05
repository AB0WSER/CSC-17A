/* 
 * File:   main.cpp
 * Author: Andrew
 * Created on August 26, 2023, 2:00 PM
 *Purpose: Review Assignment
*/
//System libraries
#include <iostream>
using namespace std;

// User libraries

//Global Constants only
//Conversions/Math/Physics Constants like PI/Speed of Light, etc...

//Function Prototypes 

//Execution Begins Here
int main(int argc, char** argv) {
//Set Random Number Seed Here
    
//Declare Variables/Data Types Here
    int mnth; //variable to hold month
    int yr;   //variable to hold year
    bool lpyr;//variable to hold true or false for leap year
    
//Initialize value variables here
    
// Process inputs here
    cout<<"This program will tell you the number of days in a month based on the year it is"<<endl;
    cout<<"Enter a number 1-12 representing it's respective month"<<endl;
    cin>>mnth;
    cout<<"Enter a any given year"<<endl;
    cin>>yr;
    if(yr%100==0) {
        //If the year is divisible by 100, it's a leap year only if divisible by 400
        if (yr%400==0) {
            lpyr=true;
        }
    } else {
        //If the year is not divisible by 100, it's a leap year if divisible by 4
        if (yr%4==0) {
            lpyr=true;
        }
    }
// Display Results
    if (mnth == 1 || mnth == 3 || mnth == 5 || mnth == 7 || mnth == 8 || mnth == 10 || mnth == 12)
        cout << "The number of days is 31";
    if (mnth == 4 || mnth == 6 || mnth == 9 || mnth == 11)
        cout << "The number of days is 30";
    if (mnth == 2 && lpyr == true)
        cout << "The number of days is 29";
    if (mnth == 2 && lpyr == false)
        cout << "The number of days is 28";
//Exit Program
    return 0;
}
