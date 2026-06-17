/*
Ahnaf Abid
June 17 and 18, 2026
lab 18: console failure and file streaming
*/
#include<iostream>
#include "lab18_function_abid.cpp"

using namespace std;

int main(){
    cout<<"\n---- example 1: console failure test"<<endl;
    checknumber();
    
    cout<<"\n---- example 2: validate a data type"<<endl;
    float n = validatenumber();
    cout<<n<<endl;
    
    return 0;
}