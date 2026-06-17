/*
Ahnaf Abid
June 17, 2026
lab 17: array application functions
*/

#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

// example 1: search application
// function to populate an array. The function only collects positive numbers.
// if a zero or a negative is entered, the collection process will stop.
// numberuserindex stores the index of the last collected positive number
void filluparray(int *arr, int &numberuserindex, int sizearray){
    int number, index = 0;
    do{
        cout<<"Enter a positive number: ";
        cin>>number;
        if(number>0){
            arr[index] = number;
            index++;
        }
    }while(number>0 && index < sizearray);

    numberuserindex = index;
}

// function to print each element in the array
void printelements(int *arr, int numberuserindex){
    for(int i = 0; i<numberuserindex; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

// if the target number doesn't exist in the array, the function returns -1
int search(int *arr, int &numberuserindex, int targetnumber){
    int index = 0;
    bool found = false;
    while(!found&&(index<numberuserindex)){
        if(targetnumber == arr[index])
            found = true;
        else
            index++;
    }

    if(found)
        return index;
    else
        return -1;
}

//example 2: 2d array
void intro2darray(){
    // declaring 2d array
    int graylevel[255][10];

    // declaring 2d array with initial values.
    // 2-by-5 matrix (2 rows and 5 columns)
    int temperature[2][5] = {
        {78, 56, 60},               // c++ replace missing initializers with 0
        {100, 89, 92, 90, 80}
    };

    // accessing to a value in a 2d array
    cout<<"The temperature in 1st row, 2nd column "<<temperature[0][1]<<endl;
}

// example 3: print each value in a 2d array
// the size of the column HAS to be passed in a 2d array
// int arr[][3] <--> int (*arr)[3]
void printarray(int arr[][3], int rows){
    for(int r = 0; r<rows; r++){
        for(int c =0; c<3; c++){
            cout<<arr[r][c]<<"\t";
        }
        cout<<endl;
    }
}

// example 4: 2d array application
// function to find and print the average of student's
// 2d set-up : row --> student, column --> subjects.
// 2d array of 3 students and 4 subjects per student
void studentaverage(int (*arr)[4], int sizestudents, int sizesubjects, int *avg){
    int index = 0;
    for(int r = 0; r<sizestudents; r++){
        int sum = 0;
        for(int c = 0; c<sizesubjects; c++){
            sum += arr[r][c];
        }
        //cout<<"Student "<<r+1<<" average grade = "<<(sum/sizesubjects)<<endl;
        // save the average of each student in a 1d array, avg
        avg[index] = sum/sizesubjects;
        index++;
    }
}

// function to print the average of each student
void printavg(int *avg, int sizestudents){
    for(int i=0; i<sizestudents; i++){
        cout<<"Student "<<i+1<<" average grade = "<<avg[i]<<endl;
    }
}

// LAB EXERCISE A
// function to find and return the minimum value in a 1d array
int findMin(int *arr, int sizearray){
    int minVal = arr[0];
    for(int i = 1; i<sizearray; i++){
        if(arr[i] < minVal)
            minVal = arr[i];
    }
    return minVal;
}

// LAB EXERCISE B
const int ARRAY_SIZE = 5;

// function to populate a 5x5 2d array with random numbers between 1 and 255
void populateArray2D(int arr[][ARRAY_SIZE]){
    srand(time(0));
    for(int r = 0; r<ARRAY_SIZE; r++){
        for(int c = 0; c<ARRAY_SIZE; c++){
            arr[r][c] = 1 + rand()%255;
        }
    }
}

// function to count elements between min and max, inclusive
int range2D(int arr[][ARRAY_SIZE], int min, int max){
    int count = 0;
    for(int r = 0; r<ARRAY_SIZE; r++){
        for(int c = 0; c<ARRAY_SIZE; c++){
            if(arr[r][c] >= min && arr[r][c] <= max)
                count++;
        }
    }
    return count;
}