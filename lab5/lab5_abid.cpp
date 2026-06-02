/*
Ahnaf Abid
June 2, 2026
Lab 5: String methods
*/

#include<iostream>
#include<string>

using namespace std;

int main(){

    cout<<"\n ---- Example 1: String indexing"<<endl;
    // Characters within a string is accessible by using an index number
    // Index number starts from 0 (left-most)

    string username = "PeterPan123";
    cout<<"The fourth character of username = "<<username[3]<<endl;

    // at() method can be used to access a character in a string
    cout<<"The sixth character of username = "<<username.at(5)<<endl;

    cout<<"\n ---- Example 2: Length of a string"<<endl;
    // Length method shows the number of characters in a string include the whitespace
    int num_username = username.length();
    cout<<"There are "<<num_username<<" characters in username."<<endl;

    cout<<"\n ---- Example 3: Adding strings"<<endl;
    // String can be concatenated or added by using the + operator
    string n = "Never";
    string m = "Again";
    cout<<n + m<<endl;

    cout<<"\n ---- Example 4: Subtracting character from a string"<<endl;
    // substr() method extracts characters from a string
    //substr(x,y) --> x = starting of extracting index, y = amount of characters to be extracted from index x
    cout<<"Extracted word = "<<n.substr(1,4)<<endl;

    cout<<"\n ---- Example 5: Inserting character/s into a string"<<endl;
    // insert() method inserts chararcters into a string
    // inert(x,y) --> x = inserting index position, y = characters to be inserted
    // For example, insert the word LAND in between the username as "PeterLANDPan123"
    cout<<username<<endl;
    username.insert(5,"LAND"); // Automatically update the string value
    cout<<username<<endl;

    cout<<"\n ---- Example 6: Add character/s to the end of a string"<<endl;
    // append() method adds characters to the end of a string
    // append(x) --> x = characters to be added to the end of the string
    username.append("END"); // Automatically update the string value. Accessor method
    cout<<username<<endl;

    cout<<"\n ---- Example 7: Replacing characters in a string"<<endl;
    // replace() method replaces characters in a string
    // replace(x,y,z) --> = index where the replacement starts, y = the number of characters to be replaced, z = new characters of the replacement
    string name = "Peter Pan";
    cout<<name<<endl;
    // Replace 'eter' with 'atrick'
    name.replace(1, 4, "atrick"); // Automatically update the string value. Accessor method
    cout<<name<<endl;

    cout<<"\n ---- Example 8: Erasing chararcters from a string"<<endl;
    // erase() method removes characters from a string
    // erase(x,y) --> x = index where characters will be removed, y = amount of characters to be removed from index x 
    // Erase the word 'an' from 'Patrick Pan'
    name.erase(9,2); // Automatically update the string value. Accessor method
    cout<<name<<endl;

    cout<<"\n ---- Example 9: Find the index of characters in a string"<<endl;
    // find() method returns the index of a found character
    // find(x) --> x = character/s to be found
    // If a character is not found, the return value is -1
    cout<<username<<endl;
    int index_r = username.find("Pan");
    cout<<"Index of letter pan = "<<index_r<<endl;
    int never = username.find("NEVER");
    cout<<"Index of NEVER = "<< never <<endl;


    return 0;
}