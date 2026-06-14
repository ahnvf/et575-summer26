/*
Ahnaf Abid
June 14, 2026
Homework 2: Loops mechanism
*/

#include<iostream>
using namespace std;

// global variable for question 3
const int DIM = 10;

int main(){

    // ---- Question 1 ----
    cout<<"\n---- Question 1 ----"<<endl;
    int num;
    do {
        cout<<"Enter a number greater than or equal to 10: ";
        cin>>num;
        if(num < 10){
            cout<<num<<" is invalid. Enter a number greater than or equal to 10: ";
            cin>>num;
        }
    } while(num < 10);
    cout<<num<<" is a valid number!"<<endl;

    // ---- Question 2 ----
    cout<<"\n---- Question 2 ----"<<endl;
    int num1, num2, minNum, maxNum;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;

    if(num1 < num2){
        minNum = num1;
        maxNum = num2;
    }
    else{
        minNum = num2;
        maxNum = num1;
    }

    cout<<"RESULT = ";
    int i = minNum;
    while(i <= maxNum){
        cout<<i<<"\t";
        i++;
    }
    cout<<endl;

    // ---- Question 3 ----
    cout<<"\n---- Question 3 ----"<<endl;
    for(int row = 1; row <= DIM; row++){
        for(int col = 1; col <= DIM; col++){
            if ((row==3 && (col==4 || col==6)) ||
                (row==4 && ((col>=3 && col<=4) || (col>=6 && col<=7))) ||
                (row==5 && col>=3 && col<=7) ||
                (row==6 && col>=4 && col<=6) ||
                (row==7 && col==5))
                cout<<" % ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }

    return 0;
}