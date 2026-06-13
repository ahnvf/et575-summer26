/*
Ahnaf Abid
June 12, 2026
Lab 13: Introduction to function
*/
#include <iostream>
#include "lab13_function_abid.cpp"

using namespace std;

int tripleaddition(){
    int a = 1;
    int b = 2;
    int c = 3;
    return a + b + c;
}

int main(){
    cout<<"\n ---- Example 1: void function "<<endl;
    printhi();
    printhi();
    printhi();

    cout<<"\n ---- Example 2: void function with arguments ----"<<endl;
    greeting("Peter");
    string user = "Annie";
    greeting(user);

    cout<<"\n ---- Example 3: Function that returns a value ----"<<endl;
    int x = dbnumber(6);
    cout<<x<<endl;

    cout<<"\n ---- Example 4: Function that returns the area of a rectangle ----"<<endl;
    float a = arearectangle(2.5, 2);
    cout<<"Area of rectangle is: "<<a<<endl;

    cout<<"\n ---- Example 5: Function with alternative return value ----"<<endl;
    string r = checknumber(0);
    cout<<r<<endl;

    cout<<"\n ---- Example 6: Composition of functions ----"<<endl;
    int side = positivenumber();
    int asquare = areasquare(side);
    printresult(asquare);

    cout<<"\n ---- Example 7: Function calling function ----"<<endl;
    cout<<tripleaddition()<<endl;
    
    cout<<"\n ---- EXERCISE ----"<<endl;
    int num = collectnumber();
    printrange(num);
    int cnt = countnotmultiples(num);
    printexerciseresult(num, cnt);

    return 0;
}