/*
Ahnaf Abid
Lab 8: AI Practice
June 3, 2026
*/

#include <iostream>
#include <iomanip>  // For std::fixed and std::setprecision

using namespace std;

// Function prototypes
double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);
double celsiusToKelvin(double celsius);
double fahrenheitToKelvin(double fahrenheit);

int main() {
    int choice;
    double inputTemp, outputTemp;

    // Display menu
    cout << "Choose conversion type:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Celsius to Kelvin\n";
    cout << "4. Fahrenheit to Kelvin\n";
    cout << "Enter choice: ";
    cin >> choice;

    // Process user's choice
    switch (choice) {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> inputTemp;
            outputTemp = celsiusToFahrenheit(inputTemp);
            cout << fixed << setprecision(1);
            cout << inputTemp << "°C is " << outputTemp << "°F" << endl;
            break;

        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> inputTemp;
            outputTemp = fahrenheitToCelsius(inputTemp);
            cout << fixed << setprecision(1);
            cout << inputTemp << "°F is " << outputTemp << "°C" << endl;
            break;

        case 3:
            cout << "Enter temperature in Celsius: ";
            cin >> inputTemp;
            outputTemp = celsiusToKelvin(inputTemp);
            cout << fixed << setprecision(1);
            cout << inputTemp << "°C is " << outputTemp << "K" << endl;
            break;

        case 4:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> inputTemp;
            outputTemp = fahrenheitToKelvin(inputTemp);
            cout << fixed << setprecision(1);
            cout << inputTemp << "°F is " << outputTemp << "K" << endl;
            break;

        default:
            cout << "Invalid choice. Please restart the program." << endl;
    }

    return 0;
}

// Function definitions
double celsiusToFahrenheit(double celsius) {
    return (1.8 * celsius) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToKelvin(double fahrenheit) {
    // First convert to Celsius, then to Kelvin
    double celsius = (5.0 / 9.0) * (fahrenheit - 32);
    return celsius + 273.15;
}

// 1. Does the AI code use C++ concepts you're unfamiliar with? Explain.
// Yes - it used functions defined outside of main() and switch/case statements, neither of which have been covered in class yet.

// 2. Are there any issues or improvements you noticed? Explain.
// The lab asked for if/else but the AI used switch/case instead.
// The formulas and output were all correct though.

// 3. What methods did you use to test if the AI code was working as it should? Explain.
// I tested with known values like 0C = 32F and 100C = 212F to verify the results were correct.