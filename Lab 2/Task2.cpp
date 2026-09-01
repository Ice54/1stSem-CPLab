//
// Created by raahi on 1/9/2026.
//
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the Dimensions of the Rectangle: "<<endl;
    double lenght, width, area, perimeter = 0.0;
    cout << "Lenght = ";
    cin >> lenght;
    cout << "Width = ";
    cin>>width;
    area = lenght * width;
    perimeter = 2 * (width + lenght);
    cout << "The Area of the Rectangle = " << area << endl << "The Perimeter of the Rectangle = " << perimeter;
    return 0;
}