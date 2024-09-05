/* 
 * File:   main.cpp
 * Author: Andrew Bowser
 * Created on August 25, 2024 11:16 AM
 *Purpose: Review problem Gaddis 3.12\
 *testing editor mode for this
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
    float tmp; //The variable to hold the input for the Celsius temp 
    float cpy; //An extra variable to hold a copy of original input
//Initialize value variables here
    cout<<"Input a desired temperature in Celsius you want converted to Fahrenheit"<<endl; //Prompting user with instructions
    cout<<"Type in temperature and press enter"<<endl;
    cin>>tmp;
// Process inputs here
    cpy=tmp;         //Making a copy of original input for the final temperature displays
    tmp= tmp*9/5+32; //Performing the conversion here
// Display Results
    cout<<"The original temperature "<<cpy<<" in Celsius when converted is "<<tmp<<" in Fahrenheit"<<endl;
//Exit Program
    return 0;
}
