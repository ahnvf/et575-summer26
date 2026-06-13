/*
Ahnaf Abid
June 12, 2026
Lab 15: recursive function, built-function
*/
#include<iostream>
#include "lab15_function_abid.cpp"

using namespace std;

int main(){
    cout<<"\n----- Example 1: recursive function -----"<<endl;
    cheers(3);

    cout<<"\n----- Example 2: summation recursive function ----"<<endl;
    int s = summation(5);
    cout<<s<<endl;

    cout<<"\n----- Example 3: summation recursive function ----"<<endl;
    int n = getpositive();
    cout<<"Collected number = "<<n<<endl;

    cout<<"\n----- Example 4: built-in function -----"<<endl;
    int s1 = getpositive();
    int s2 = getpositive();
    float h = hypotenuse(s1, s2);
    printresult(s1, s2, h);

    cout<<"\n----- Example 5: random function -----"<<endl;
    srand(time(0));
    randomnumber();
    cout<<endl;
    randomnumber();

    cout<<"\n----- Example 6: range of random function -----"<<endl;
    int r = random_neg5_10();
    cout<<r<<endl;

    cout<<"\n------ Example 7: function calling function ----"<<endl;
    cout<<tripleaddition()<<endl;
    int x = addition(6, 4);
    int y = tripleaddition();

    cout<<"\n----- EXERCISE A -----"<<endl;
    int t = randomnumber1to100();
    float d = fallingdistance(t);
    outputresult(t, d);

    return 0;
}