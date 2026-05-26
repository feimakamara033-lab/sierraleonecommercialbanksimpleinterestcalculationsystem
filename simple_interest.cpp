#include <iostream>          // Include input/output stream library for cin and cout
#include <iomanip>           // Include iomanip library for formatting output (setprecision)
#include "simple_interest.h" // Include our header file with the class definition

using namespace std;         // Allow using standard library functions without std::

// Constructor definition - initializes the object when created
SimpleInterest::SimpleInterest(double p, double r, double t, string n) {
    principal = p;           // Assign the parameter p to the member variable principal
    rate = r;                // Assign the parameter r to the member variable rate
    time = t;                // Assign the parameter t to the member variable time
                   // Assign the parameter n to the member variable name
    interest = 0;            // Initialize interest to 0 (will be calculated later)
}

// Method to calculate simple interest
double SimpleInterest::calculateInterest() {
    // Formula: SI = (P * R * T) / 100
    interest = (principal * rate * time) / 100;  // Calculate and store simple interest
    return interest;          // Return the calculated interest value
}

// Method to calculate total amount (Principal + Interest)
double SimpleInterest::calculateAmount() {
    double amount;            // Declare a variable to store the total amount
    calculateInterest();      // First calculate the interest
    amount = principal + interest;  // Add principal and interest to get total amount
    return amount;            // Return the total amount
}

// Method to display all details
void SimpleInterest::display() {
    cout << "\n--- CUSTOMER DETAILS ---" << endl;           // Print heading
                      // Print customer name
    cout << "Principal: Nle " << fixed << setprecision(2) << principal << endl;  // Print principal
    cout << "Rate: " << rate << "%" << endl;                // Print interest rate
    cout << "Time: " << time << " years" << endl;           // Print time period
    cout << "Simple Interest: Nle " << fixed << setprecision(2) << interest << endl;  // Print interest
    cout << "Total Amount: Nle " << fixed << setprecision(2) << calculateAmount() << endl;  // Print total
}

// Main function - program execution starts here
int main() {
    double p, r, t;          // Declare variables for principal, rate, and time
    string n;                // Declare variable for customer name
    int choice;              // Declare variable for menu choice
    
    // Display welcome message and menu
    cout << "\n===== SIERRA LEONE COMMERCIAL BANK =====" << endl;  // Print bank name
    cout << "     SIMPLE INTEREST CALCULATION SYSTEM" << endl;      // Print system name
    cout << "========================================" << endl;     // Print separator line
    
    cout << "\n1. Calculate Simple Interest" << endl;      // Menu option 1
    cout << "2. Calculate Total Amount" << endl;           // Menu option 2
    cout << "3. Display All Details" << endl;              // Menu option 3
    cout << "Enter your choice (1-3): ";                   // Ask user for choice
    cin >> choice;                                         // Read user's choice
    
    // Get customer information (common for all options)
                                          // Ignore newline character from previous input
    getline(cin, n);                                       // Read the full name including spaces
    
    cout << "Enter principal amount (Nle): ";              // Ask for principal amount
    cin >> p;                                              // Read principal value
    
    cout << "Enter interest rate (%): ";                   // Ask for interest rate
    cin >> r;                                              // Read rate value
    
    cout << "Enter time period (years): ";                 // Ask for time period
    cin >> t;                                              // Read time value
    
    // Create an object of SimpleInterest class
    SimpleInterest customer(p, r, t, n);                   // Create object with constructor
    
    // Process user's choice using switch statement
    switch(choice) {                                       // Check which option user selected
        case 1:                                            // If user chose 1
            cout << "\nSimple Interest: Nle " << fixed << setprecision(2) 
                 << customer.calculateInterest() << endl;  // Calculate and display interest
            break;                                         // Exit the switch
        
        case 2:                                            // If user chose 2
            cout << "\nTotal Amount (Principal + Interest): Nle " 
                 << fixed << setprecision(2) 
                 << customer.calculateAmount() << endl;    // Calculate and display total amount
            break;                                         // Exit the switch
        
        case 3:                                            // If user chose 3
            customer.display();                            // Display all customer details
            break;                                         // Exit the switch
        
        default:                                           // If user entered invalid choice
            cout << "\nInvalid choice! Please run the program again." << endl;  // Show error
    }
    
    cout << "\nThank you for using SLCB System!" << endl;  // Thank you message
    return 0;                                              // Return 0 to indicate successful execution
}
