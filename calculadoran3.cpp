#include <iostream>
#include <cmath>
using namespace std;

int main() {
double x,y ;

string sign;

cout<<"In case you are using sin,cos or tan the second number will not be used (same case with √). In case you're using an exponent write ** in the operator, the second number will be the number its raised" << endl ;
cout<<"Operators: +,-,/,*,sin,cos,tan,**,√,log" <<endl;
cout<<"Enter the operator: " ;
cin>> sign ;
cout<<"Enter the first number: " ;
cin>> x ;
cout<<"Enter the second number" ;
cin>> y ;

if (sign=="sin" ) {
    cout<<"Result:" <<sin(x) ; 
}
else if (sign=="cos") {
    cout<<"Result:" <<cos(x) ;
}
else if (sign=="tan") {
    cout<<"Result:" <<tan(x) ;
}
else if (sign=="+") {
    cout<<"Result:" <<x + y ;
}
else if (sign=="-") {
    cout<<"Result:"<< x - y ;
}
else if (sign=="*") {
    cout<<"Result: "<< x * y ;
}
else if (sign=="/") {
    cout<<"Result:" <<x / y ;
}
else if (sign=="**") {
    cout<<"Result:" << pow(x, y); 
}
    else if (sign=="√") {
    cout<<"Result:" << sqrt(x); 
}
   else if (sign=="log") {
    cout<<"Result:" << log(x); 
}
else {
    cout<<"Invalid operator";
}

    return 0;
}