/*
Ahnaf Abid
June 2, 2026
Lab 6: Leveraging AI as a C++ Coding Assistant
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string new_word;

    cout << "------------------------------- EXERCISE -------------------------------" << endl;
    cout << "Type a word: ";
    cin >> new_word;

    // 1. Print the 4th character of the word (index is 3, because strings use 0-based indexing)
    cout << "The 4th character is: " << new_word[3] << endl;

    // 2. Find and print the length of the word
    cout << "The length of the word is: " << new_word.length() << " characters." << endl;

    // 3. Replace three characters starting from the second character with "-- $ --"
    // (index 1 is the second character, and we are replacing 3 characters)
    string replaced_word = new_word;
    replaced_word.replace(1, 3, "-- $ --");
    cout << "After replacement: " << replaced_word << endl;

    // 4. Remove two characters from the end of the message
    // We can use pop_back() twice or erase() the last two characters
    replaced_word.pop_back();
    replaced_word.pop_back();
    cout << "After removing two characters from the end: " << replaced_word << endl;
    
    cout << "---------------------------------------------------------------------------" << endl;

    return 0;
}

// --- AI Assistant Used: Gemini ---
// Q1) Was the code correct? 
// Yes - output matched the expected results for both test cases

// Q2) Was it readable and properly commented? 
// Yes - clean and easy to follow with short comments on each step

// Q3) Were you able to explain each line of code? 
// Mostly - the string methods were familiar, but pop_back() was not taught in class

// Q4) Did it use the same programming concepts we learned in class? 
// Partially - used string indexing, length(), and replace() from class. However, pop_back() was NOT covered in class. We used erase() instead to remove characters from the end.

// Q5) Terminal Output:

// Type a word: terminal
// The 4th character is: m
// The length of the word is: 8 characters.
// After replacement: t-- $ --inal
// After removing two characters from the end: t-- $ --in