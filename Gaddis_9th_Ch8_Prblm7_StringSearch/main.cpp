/* 
 * File:   main.cpp
 * Author: Andrew Bowser
 * Created on August 31, 2024, 4:10 PM
 *Purpose: Review Assignment
 */

//System libraries
#include <iostream>
#include <string>
using namespace std;

// User libraries

//Global Constants only
//Conversions/Math/Physics Constants like PI/Speed of Light, etc...

//Function Prototypes 
int bnySrch(const string array[], int size, string value);
void slctnSrt(string array[], int size);
//Execution Begins Here
int main(int argc, char** argv) {
//Set Random Number Seed Here
    
//Declare Variables/Data Types Here
    const int NM_NMS = 20;
    string nms[NM_NMS] = {
        "Collins, Bill", "Smith, Bart", "Allen, Jim", "Griffin, Jim", "Stamey, Marty",
        "Rose, Geri", "Taylor, Terry", "Johnson, Jill", "Allison, Jeff", "Looney, Joe",
        "Wolfe, Bill", "James, Jean", "Weaver, Jim", "Pore, Bob", "Rutherford, Greg",
        "Javens, Renee", "Harrison, Rose", "Seltzer, Cathy", "Pike, Gordon", "Holland, Beth"
    };
//Initialize value variables here
    
// Process inputs here
    // Sort the array to ensure binary search works correctly
    slctnSrt(nms, NM_NMS);

    string srchNm;
    cout<<"Enter a name to search for: ";
    getline(cin, srchNm);

    // Perform a binary search
    int result=bnySrch(nms, NM_NMS, srchNm);

    if (result== -1) {
        cout<<"The name \"" << srchNm << "\" was not found in the list."<<endl;
    } else {
        cout<<"The name \"" << srchNm << "\" was found at position "<<result<<"." <<endl;
    }
// Display Results

//Exit Program
    return 0;
}
//Sort Function
void slctnSrt(string array[], int size) {
    int minIndex;
    string minValue;

    for(int strt=0;strt<size -1;strt++) {
        minIndex=strt;
        minValue=array[strt];

        for(int index=strt+1;index<size;index++) {
            if (array[index]<minValue) {
                minValue=array[index];
                minIndex=index;
            }
        }

        // Swap the found minimum element with the first element
        if (minIndex!=strt) {
            swap(array[strt],array[minIndex]);
        }
    }
}
//Search Function
int bnySrch(const string array[], int size, string value) {
    int first=0; // First array element
    int last=size -1; // Last array element
    int middle; // Midpoint of search
    int position= -1; // Position of search value
    bool found= false; // Flag

    while (!found && first<=last) {
        middle=(first +last)/2; // Calculate midpoint
        if (array[middle]==value) { // If value is found at mid
            found= true;
            position= middle;
        } else if (array[middle] > value) { // If value is in lower half
            last=middle -1;
        } else {
            first=middle +1; // If value is in upper half
        }
    }
    return position; // Return the position of the value or -1 if not found
}