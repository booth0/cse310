#include <iostream>
#include <limits> // Include the <limits> header for numeric_limits
using namespace std;

// Function declarations
double Addition(double adder1, double adder2);
double Subtraction(double minuend, double subtrahend);
double Multiplication(double multiplier1, double multiplier2);
double Division(double dividend, double divisor);

int main() {
    double num1;
    double num2;
    double result;
    int choice = 0;

    cout << "Welcome to the C++ Calculator!" << endl;
    while (choice != 5) {
        cout << "\nPlease choose from the options below:" << endl << endl;
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Quit\n\n";
        cout << "Enter: ";
        cin >> choice;

        // If the choice is invalid, the failure will be cleared here
        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the invalid input
            cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
            continue; // Skip to the next iteration of the loop
        }

        if (choice != 5) {
            cout << "Please enter the first number: ";
            cin >> num1;
            cout << "Please enter the second number: ";
            cin >> num2;

            // If the choice is invalid, the failure will be cleared here
            if (cin.fail()) {
                cin.clear(); // Clear the error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the invalid input
                cout << "\nInvalid input. Please enter numbers only." << endl;
                continue; // Skip to the next iteration of the loop
            }
        }

        switch (choice) {
            case 1:
                result = Addition(num1, num2);
                cout << num1 << " + " << num2 << " = " << result << endl;
                break;
            case 2:
                result = Subtraction(num1, num2);
                cout << num1 << " - " << num2 << " = " << result << endl;
                break;
            case 3:
                result = Multiplication(num1, num2);
                cout << num1 << " * " << num2 << " = " << result << endl;
                break;
            case 4:
                if (num2 != 0) {
                    result = Division(num1, num2);
                    cout << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            case 5:
                cout << "Exiting the calculator. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
                break;
        }
        if (choice != 5) {
            cout << "\nPress Enter to continue...";
            cin.ignore(); // Ignore the newline character left in the input buffer
            cin.get();    // Wait for user to press Enter
        }
    }

    return 0;
}

// Function definitions
double Addition(double adder1, double adder2) {
    return adder1 + adder2;
}

double Subtraction(double minuend, double subtrahend) {
    return minuend - subtrahend;
}

double Multiplication(double multiplier1, double multiplier2) {
    return multiplier1 * multiplier2;
}

double Division(double dividend, double divisor) {
    return dividend / divisor;
}