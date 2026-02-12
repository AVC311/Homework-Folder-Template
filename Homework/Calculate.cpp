#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
constexpr double p = M_PI;
constexpr int squ = 1;
constexpr int rec = 2;
constexpr int cir = 3;
constexpr int cyl = 4;
int main()
{
    int choice;
    double a = 0;
    cout << squ << ". Calculate the area of a square" << endl;
    cout << rec << ". Calculate the area of a rectangle" << endl;
    cout << cir << ". Calculate the area of a circle" << endl;
    cout << cyl << ". Calculate the area of a cylinder" << endl;
    cout << "Please enter your choice (1-4): ";
    cin >> choice;
    const int userChoice = choice;
    switch (userChoice)
    {
case squ:
{
double s;
cout << "Enter side lengths: ";
cin >> s;
a = s*s;
break;
}

case rec: 
{
double l, w;
cout << "Enter length: ";
cin >> l;
cout << "Enter width: ";
cin >> w;
a = l*w;
break;
}

case cir: 
{
double r;
cout << "Enter radius: ";
cin >> r;
a = p*r*r;
break;
}

case cyl: 
{
double r, h;
cout << "Enter radius: ";
cin >> r;
cout << "Enter height: ";
cin >> h;
a = 2*p*r*h+2*p*r*r;
break;
}
default:
cout << "Invalid choice" << endl;
return 1;
    }
    cout << "Total area: " << a << endl; 
}