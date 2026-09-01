//
// Created by raahi on 1/9/2026.
//
#include <iostream>

using namespace std;

int main() {
    int num = 100;
    int *ptr = &num;

    cout << "Address of num is: " << ptr << endl
         << "Value of num is: " << *ptr << endl;

    *ptr = 50;

    cout << "Updated Value: " << *ptr << endl;

    return 0;
}