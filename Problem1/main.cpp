//Andrew McGuan
//Problem 1 

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  //Declare constant variables
 int c0; 
 double m;
 double r;

  //Declare calculated values
  double ct;
  double A;

  //user input
  double t;

  /****model paramaters**/
  c0 = 10;
  m = 2;
  r = 0.2;

  cout<< "For the Model where m = "<<m << ", c0 = "
<< c0<< ", and r = "<< r << "..."<<endl;  
  cout<< "Input t [weeks] for the sub-exponential growth model"<<endl;
  cin>>t;

  //convert t from weeks too days
  t = t*7;
  //equation two
  A = pow (c0, (1/m));
  //equation three
  ct = pow (((r/m)*t+A),m);

  //Display reults
  cout<< " c("<<t/7.0 <<") = " <<ct<< endl;
  return 0;
  
    
  
}