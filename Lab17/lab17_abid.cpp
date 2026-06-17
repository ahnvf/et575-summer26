/*
Ahnaf Abid
June 17, 2026
lab 17: array application functions
*/

#include <iostream>
#include "lab17_function_abid.cpp"

using namespace std;

int main(){
    // declare size of the array
    const int sizea = 10;
    // declare the array
    int a[sizea] ={0};
    // declare the variable to save the index
    int listsize;
    //declare the target number
    int targetnumber = 10;

    // calling function
    filluparray(a, listsize, sizea);
    printelements(a, listsize);
    int foundindex = search(a, listsize, targetnumber);
    cout<<"Index of found number: "<<foundindex<<endl;
  
    cout<<"\n ---- example 2: 2d array"<<endl;
    intro2darray();

    cout<<"\n---- example 3: print 2d array element ----"<<endl;
    const int rowsize = 2;
    int n[rowsize][3] = {
        {1,2,3},
        {4,5,6}
    };

    printarray(n,rowsize);
    
    cout<<"\n----- examle 4: 2d array application"<<endl;
    const int students = 3;
    const int subjects = 4;
    // declaring 2d array with initial values
    int grades[students][subjects] ={
        {85, 90, 78, 92},
        {70, 88, 84, 76},
        {95, 91, 89, 93}
    };
    // declaring 1d array
    int studentavg[students];
    studentaverage(grades, students, subjects, studentavg);
    printavg(studentavg, students);

    cout<<"\n---- LAB EXERCISE A ----"<<endl;
    int minNumber = findMin(a, listsize);
    cout<<"The minimum number is "<<minNumber<<endl;

    cout<<"\n---- LAB EXERCISE B ----"<<endl;
    int arrayNumber2D[ARRAY_SIZE][ARRAY_SIZE] = {0};
    int max = 200;
    int min = 150;

    populateArray2D(arrayNumber2D);
    int totalNumber = range2D(arrayNumber2D, min, max);
    cout<<"Array has "<<totalNumber<<" number(s) between "<<min<<" and "<<max<<endl;

    return 0;
}