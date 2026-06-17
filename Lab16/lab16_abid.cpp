/*
Ahnaf Abid
June 16, 2026
Lab 16: intro array
*/

#include<iostream>
#include "lab16_functions_abid.cpp"

using namespace std;

int main(){

    cout<<"\n---- example 1: intro to pointer----"<<endl;
    intropointer();

    cout<<"\n---- example 2: checking different data ----"<<endl;
    string something = "Hello World!";
    a(something);
    cout<<something<<endl;
    b(something);
    cout<<something<<endl;
    c(&something);
    a(something);

    cout<<"\n---- example 3: intro to array----"<<endl;
    introarray();

    cout<<"\n---- example 4: print each element in an array----"<<endl;
    const int s = 4;
    int age [s] = {0};

    printelements(s, age);
    updatearray(s, age);
    printelements(s, age);

    int c = countadults(s, age);
    cout<<"Adult 21+ = "<<c<<endl;


    cout<<"\n---- EXERCISE A ----"<<endl;
    // Declare an integer pointer named PTR
    int* PTR;

    // Create an integer variable 'var' and assign it the value 7
    int var = 7;

    // Create an integer variable 'foo' and assign it the value 21
    int foo = 21;

    // Make the pointer 'PTR' point to the address of 'var'
    PTR = &var;

    // Make the pointer 'PTR' point to the address of 'foo'
    PTR = &foo;

    // Create a reference named 'ref' that refers to 'var'
    int& ref = var;

    cout<<"\n---- EXERCISE B ----"<<endl;
    const int size = 10;
    int numbers[size];

    fillArray(size, numbers);
    printelements(size, numbers);

    int evenCount = countEven(size, numbers);
    cout<<"Even numbers count = "<<evenCount<<endl;
    
    return 0;
}