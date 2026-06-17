/*
Ahnaf Abid
Homework 4: arrays
*/


#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

const int SIZE = 5;

// helper function: check if a number already exists in the array
bool checkRepeat(int arr[], int sizearray, int num){
    for(int i = 0; i < sizearray; i++){
        if(arr[i] == num)
            return true;
    }
    return false;
}

// function 1: winningDigits - generate 5 random unique numbers between 1 and 19
void winningDigits(int arr[], int size){
    srand(time(0));
    for(int i = 0; i < size; i++){
        int num = 1 + rand()%19;
        while(checkRepeat(arr, i, num)){
            num = 1 + rand()%19;
        }
        arr[i] = num;
    }
}

// function 2: userTicket - collect 5 unique numbers between 1 and 19 from user
void userTicket(int arr[], int size){
    for(int i = 0; i < size; i++){
        int num;
        cout<<"Enter ticket number "<<(i+1)<<" (1-19): ";
        cin>>num;
        while(num < 1 || num > 19 || checkRepeat(arr, i, num)){
            if(checkRepeat(arr, i, num))
                cout<<"Number already used! Enter a different number: ";
            else
                cout<<"Invalid! Enter a number between 1 and 19: ";
            cin>>num;
        }
        arr[i] = num;
    }
}

// function 4: checkWinner - compare both arrays and count matches
int checkWinner(int winning[], int ticket[], int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(winning[i] == ticket[i])
            count++;
    }
    return count;
}

// function 5: printResult
void printResult(int winning[], int ticket[], int size, int matches){
    cout<<"Winning digits = \t";
    for(int i=0; i<size; i++) cout<<winning[i]<<"\t";
    cout<<endl;

    cout<<"User ticket = \t\t";
    for(int i=0; i<size; i++) cout<<ticket[i]<<"\t";
    cout<<endl;

    cout<<"Match numbers = "<<matches<<endl;
}

int main(){
    int winning[SIZE];
    int ticket[SIZE];

    winningDigits(winning, SIZE);
    userTicket(ticket, SIZE);
    int matches = checkWinner(winning, ticket, SIZE);
    printResult(winning, ticket, SIZE, matches);

    return 0;
}