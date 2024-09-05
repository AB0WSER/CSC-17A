/* 
 * File:   main.cpp
 * Author: Andrew Bowser
 * Created on August 31, 2024 at 2:00PM
 *Purpose: Review Assignment
 */

//System libraries
#include <iostream>
#include <iomanip>
using namespace std;

// User libraries

//Global Constants only
//Conversions/Math/Physics Constants like PI/Speed of Light, etc...

//Function Prototypes 
float celsius(float i);
//Execution Begins Here
int main(int argc, char** argv) {
//Set Random Number Seed Here
    
//Declare Variables/Data Types Here
    float c; //variable to hold output
//Initialize value variables here
    cout<<"Fahrenheit   Celsius"<<endl<<endl;
    cout<<fixed<<setprecision(2);
    for(int i=0;i<20;i++){
        cout<<"    "<<i+1<<"         ";
        c=celsius(i+1);
        cout<<c<<endl;
    }
// Process inputs here
    
// Display Results

//Exit Program
    return 0;
}

float celsius(float i){
    float fnht; //variable to hold return value
    fnht=(i-32)*5/9;
    return fnht;
}