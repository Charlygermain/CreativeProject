// assignment4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Name: Charly Germain                              Z#:23152040
//Course: Foundations of Computer Science(COP3014)
//Professor : Dr.Lofton Bullard
//Due Date :02/17/2020 Due Time :11:59


#include <iostream>
#include<cmath>

using namespace std;


void Compute(int a, int b, int c, double& area, double& semi)
{
    semi = (a + b + c) / 2;
    area = sqrt(semi * (semi - a) * (semi - b) * (semi - c));
}
int main()
{
    int a, b, c;
    double area;
    double semi;
    char userInput = 'Y';

    //declare variable for while loop
    //while loop
    //begin while loop
    //call Computer
    //end while loop return 0;

    while (userInput == 'Y' || userInput == 'y')
    {
        cout << " Enter three sides" << endl;
        cin >> a >> b >> c;
    }

    if (a + b <= c || a + c <= b || b + c <= a)
    {

        cout << "The lenght are invalid" << endl;
    }
        else 
   {
            Compute(a, b, c, area, semi);
            cout << "Side: A =" << a << ",B = " << b << ",C = " << c << "Area: " << area << "Semi: " << semi << endl;
    
        cout << "Would you like to continue?(Y/N):";
        cin >> userInput;
        cout << endl;
    }
        return 0;

    
    }






