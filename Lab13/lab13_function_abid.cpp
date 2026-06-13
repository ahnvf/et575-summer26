/*
Ahnaf Abid
June 12, 2026
Lab 13: Functions
*/
#include <iostream>

using namespace std;

// example 1: void function.
// void function is a function that doesn't return a value

void printhi(){
    cout<<"Hello Function!"<<endl;
    return; // for a void function, the return is nothing
}

// example 2: void function with parameter
// function that prints a name with a message
// the name is passed to the function
void greeting(string username){
    cout<<"Good morning "<<username<<endl;
}
// example 3: function that returns a value
// returns the double of a number (integer)
// the number is passed to the function as argument
int dbnumber(int n){
    return n*2;
}
// example 4: function that returns the area of a rectangle
// returning value is a float. area rectangle = width * lenght
float arearectangle(float width, float length){
    return width * length;
    // any lines after the first returns are ignored
    /*
    float n = 2(width * length);
    return n;
    */
}

// example 5: function that checks if a is positive, negative, or zero
string checknumber(int number){
    if(number>0)
        return "Positive";
    else if(number<0)
        return "Negative";
    else
        return "Zero";
}

//example 6: composition of functions
// function 1: collect and return a positive
// validate that the number is positive before returning it
int positivenumber(){
    int n;
    cout<<"Enter a numbner: ";
    cin>>n;
    //recollect n if n is not a positive number
    while(n<=0){
        cout<<"Error! Enter a positive number: ";
        cin>>n;
    }
    return n;
}

//function that calculates the area of a square
int areasquare(int side){
    return side*side;
}

//function 3 print result
void printresult(int area){
    cout<<"The area of a square is "<<area<<endl;
}

//example 7: function calling function
//function 1
int addition(int a, int b){
    return a+b;
}

//function 2: returns the triple of the sum of two numbers
int tripleaddition(int a, int b){
    return 3*(addition(2,3));
}

// exercise function 1: collect integer between 1 and 10
int collectnumber(){
    int n;
    cout<<"Enter a number between 1 and 10: ";
    cin>>n;
    while(n < 1 || n > 10){
        cout<<"Invalid! Enter a number between 1 and 10: ";
        cin>>n;
    }
    return n;
}

// exercise function 2: print all integers from n to 15 step 1
void printrange(int n){
    for(int i = n; i <= 15; i++){
        cout<<i<<"\t";
    }
    cout<<endl;
}

// exercise function 3: count numbers from n to 15 not multiples of 3
int countnotmultiples(int n){
    int count = 0;
    for(int i = n; i <= 15; i++){
        if(i % 3 != 0) count++;
    }
    return count;
}

// exercise function 4: print result
void printexerciseresult(int n, int count){
    cout<<"From "<<n<<" up to 15, there are "<<count<<" number/s that are not multiplied by 3."<<endl;
}