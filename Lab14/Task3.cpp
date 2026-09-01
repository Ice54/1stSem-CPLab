//
// Created by raahi on 1/9/2026.
//
#include <iostream>

using namespace std;

// Function to swap two numbers using pointers
void swapValues(int *a, int *b) {
    int temp = *a; // Store the value pointed to by a
    *a = *b;       // Assign b's value to a
    *b = temp;     // Assign temp's value to b
}

int main() {
    int a = 10, b = 20;

    cout << "Before swap:" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    // Pass the addresses of a and b to the function
    swapValues(&a, &b);

    cout << "\nAfter swap:" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    return 0;
}