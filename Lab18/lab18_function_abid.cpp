/*
Ahnaf Abid
June 17 and 18, 2026
Lab 18: Console Failure and File Streaming Functions
*/
#include<iostream>
#include<fstream>

using namespace std;

// Function to check if a proper data type is collected for an integer
void checknumber(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(cin.fail())
        cout<<"Error! Dismatched data type!"<<endl;
    else
        cout<<"Entered number = "<<num<<endl;

    // Reset the cin status
    cin.clear();
    cin.ignore(10000, '\n');

    cout<<"--- END OF FUNCTION ---"<<endl;
}

// Example 2: Validate a data type
float validatenumber(){
    float n;
    do{
        cout<<"Enter a number: ";
        if(!(cin>>n)){
            cout<<"Invalid data type!"<<endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
        else{
            return n;
        }
    }while(true);
}

// Example 3: Input and output files
void iofiles(){
    // Declare the objects to handle files
    // Input file object 'fin'
    ifstream fin;
    // Output file object 'fout'
    ofstream fout;

    // Read file 'samplefile.txt'
    // Use the 'fin' object along with the 'open' method to open the txt file
    fin.open("samplefile.txt");

    // Declare a variable 'line' to temporary store each line of 'samplefile.txt'
    string line;

    /*
    While loop to go through each line in the txt file.
    For each line, we are going to use the getline() method to read and hold each line of the txt file
    in variable 'line'
    */
    int linecounter = 1;
    while(getline(fin, line)){
        cout<<"Line "<<linecounter<<" = \t"<<line<<endl;
        linecounter ++;
    }

    // Close the file
    fin.close();
}

// Example 4: Write file
// Writing a file with an 'open' method, c++ will automatically create the file if it doesn't exist
// If the file exists, then c++ will overwrite file
void writefile(){
    // Output file object 'fout'
    ofstream fout;

    fout.open("outputfile.txt");

    // To write in a file, we use the output file object fout
    fout<<"Good Morning!"<<endl;
    for(int n = 3; n>0; n--){
        fout<<n<<endl;
    }
    fout<<"End of file"<<endl;

    fout.close();
}

// Example 5: Appending data to an existing file
// fout.open() we need to add the argument ios::app
void appendfile(string filename){
    // Output file object 'fout'
    ofstream fout;
    fout.open(filename, ios::app);
    fout<<"Ahnaf Abid"<<endl;

    fout.close();
}

// LAB EXERCISE 1
// Function to perform +, -, *, /, % operation on two numbers
double calculate(double num1, double num2){
    char op;
    bool valid = false;
    double result = 0;

    while(!valid){
        cout<<"Enter an operation symbol (+, -, *, /, %): ";
        cin>>op;

        if(cin.fail() || (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')){
            cout<<"Invalid symbol! Try again."<<endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
        else{
            valid = true;
            if(op == '+') result = num1 + num2;
            else if(op == '-') result = num1 - num2;
            else if(op == '*') result = num1 * num2;
            else if(op == '/') result = num1 / num2;
            else if(op == '%') result = (int)num1 % (int)num2;
        }
    }
    return result;
}

// LAB EXERCISE 2
// Function to create and write a new text file
void createFile(){
    ofstream fout;
    fout.open("data_user.txt");
    fout<<"This is my output file - Ahnaf Abid.\n";
    fout.close();
}

// Function to append text to an existing text file
void appendMessage(string message){
    ofstream fout;
    fout.open("data_user.txt", ios::app);
    fout<<message<<endl;
    fout.close();
}

// Function to create a new file and overwrite text in the new file
void overwriteFile(string filename, string text){
    ofstream fout;
    fout.open(filename);
    fout<<text<<endl;
    fout.close();
}