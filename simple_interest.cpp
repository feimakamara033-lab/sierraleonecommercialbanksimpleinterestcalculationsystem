#include <iostream>          
#include <iomanip>           
#include "simple_interest.h" 

using namespace std;         

SimpleInterest::SimpleInterest(double p, double r, double t, string n) {
    principal = p;           
    rate = r;                
    time = t;                
                   
    interest = 0;            
}


double SimpleInterest::calculateInterest() {
    // Formula: SI = (P * R * T) / 100
    interest = (principal * rate * time) / 100;  
    return interest;          
}


double SimpleInterest::calculateAmount() {
    double amount;            
    calculateInterest();      
    amount = principal + interest;  
    return amount;        
}


void SimpleInterest::display() {
    cout << "\n--- CUSTOMER DETAILS ---" << endl;         
                      // Print customer name
    cout << "Principal: Nle " << fixed << setprecision(2) << principal << endl; 
    cout << "Rate: " << rate << "%" << endl;                
    cout << "Time: " << time << " years" << endl;           
    cout << "Simple Interest: Nle " << fixed << setprecision(2) << interest << endl;  
    cout << "Total Amount: Nle " << fixed << setprecision(2) << calculateAmount() << endl; 
}


int main() {
    double p, r, t;           
    string n;                 
    int choice;              
    

    cout << "\n===== SIERRA LEONE COMMERCIAL BANK =====" << endl;  
    cout << "     SIMPLE INTEREST CALCULATION SYSTEM" << endl;     
    cout << "========================================" << endl;     
    
    cout << "\n1. Calculate Simple Interest" << endl;     
    cout << "2. Calculate Total Amount" << endl;           
    cout << "3. Display All Details" << endl;              
    cout << "Enter your choice (1-3): ";                   
    cin >> choice;                                         
    
   
    getline(cin, n);                                    
    
    cout << "Enter principal amount (Nle): ";             
    cin >> p;                                              
    
    cout << "Enter interest rate (%): ";                 
    cin >> r;                                              
    
    cout << "Enter time period (years): ";                
    cin >> t;                                              
    
    
    SimpleInterest customer(p, r, t, n);                   
    
   
    switch(choice) {                                      
        case 1:                                           
            cout << "\nSimple Interest: Nle " << fixed << setprecision(2) 
                 << customer.calculateInterest() << endl; 
            break;                                        
        
        case 2:                                           
            cout << "\nTotal Amount (Principal + Interest): Nle " 
                 << fixed << setprecision(2) 
                 << customer.calculateAmount() << endl;    
            break;                                          
        
        case 3:                                            
            customer.display();                          
            break;                                        
        
        default:                                          
            cout << "\nInvalid choice! Please run the program again." << endl;  
    }
    
    cout << "\nThank you for using SLCB System!" << endl;  
    return 0;                                              
}
