/*
Ahnaf Abid
Lab 10, loop mechanisms
June 10, 2026
*/

#include <iostream>
using namespace std;

int main(){

    cout<<"\n ---- Example 1: for loop as counter"<<endl;
    /*
    for loop has three main statements for(initial action; boolean expression; update action)
    */
   // use a for loop to print Hello 5 times
    int x = 3;
    for(int x = 1; x <=5 ; x++){
        cout<<"Hello "<<x<<endl;
    }
    cout<<"End of for loop. Value of x = "<<x<<endl;

    cout<<"\n ---- Example 2: for loop as a counter with different steps"<<endl;
    // Print from 1 to 9 step 2
    for(int x = 1; x <= 9 ; x += 2){
        cout<<x<<"\t";
    }

    cout<<"\n ---- Example 3: for loop as a decrement counter with different steps"<<endl;
    // Print from 10 to -10 step 3 --> 10, 7, 4, 1, -2, -5, -8
    for(int x = 10; x >= -10 ; x -= 3){
        cout<<x<<"\t";
    }

    cout<<"\n ---- Example 4: for loop with conditional statement"<<endl;
    // Count the numbers that are multiples of 5 between -20 and 20 step 4
    int counter = 0;
    int sumpositive = 0;
    for(int x = -20; x <= 20; x += 4){
        cout<<x<<"\t";
        if(x % 5 == 0 && x != 0) counter++;
        if(x > 0) sumpositive += x;
    }
    cout<<endl<<"Numbers that are multiples of 5: "<<counter<<endl;
    cout<<"Sum of positive numbers: "<<sumpositive<<endl;

    cout<<"\n ---- Example 5: while loop as a counter"<<endl;
    // while loop to print from 1 to 5, inclusive
    int n = 1;
    while (n<=5){
        cout<<n<<endl;
        n++;
    }
    cout<<endl;

    n = 1;
    while (n++ <=5){
        cout<<n<<endl;
    }
    cout << endl;

    n = 1;
    while (++n <=5){
        cout<<n<< endl;
    }

    cout << "---- Example 6: while loop to validate input ----"<<endl;
    //while loop to recollect a number
    //accept numbres between 1 and 9
    int number = 0;
    cout<<"Enter a number: "<<endl;
    cin>>number;

    // While loop to recollect a number that is not between 1 and 9
    while(!(number>=1 && number <= 9)){
        cout<<"Enter a new number between 1 and 9: ";
        cin>>number;
    }
    cout<<"Collected number: "<<number<<endl;

    
    cout<<"\n ----- Exercise 1 -----"<<endl;
    // declare counter for multiples of 2
    int multOf2 = 0;
    // for loop decrementing from 21 to -21 step 5
    for(int x = 21; x >= -21; x -= 5){
        cout<<x<<"\t";
        // count multiples of 2
        if(x % 2 == 0) multOf2++;
    }
    cout<<endl<<"Multiples of 2: "<<multOf2<<endl;

    cout<<"\n ----- Exercise 2 -----"<<endl;
    // declare start variable
    int start = 0;
    // collect starting value from user
    cout<<"Enter the starting value: ";
    cin>>start;
    // for loop from start to 30 step 4
    for(int x = start; x <= 30; x += 4){
        cout<<x<<"\t";
    }
    cout<<endl;

    return 0;
}