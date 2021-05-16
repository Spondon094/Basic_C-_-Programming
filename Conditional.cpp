#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    //int num1=40, num2=80, max;

   // max = (num1>num2)? num1:num2;

    //cout << max;

    int num;

    cout << "Enter an integer: " << endl;
    cin >> num;

    (num%2==0)? cout << num << " is Even" : cout << num << " is odd";



    getch();
}
