/* 
 * File:   main.cpp
 * Author: Andrew Bowser
 * Created on June 21, 2023, 1:16 PM
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

//Execution Begins Here
int main(int argc, char** argv) {
//Set Random Number Seed Here
    
//Declare Variables/Data Types Here
    //Conversion constants
    const float YEN_PER_DOLLAR=98.93;
    const float EUROS_PER_DOLLAR=0.74;
    char cnvt;  //variable to hold the choice of conversion.
    float amnt; //variable to hold the amount of dollars desired.
    float cpy;  //variable to hold copy of desired dollars for final display.
//Initialize value variables here
    
// Process inputs here
    cout<<fixed<<setprecision(2); //Only allow for 2 decimal places per the instructions
    //Prompt
    cout<<"This is a currency converter to convert from American dollars to either yen or euros."<<endl;
    cout<<"To determine whether or not you want to convert from dollars to yen or euros type Y for yen and E for euros."<<endl;
    cout<<"After typing desired choice press enter "<<endl;
    cin>>cnvt; //read in the choice 
    if(cnvt=='y' ||cnvt=='Y')
        {cout<<"Now that you have chosen yen please type in the amount of dollars you want converted and press enter"<<endl;
        cin>>amnt;//read in the amount
        cpy=amnt;//copy the original amount
        amnt*=YEN_PER_DOLLAR;
        cout<<"With your original dollar amount of "<<cpy<<" the converted Yen amount is "<<amnt<<endl;
        cout << "*Note that this conversion is using the constant given in the book";
    }
    
    if(cnvt=='e' ||cnvt=='E')
        {cout<<"Now that you have chosen euros please type in the amount of dollars you want converted and press enter"<<endl;
        cin>>amnt;//read in the amount
        cpy=amnt;//copy the original amount
        amnt*=EUROS_PER_DOLLAR;
        cout<<"With your original dollar amount of "<<cpy<<" the converted Yen amount is "<<amnt<<endl;
        cout << "*Note that this conversion is using the constant given in the book";
    }
    else cout<<"Please use the instructed characters to properly use the converter"<<endl;
// Display Results

//Exit Program
    return 0;
}
