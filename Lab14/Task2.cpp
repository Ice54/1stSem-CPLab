//
// Created by raahi on 1/9/2026.
//
#include <iostream>

using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr1 = &arr[0];

    cout << "Value of arr[0] is: " << *ptr1 << endl;

    ptr1++;
    cout << "Value of arr[1] is: " << *ptr1 << endl;

    cout << "Address of arr[2] is: " << (ptr1 + 1) << endl;

    return 0;
}