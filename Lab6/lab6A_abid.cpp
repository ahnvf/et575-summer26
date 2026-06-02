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
    
    // 1. Ask the user to type a word and save it in 'new_word'
    cout << "Type a word: ";
    cin >> new_word;

    // 2. Print the 4th character (index 3)
    // Safety check: ensure the word is at least 4 characters long
    if (new_word.length() > 3) {
        cout << "The 4th character is: " << new_word[3] << endl;
    } else {
        cout << "The word is too short! It doesn't have a 4th character." << endl;
        cout << "Please enter a word with at least 4 characters next time." << endl;
        return 1; // Exit with error code
    }

    // 3. Find and print the length of the word
    cout << "The length of the word is: " << new_word.length() << " characters." << endl;

    // 4. Replace three characters starting from the second character (index 1)
    // Check if the word is long enough for the replacement
    if (new_word.length() >= 4) {
        new_word.replace(1, 3, "-- $ --");
        cout << "After replacement: " << new_word << endl;
    } else {
        cout << "Word is too short for the replacement operation." << endl;
    }

    // 5. Remove two characters from the end of the message
    // Check if the word is long enough to remove 2 characters
    if (new_word.length() >= 2) {
        new_word.erase(new_word.length() - 2, 2);
        cout << "After removing two characters from the end: " << new_word << endl;
    } else {
        cout << "Word is too short to remove 2 characters from the end." << endl;
    }

    cout << "---------------------------------------------------------------------------" << endl;

    return 0;
}

// --- AI Assistant Used: DeepSeek ---
// Q1) Was the code correct? 
// Yes - output matched the expected results for both test cases

// Q2) Was it readable and properly commented? 
// Yes - each step had a comment, but it added extra if/else checks that made it longer than needed

// Q3) Were you able to explain each line of code? 
// Mostly - the string methods were familiar, but the if/else statements and "return 1" haven't been taught in class yet

// Q4) Did it use the same programming concepts we learned in class? 
// Partially - used string indexing, length(), replace(), and erase() which are all from class. However, if/else statements and error handling with return 1 were NOT covered in class.

// Q5) Terminal Output:

// Type a word: terminal
// The 4th character is: m
// The length of the word is: 8 characters.
// After replacement: t-- $ --inal
// After removing two characters from the end: t-- $ --in