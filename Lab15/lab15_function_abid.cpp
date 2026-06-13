/*
Ahnaf Abid
June 12, 2026
lab 15, recursive function, built-function
*/
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<time.h>

using namespace std;

// global constant for gravity
const float GRAVITY = 9.8;

// example 1: recursive function
// function that calls itself during the execution of the program
void cheers(int n){
    // base case
    if(n == 1){
        cout<<"STOP"<<endl;
    }
    // recursive case
    else{
        cout<<(n*2)<<"\t";
        cheers(n-1);
    }
}

// example 2: recursive function to find the summation of a number
// for example, summation of 5, 5+4+3+2+1+0 = 15
int summation(int n){
    // recursive case
    if(n != 0){
        return (summation(n-1) + n);
    }
    // base case
    else{
        return 0;
    }
}

// example 3: use recursive function to validate a number
// use recursive case to recollect a number if it is not positive
int getpositive(){
    int num;
    cout<<"Enter a number ";
    cin>>num;
    // base case
    if(num > 0)
        return num;
    // recursive case
    else
        return getpositive();
}

// example 4: built-in function
// program to calculate the hypotenusa of a right triangle
float hypotenuse(int side1, int side2){
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

// function to print result
void printresult(int side1, int side2, float hyp){
    cout<<"The hypotenusa of a right triangle with sides "
        <<side1<<" and "<<side2<<" is "<<hyp<<endl;
    return;
}

// example 5: random numbers
void randomnumber(){
    srand(time(0));
    cout<<rand()<<endl;
    cout<<rand()<<endl;
    cout<<rand()<<endl;
}

// example 6: random number between -5 and 10, inclusive
int random_neg5_10(){
    srand(time(0));
    return (-5 + rand()%16);
}

// example 7: function calling function
// function 1: returns the sum of two numbers
int addition(int a, int b){
    return a+b;
    return 2*(a+b); // unreachable, ignored after first return
}

// function 2: returns the triple of the sum of two numbers
int tripleaddition(){
    return 3*(addition(2,3)); // function calling function
}

// EXERCISE A
// exercise function 1: random number between 1 and 100 inclusive
int randomnumber1to100(){
    srand(time(0));
    return (1 + rand()%100);
}

// exercise function 2: calculate falling distance
// time is passed from the random number function
float fallingdistance(int time){
    return 0.5 * GRAVITY * pow(time, 2);
}

// exercise function 3: output result
void outputresult(int time, float distance){
    cout<<"The falling distance in "<<time<<" seconds is "<<distance<<" meters."<<endl;
}