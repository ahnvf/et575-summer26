/*
Ahnaf Abid
June 1, 2026
Lab 4: numerical operators
*/
#include <iostream>

using namespace std;

int main(){
    cout<<"\n ----- Example 1: assignment operator -----"<<endl;
    int n = 9, m = 2;
    cout<<"n = "<<n<<endl;

    // adding 1 to n and update the value
    n++;
    cout<<"updated n = "<<n<<endl;

    //subtract 1 from m and update the value
    m--;
    cout<<"updated m = "<<m<<endl;

    //add m into n and update value of n 
    n += m;
    cout<<"updated n = "<<n<<endl;

    // triple the value of m and update m
    m *=3 ; // m = m*3;
    cout<<"updated m = "<<m<<endl;

    // modules: find and return the remainder of a division
    cout<<"Modules, Remainder = "<<n%m<<endl;
    cout<<"n = "<<n<<endl;
    n %= m;
    cout<<"n = "<<n<<endl;


    cout<<"\n ----- example 2: comparison operators"<<endl;
    cout<<"n = "<<n<<endl;
    cout<<"m = "<<m<<endl;
    cout<<"Are n and m equal?   "<<(n==m)<<endl;
    cout<<"Is n not equal to m? "<<(n != m)<<endl;
    cout<<"Is m greater than or equal to n? "<<(m >= n)<<endl;

    cout<<"\n ----- example 3: logical/boolean operators "<<endl;
    // AND operator, &&, returns a TRUE only if ALL statements are true
    // OR operator, || returns a TRUE one of the statements is true
    // NOT or INVERTER operator, ! returns a TRUE for a FALSE, or FALSE for a TRUE
    bool check1 = m < n; // false 0
    bool check2 = n <= m; // true 1
    bool check3 = m != n; // true 1

    cout<<"checl1 = "<<check1<<endl;
    cout<<"check2 = "<<check2<<endl;
    cout<<"check3 = "<<check3<<endl;

    bool result1 = check1 && check2 && check3; // false && true && true = false
    bool result2 = check1 || check2|| check3; // false || true || true =  true
    bool result3 = ! check2; // ! true = false 

    cout<<"result 1 = "<<result1<<endl;
    cout<<"result 2 = "<<result2<<endl;
    cout<<"result 3 = "<<result3<<endl;

    cout<<"\n ---- EXERCISE -----"<<endl;
    // declare variables: number and character
    int number = 0;
    char character;

    // collect the values for the character and the number
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter a character: ";
    cin>>character;

    // triple the number (assignment operator)
    number *= 3;
    // print result
    cout<<"Triple the number\t"<<number<<endl;

    // remainder of character divided by 60 (assignment operator)
    character %= 60;
    // print result
    cout<<"Remainder of character\t"<<(int)character<<endl;

    // is number less than or equal to character? (comparison operator)
    bool comp1 = number <= character;
    // print result
    cout<<"is number less than or equal to character?\t"<<comp1<<endl;

    // is number <= -1 OR character != 5 (logical operator)
    bool comp2 = number <= -1 || character != 5;
    // print result
    cout<<"Result after comparison\t"<<comp2<<endl;

    // is character value between -2 and 2 inclusive (comparison and boolean operator)
    bool comp3 = character >= -2 && character <= 2;
    // print result
    cout<<"is number between -2 and 2?\t"<<comp3<<endl;

    return 0;
}