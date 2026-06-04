/*
Ahnaf Abid
June 4, 2026
Lab 9: Switch-case statement
*/

#include<iostream>

using namespace std;

int main(){

    cout<<"\n ---- Example 1: switch-case statement"<<endl;
    // Ask the user to select a day-off (number)
    // Declare variables
    int dayoff=0;

    // Collect dayoff
    cout<<"Select a day-off:"<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuesday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;

    cin>>dayoff;

    // switch-case statement
    switch (dayoff)
    {
    case 1:
        cout<<"You are off Monday"<<endl;
        break;
    case 2:
        cout<<"You are off Tuesday"<<endl;
        break;
    case 3:
        cout<<"You are off Wednesday"<<endl;
        break;
    case 4:
        cout<<"You are off Thursday"<<endl;
        break;
    case 5:
        cout<<"You are off Friday"<<endl;
        break;
    default:
        cout<<"Wrong dayoff!"<<endl;
        break;
    }

    cout<<"\n ---- Example 2: Select a gender"<<endl;
    // Select a gender using character
    char gender;
    string selectedgender = "";

    //Collect the gender
    cout<<"Select a gender"<<endl;
    cout<<"m for male"<<endl;
    cout<<"f for female"<<endl;
    cout<<"o for other"<<endl;
    cin>>gender;
    
    //switch-case
    switch(gender)
    {
    case 'm': case 'M':
        selectedgender = "MALE";
        break;
    case 'f': case 'F':
        selectedgender = "FEMALE";
        break;
    case 'o': case 'O':
        selectedgender = "OTHER";
        break;
    default:
        cout<<"UNKNOWN!"<<endl;
        break;
    }

    // Print result
    cout<<"Selected gender = "<<selectedgender<<endl;

    cout<<"\n ---- Exercise -----"<<endl;
    // declare variables
    int number = 0;
    char choice;

    // collect the number
    cout<<"Enter a number: ";
    cin>>number;

    // ask if user wants to double the number
    cout<<"Do you want to double the number? (Y/y for yes, N/n for no): ";
    cin>>choice;

    // switch-case to handle choice
    switch(choice)
    {
    case 'Y': case 'y':
        number *= 2;
        break;
    case 'N': case 'n':
        break;
    default:
        number = 0;
        break;
    }

    // print result
    cout<<"The number is set to "<<number<<endl;

    return 0;
}