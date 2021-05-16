 #include<iostream>
#include<conio.h>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    //double radius, Area;
    //float pi = 3.1416;
    //cout << "Enter the value of radius: " << endl;
    //cin >> radius;

    //Area = pi* radius * radius;

    //cout << "The value of area: " << Area << endl;

    //celcius to fahrenheit

    float celcius, fahrenheit;

    cout<< "Enter the value of Fahrenheit: " << endl;
    cin>> fahrenheit;
    cout << fixed;
    cout << setprecision(2);

    celcius = (fahrenheit - 32)/1.8;

    cout << "The temparature is: " << celcius << endl;




    getch();
}
