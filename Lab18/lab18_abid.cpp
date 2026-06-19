/*
Ahnaf Abid
June 17 and 18, 2026
Lab 18, Console Failure and File Streaming
*/
#include<iostream>
#include "lab18_function_abid.cpp"

using namespace std;

int main(){
    cout<<"\n---- Example 1: Console Failure Test"<<endl;
    checknumber();

    cout<<"\n---- Example 2: Console Failure Test"<<endl;
    float n = validatenumber();
    cout<<n<<endl;

    cout<<"\n---- Example 3: Read File"<<endl;
    iofiles();

    cout<<"\n---- Example 4: Write File"<<endl;
    writefile();

    cout<<"\n---- Example 5: Append Data Into A File"<<endl;
    string filename = "outputfile.txt";
    appendfile(filename);

    cout<<"\n---- Lab Exercise 1 ----"<<endl;
    double result = calculate(10, 5);
    cout<<"Result = "<<result<<endl;

    cout<<"\n---- Lab Exercise 2 ----"<<endl;
    createFile();
    appendMessage("This is an appended message.");
    overwriteFile("newfile.txt", "This text overwrites the file.");

    return 0;
}