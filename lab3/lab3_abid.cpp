/*
Ahnaf Abid
June 1, 2026
lab 3: numerical vvariables
*/
#include <iostream>

using namespace std;

int main(){
    cout<<"\n ---- example 1: numerical variables ----"<<endl;
    // int, short, or long data type only takes the whole number
    int number = 5.9;
    cout<<"The number is "<<number<<endl;
    // float or double data type takes then umber as it is, the whole number with the decimal numbers
    // double is double the memory size of a float
    double number1 = 3.123456789;
    float number2 = 9.123456789;
    cout<<"The double data type = "<<number1<<endl;
    cout<<"The float data type = "<<number2<<endl;

    cout<<"\n ---- example 2: constant variables -----"<<endl;
    number = 23.65;
    cout<<"The updated number = "<<number<<endl;
    // constant variables' value CAN'T be changed
    const float EXP = 2.718;
    cout<<"The value of EXP = "<<EXP<<endl;
    
    cout<<"\n ---- example 3: calculate the height of a falling object ----"<<endl;
    // declare the variables
    const float GRAVITY = 9.8;
    float time = 0, height = 0;

    // collect the time
    cout<<"Enter the falling time: ";
    cin>>time;

    // calculate the height of a falling object = 0.5*gravity*time*time
    height = 0.5*GRAVITY*time*time;

    // print result
    cout<<"The height of a falling object at "<<time<<" is "<<height<<" meters."<<endl;

    cout<<"\n ----- example 4: calculate the circumference of a circle -----"<<endl;
    // formula circumference = 2*radius*pi
    // declare variable
    const float PI = 3.14159;
    float circumference = 0, radius = 0;

    // collect the radius
    cout<<"Enter a radius: ";
    cin>>radius;

    // calculate the circumference 
    circumference = 2*radius*PI;

    //print result
    cout<<"The circumference is = "<<circumference<<endl;


    cout<<"\n ---- EXERCISE ----"<<endl;
    // declare variables
    int r = 0;
    // declare area as a float variable
    float area = 0;
    // declare volume as a float variable
    float volume = 0;
    // prompt the user to enter a radius and store it as an integer
    cout<<"Enter the radius of the circle and sphere: ";
    cin>>r;
    // calculate the area of the circle using area = PI * radius * radius
    area = PI * r * r;
    // calculate the volume of the sphere using volume = (4/3.0) * PI * radius * radius * radius
    volume = (4/3.0) * PI * r * r * r;
    // set output to one decimal place
    cout.setf(ios::fixed);
    cout.precision(1);
    // print the area result
    cout<<"The area of the circle is "<<area<<endl;
    // print the volume result
    cout<<"The volume of the sphere is "<<volume<<endl;
    cout<<"--------------------------------------------------------"<<endl;

    
    return 0;
}