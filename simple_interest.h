#ifndef SIMPLE_INTEREST_H   
#define SIMPLE_INTEREST_H   

#include <string>            
using namespace std;         
class SimpleInterest {       
private:                     
    double principal;        
    double rate;             
    double time;             
    double interest;         
    string name;            

public:                      
    SimpleInterest(double p, double r, double t, string n);  
    double calculateInterest();     
    double calculateAmount();       
    void display();                 
};

#endif  