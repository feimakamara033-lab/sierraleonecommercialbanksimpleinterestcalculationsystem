#ifndef SIMPLE_INTEREST_H    // Check if SIMPLE_INTEREST_H is not defined
#define SIMPLE_INTEREST_H    // Define SIMPLE_INTEREST_H to prevent multiple inclusions

#include <string>            // Include string library for using string data type

using namespace std;         // Allow using standard library functions without std::

class SimpleInterest {       // Declare a class named SimpleInterest
private:                     // Private section - members can only be accessed inside the class
    double principal;        // Store the principal amount (P)
    double rate;             // Store the interest rate (R)
    double time;             // Store the time period in years (T)
    double interest;         // Store the calculated simple interest (SI)
    string name;             // Store the customer name

public:                      // Public section - members can be accessed from outside the class
    SimpleInterest(double p, double r, double t, string n);  // Constructor declaration
    double calculateInterest();     // Method to calculate simple interest
    double calculateAmount();       // Method to calculate total amount
    void display();                 // Method to display all details
};

#endif  // End of the header guard