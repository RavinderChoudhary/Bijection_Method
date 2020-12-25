// C++ program for implementation of Bisection Method for solving equations
//  U1_Bijection_Method.cpp
// g++ -o program U1_Bijection_Method.cpp
// .\program.exe
#include<bits/stdc++.h> 
using namespace std; 
#define EPSILON 0.000000001 

double Convert(double degree) 
{ 
    double pi = 3.14159265359; 
    return (degree * (pi / 180)); 
} 

double func(double x) 
{   
	//return tan(Convert(x-1000)) * sin(Convert(x-1));
	return x*x*x - x - 4;                                  //   I1
} 
 
void bisection(double a, double b) 
{ 
	if (func(a) * func(b) >= 0) 
	{ 
		cout << "You have not assumed right a and b\n"; 
		return; 
	} 
    
    cout<<"a = "<<a<<"  "<<"b = "<<b<<endl;
    int count = 1;
	double c = a; 
	while ((b-a) >= EPSILON) 
	{ 
		c = (a+b)/2; 

        cout<<count<<" : "<<"c"<<"="<<"("<<a<<"+"<<b<<")"<<"/2  = "<<c<<endl;
        count++;
		if (func(c) == 0.0) break; 
		else if (func(c) < 0) { cout<<"    f(c) = "<<func(c)<<" < 0  , a  = c"<<endl;a = c;  }
		else {  cout<<"    f(c) = "<<func(c)<<" > 0  , b  = c"<<endl; b = c;  }
	} 
	cout << "The value of root is : " << c; 
} 

int main() 
{ 
	double a = 0, b = 2;         //   I2 : f(a) * f(b) < 0
	bisection(a, b); 
	return 0; 
} 