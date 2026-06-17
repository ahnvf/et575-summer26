/*
Ahnaf Abid
June 16, 2026
Lab 16: functions
*/

#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;


// example 1: intro to pointer
void intropointer(){
    // declare variable
    int num = 12;
    char sym ='#';
    string n = "Peter";

    // declare pointer without initial values
    int* ptrint;
    char* ptrchar;
    string* ptrstring = &n;

    // check a pointer info
    cout<<ptrint<<endl;

    // initialize a pointer with a location of a variable
    ptrint = &num;
    ptrchar = &sym;

    // check pointers info
    cout<<ptrint<<endl;
    cout<<ptrchar<<endl;
    cout<<ptrstring<<endl;

    //geet the value of a pointed variable
    cout<<*ptrint<<endl;
    cout<<*ptrchar<<endl;
    cout<<*ptrstring<<endl;
}

// example 2
void a(string v){
    cout<<"A = "<<v<<endl;
    v = "updated A";
}
void b(string& v){
    cout<<"B = "<<v<<endl;
    v = "updated B";
}
void c(string* v){
    cout<<"C = "<<v<<endl;
}

// example 3
void introarray(){
    // declare an array with size 3
    int scores[3];

    // use squared brackets [] to access to each element in the array
    // each element is organized by the index number starting from
    // zero (left-most)
    cout<<scores<<endl;
    cout<<"first element = "<<scores[0]<<endl;

    // assign values to each element in an array
    scores[0] = 50;
    scores[1] = 80;
    scores[2] = 88;

    cout<<"first element = "<<scores[0]<<endl;

    // initializing an array
    char symbols[5] = {'$' , '#', '@' ,'!' , 'G'};
    cout<<"3rd symbol = "<<symbols[2]<<endl;

    // the size of an array in a square brackets [], can be ignored
    // if the array has initial values
    string names[] ={"Peter", "Annie"};
    cout<<"2nd name "<<names[1]<<endl;

    // loop through each element in an array symbol
    for(int i = 0; i<5 ; i++){
        cout<<symbols[i]<<endl;
    }

    // use loop to find the average of scores array
    float avgscore = 0, sumscores = 0;
    for(int i = 0; i<3 ; i++){
        sumscores += scores[i];
    }
    avgscore = sumscores/3;

    cout<<"The average score is = "<<avgscore<<endl;
}

// example 4: passing an array into a function
// or you can pass the array into pointer --> int *arrayname
// for example, we are going to define a function to
// print each element in an array
void printelements(int sizearray, int arr[]){
    for(int i = 0; i<sizearray; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
    void updatearray(int sizearray, int *arr){
    for(int i = 0; i<sizearray; i++){
        cout<<"Enter an age: ";
        cin>>arr[i];
    }
}
// function to find how many adult ages in array age
// the function will return the count
int countadults(int sizearray, int *arr){
    int counter = 0;
    for(int i = 0; i<sizearray; i++){
        if(arr[i] >= 21)
            counter ++;
    }
    return counter;
}

// Exercise B function 1: fill array with random integers 1-9
void fillArray(int sizearray, int *arr){
    srand(time(0));
    for(int i = 0; i<sizearray; i++){
        arr[i] = 1 + rand()%9;
    }
}

// exercise B function 2: count even numbers in array
int countEven(int sizearray, int *arr){
    int counter = 0;
    for(int i = 0; i<sizearray; i++){
        if(arr[i] % 2 == 0)
            counter++;
    }
    return counter;
}