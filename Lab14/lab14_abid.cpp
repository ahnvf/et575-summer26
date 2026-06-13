/*
Ahnaf Abid
June 12, 2026
Lab 14: Function calling function using AI
AI Used: DeepSeek
*/

#include <iostream>
using namespace std;

// Function prototypes
int inputMarks();
int totalMarks(int m1, int m2, int m3);
float calculatePercentage(int m1, int m2, int m3);
char determineGrade(float percentage);
void displayResult(int m1, int m2, int m3, char grade);

int main() {
    // Input marks for three subjects
    cout << "Enter marks for three subjects (0-100 each):\n";
    int mark1 = inputMarks();
    int mark2 = inputMarks();
    int mark3 = inputMarks();

    // Calculate percentage (internally calls totalMarks)
    float percent = calculatePercentage(mark1, mark2, mark3);

    // Determine letter grade
    char grade = determineGrade(percent);

    // Display final result
    displayResult(mark1, mark2, mark3, grade);

    return 0;
}

// Function to input and validate a single mark (0-100)
int inputMarks() {
    int marks;
    while (true) {
        cout << "Enter marks (0-100): ";
        cin >> marks;
        if (marks >= 0 && marks <= 100) {
            return marks;
        } else {
            cout << "Invalid input! Marks must be between 0 and 100.\n";
        }
    }
}

// Function to calculate total marks
int totalMarks(int m1, int m2, int m3) {
    return m1 + m2 + m3;
}

// Function to calculate percentage by calling totalMarks()
float calculatePercentage(int m1, int m2, int m3) {
    int total = totalMarks(m1, m2, m3);
    return (static_cast<float>(total) / 300) * 100;
}

// Function to assign letter grade based on percentage
char determineGrade(float percentage) {
    if (percentage >= 90) {
        return 'A';
    } else if (percentage >= 80) {
        return 'B';
    } else if (percentage >= 70) {
        return 'C';
    } else if (percentage >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

// Function to display final result
void displayResult(int m1, int m2, int m3, char grade) {
    cout << "\nWith marks " << m1 << ", " << m2 << ", " << m3
         << " the GRADE is " << grade << endl;
}

/*
Step 1

The program inputs three subjects' marks, validates them (0-100), calculates
total and percentage, assigns a letter grade, and displays the result.
Required functions: inputMarks(), totalMarks(), calculatePercentage(),
determineGrade(), displayResult().
Call order: inputMarks() x3 -> calculatePercentage() (calls totalMarks())
-> determineGrade() -> displayResult()

Step 2

Prompt used: "Write a C++ program to calculate a student's final grade based
on marks in three subjects using function calling function with these exact
functions: inputMarks, totalMarks, calculatePercentage, determineGrade, displayResult"

Step 3

Pseudocode:

FUNCTION inputMarks():
    READ mark
    WHILE mark < 0 OR mark > 100
        PRINT "Invalid! Enter marks between 0-100"
    RETURN mark

FUNCTION totalMarks(m1, m2, m3):
    RETURN m1 + m2 + m3

FUNCTION calculatePercentage(m1, m2, m3):
    total = totalMarks(m1, m2, m3)
    RETURN (total / 300) * 100

FUNCTION determineGrade(percentage):
    IF percentage >= 90 RETURN 'A'
    ELSE IF percentage >= 80 RETURN 'B'
    ELSE IF percentage >= 70 RETURN 'C'
    ELSE IF percentage >= 60 RETURN 'D'
    ELSE RETURN 'F'

FUNCTION displayResult(m1, m2, m3, grade):
    PRINT "With marks", m1, m2, m3, "the GRADE is", grade

MAIN:
    m1 = inputMarks()
    m2 = inputMarks()
    m3 = inputMarks()
    percentage = calculatePercentage(m1, m2, m3)
    grade = determineGrade(percentage)
    displayResult(m1, m2, m3, grade)

Step 4

DeepSeek generated the following functions:

int inputMarks() {
    int marks;
    while (true) {
        cout << "Enter marks (0-100): ";
        cin >> marks;
        if (marks >= 0 && marks <= 100) return marks;
        else cout << "Invalid input! Marks must be between 0 and 100.\n";
    }
}

int totalMarks(int m1, int m2, int m3) { return m1 + m2 + m3; }

float calculatePercentage(int m1, int m2, int m3) {
    int total = totalMarks(m1, m2, m3);
    return (static_cast<float>(total) / 300) * 100;
}

char determineGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 80) return 'B';
    else if (percentage >= 70) return 'C';
    else if (percentage >= 60) return 'D';
    else return 'F';
}

void displayResult(int m1, int m2, int m3, char grade) {
    cout << "With marks " << m1 << ", " << m2 << ", " << m3
         << " the GRADE is " << grade << endl;
}

Step 5

Combined all functions in main(), called inputMarks() three times,
passed values to calculatePercentage() and determineGrade(), then displayResult()

Step 6

Compiled and executed. Terminal output:
Enter marks (0-100): 88
Enter marks (0-100): 90
Enter marks (0-100): 95
With marks 88, 90, 95 the GRADE is A

Step 7

No bugs found. Verified manually: (88+90+95)/300*100 = 91% = Grade A. Correct.
*/
