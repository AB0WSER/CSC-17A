/* 
 * File:   main.cpp
 * Author: Andrew
 * Created on August 31, 2024 11:16 AM
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
    int pop;    //initial population
    float adpop;//the number of organisms being added to the population
    float rate; //percentage growth rate
    int dys;    //number of days to multiply
//Initialize value variables here
    cout<<"Enter the starting number of organisms here"<<endl;
    cin>>pop;
    cout<<"Enter the population growth rate as a percent"<<endl;
    cin>>rate;
    cout<<"Enter the number of days to multiply"<<endl;
    cin>>dys;
// Process inputs here
    //Input validation 
    if(dys<1||rate<0||pop<2)
    {return 0;}
    cout<<"Initial population is "<<pop<<endl;
    for(int i=0;i<dys;i++){
        adpop=pop*rate;
        pop+=adpop;
        cout<<"After day "<<i+1<<" of multiplying population is "<<pop<<endl;
    }
        
// Display Results

//Exit Program
    return 0;
}
