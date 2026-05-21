#include <iostream>// to enable input output
#include<iomanip>// to format output like set precision

using namespace std;// to avoid writting std:: eg std::cin std::cout
int option;
double inputsimpleinterest;
double inputprincipal;
double inputrate;
double inputtime;

string inputname;
class SLCBSICS{

private:
        double simpleInterest;
        double principal;
        double rate;
        double time;
        string name;

public:
       SLCBSICS(double simpleInterest, double principal, double rate, double time, string name ){
           this->simpleInterest=simpleInterest;
           this->principal=principal;
           this->rate=rate;
            this->time=time;
            this->name=name;


        }

double getSimpleinterest(){
    return simpleInterest;

}
double getPrincipal(){
    return principal;
}
double getRate(){
    return rate;
}
double getTime(){
    return time;
}
string getName(){
    return name;
}

};


////////////////////////////////////function////////////////////////////////////////////////////////


void simpleInterest(){


 cout  <<'\n'  << "ENTER PRINCIPAL: ";
cin>>  inputprincipal, '\n';

cout  <<'\n'  << "ENTER RATE: ";
cin>> inputrate , '\n';

cout  <<'\n'  << "ENTER TIME IN YEARS: ";
cin>>  inputtime, '\n';

double si = (inputprincipal*inputrate*inputtime)/100;
cout << " SIMPLE INTEREST:Nle1 "<< fixed<<setprecision(2)<< si << endl;

}


void Amount(){


cout  <<'\n'  << "ENTER PRINCIPAL: ";
cin>>  inputprincipal, '\n';

cout  <<'\n'  << "ENTER RATE: ";
cin>> inputrate , '\n';

cout  <<'\n'  << "ENTER TIME IN YEARS: ";
cin>>  inputtime, '\n';

double si = (inputprincipal*inputrate*inputtime)/100;
double Amount = inputprincipal + inputsimpleinterest;
cout << " SIMPLE INTEREST: "<< fixed<<setprecision(2)<< si << endl;
cout << " TOTAL AMOUNT:Nle "<< fixed<<setprecision(2)<< Amount << endl;


}

void principal(){
 cout  <<'\n'  << "ENTER SIMPLE INTEREST: ";
cin>> inputsimpleinterest, '\n';

cout  <<'\n'  << "ENTER RATE: ";
cin>> inputrate , '\n';

cout  <<'\n'  << "ENTER TIME IN YEARS: ";
cin>>  inputtime, '\n';

if(inputrate*inputtime != 0 ){

    double principals = (inputsimpleinterest*100)/(inputrate*inputtime);
    cout << " PRINCIPAL:Nle "<< fixed<<setprecision(2)<< principals << endl;

}else {
    cout << " ERROR: RATE AND TIME CANNOT BE 0!! " << endl;

}



}

void rate(){



cout  <<'\n'  << "ENTER PRINCIPAL: ";
cin>> inputprincipal , '\n';

cout  <<'\n'  << "ENTER SIMPLE INTEREST: ";
cin>> inputsimpleinterest, '\n';


cout  <<'\n'  << "ENTER TIME IN YEARS: ";
cin>>  inputtime, '\n';

if(inputprincipal*inputtime != 0 ){

    double  rate = (inputsimpleinterest*100)/(inputprincipal*inputtime);
    cout << " RATE: "<< fixed<<setprecision(2)<< rate << "%" << endl;


}else {
    cout << " ERROR: PRINCIPAL AND TIME CANNOT BE 0!! " << endl;

}



}

void time(){



cout  <<'\n'  << "ENTER PRINCIPAL: ";
cin>>  inputprincipal, '\n';

cout  <<'\n'  << "ENTER SIMPLE INTEREST: ";
cin>> inputsimpleinterest , '\n';

cout  <<'\n'  << "ENTER RATE: ";
cin>>  inputrate, '\n';


  if(inputprincipal*inputrate != 0 ){

    double times = (inputsimpleinterest*100)/(inputprincipal*inputrate);
    cout << " TIME: "<< times <<" YRS"<< endl;



}else {
    cout << " ERROR: PRINCIPAL AND RATE CANNOT BE 0!! " << endl;

}

}


////////////////////////////////////////////////////////////////////////////////////////////
int main (){


cout<< '\n'<< '\n' <<" SLCB SIMPLE INTEREST CALCULATION SYSTEM" << '\n';
cout<< '\n'<< " 1. FIND SIMPLE INTEREST (SI) " << '\n';
cout << " 2. FIND AMOUNT (A)" << '\n';
cout <<" 3. FIND PRINCIPAL (P)" << '\n';
cout << " 4. FIND RATE (R %)" << '\n';
cout <<" 5. FIND TIME (T YRS)" << '\n';
cout  <<'\n'  << "SELECT YOUR OPTION: ";
cin>>  option, '\n';


if(option==1){
cout  <<'\n'  << "1. FIND SIMPLE INTEREST (SI)  ";
simpleInterest();
}
else if(option==2){
cout  <<'\n'  << "2. FIND AMOUNT (A)  ";
Amount();
}
else if(option==3){
    cout  <<'\n'  << "3. FIND PRINCIPAL (P) ";
    principal();

}
else if(option==4){

   cout  <<'\n'  << "4. FIND RATE (R %) ";
   rate();
  
}
else if(option==5){
 cout  <<'\n'  << "5. FIND TIME (T YRS) ";
 time();

}else{
 cout  <<'\n'  << "OPTION " << option<<" IS NOT FOUND !!!! " ;

}



SLCBSICS slcb(inputsimpleinterest,inputprincipal,inputrate, inputtime,inputname );





return 0;

}



