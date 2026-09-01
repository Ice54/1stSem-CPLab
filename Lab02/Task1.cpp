//
// Created by raahi on 1/9/2026.
//
#include<iostream>
using namespace std;
int main()
{
    float celsius, farhenheit = 0.0f;
    cout << "Enter Farhenheit to convert to Celsius: ";
    cin >> farhenheit;
    celsius = (farhenheit - 32) * 5 / 9;
    cout << endl << farhenheit << " Farhenheit in Celsious is: " << celsius;
    return 0;
}