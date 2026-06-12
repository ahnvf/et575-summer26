/*
Ahnaf Abid
june 12, 2026
Lab 12: nested loops
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    cout<< "\n---- Example 1: nested while loop ----"<<endl;
    // One run of the outer loop will have one complete cycle of the inner loop
    int i =0;
    while (i++<3){
        cout<< "OUTER loop = "<<i<<endl;
        // inner loop, print from 1 to 5
        cout<<"\t\t INNER loop"<<endl;
        int j = 0;
        while (j++ < 5) {
            cout<<"\t"<<j;
        }
        cout<<endl;

    }
    cout<<"\n---- Example 2: nested for loop ----"<< endl;
    // cinema seats arrangement
    // row and seats per row (column)  
    int row = 0, seats = 0;
    cout<<"Enter the number of rows: "; 
    cin>>row;
    cout<<"Enter the number of seats: "; 
    cin>>seats;

    for (int r = 1; r <= row; r++){
        for (int c = 1; c <= seats; c++){
            cout<<"Row "<<r<<" seat  "<<c<<"\t";
        }
        cout<<endl;
    }

    cout<<"\n---- Example 3: Graphing using nested loops ----"<< endl;
    const int GRAPHSIZE = 9;
    for (int row = 1; row <= GRAPHSIZE ; row++){
        for (int col = 1 ; col <= GRAPHSIZE ; col++){
            if (col == 5 || row == 5) 
                cout<<" x ";
            else 
                cout<< " . ";
        }
        cout << endl;
    }

    cout << "\n---- Example 4: graphing H using nested loops ----"<<endl;
    int dimension = 10;
    for (int row = 1; row <= dimension ; row++){
        for (int col = 1 ; col <= dimension ; col++){
            if  ((row >=3 && row <=8 && col >=3 && col <=4) ||
                (row >=5 && row <=6 && col >=5 && col <=6) ||
                (row >=3 && row <=8 && col >=7 && col <=8)
            )
                cout << " % ";
            else 
                cout << " . ";

        }
        cout << endl;
    }


    cout<< "---- EXERCISE A: Number guessing game ----"<<endl;
    // declare constant for the correct number
    const int GUESS = 5;
    int userGuess = 0;

    do {
        // collect guess
        cout<<"Enter a number between 1 and 10: ";
        cin>>userGuess;

        // validate range using while loop
        while(userGuess < 1 || userGuess > 10){
            cout<<"Invalid! Enter a number between 1 and 10: ";
            cin>>userGuess;
        }

        // check if too high, too low, or correct
        if(userGuess > GUESS){
            cout<<"The entered number is high."<<endl;
        }
        else if(userGuess < GUESS){
            cout<<"The entered number is low."<<endl;
        }

    } while(userGuess != GUESS);

    cout<<"Correct! You guessed the number!"<<endl;

    cout<< "---- EXERCISE B: 2D graph ----"<<endl;
    // 10x10 nested loop graph
    int dim = 10;
    for(int row = 1; row <= dim; row++){
        for(int col = 1; col <= dim; col++){
            // left bar: rows 2-7, cols 3-4
            // right bar: rows 2-7, cols 7-8
            // crossbar: rows 6-7, cols 3-8
            // bottom stem: rows 8-9, cols 5-6
            if ((row >= 2 && row <= 7 && col >= 3 && col <= 4) ||
                (row >= 2 && row <= 7 && col >= 7 && col <= 8) ||
                (row >= 6 && row <= 7 && col >= 3 && col <= 8) ||
                (row >= 8 && row <= 9 && col >= 5 && col <= 6))
                cout<<" % ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }

    return 0;
}