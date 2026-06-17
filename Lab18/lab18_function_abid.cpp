/*
Ahnaf Abid
June 17 and 18, 2026
lab 18: console failure and file streaming functions
*/
#include<iostream>

using namespace std;

// function to check if a proper data type is collected for an integer
void checknumber(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(cin.fail())
        cout<<"Error! Dismatched data type!"<<endl;
    else
        cout<<"Entered number = "<<num<<endl;

    // reset the cin status
    cin.clear();
    cin.ignore(10000, '\n');

    cout<<"--- END OF FUNCTION ---"<<endl;
}

// example 2: validate a data type
float validatenumber(){
    float n;
    do{
        cout<<"Enter a number: ";
        cin>>n;
        if(!(cin>>n)){
            cout<<"Invalid data type!"<<endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
        else{
            return n;
        }
    }while(true);
}