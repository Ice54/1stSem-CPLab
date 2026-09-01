//
// Created by raahi on 1/9/2026.
//
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int arr[20]={};
    for (int i = 0; i < 20; i++) {
        arr[i]=i+1;
    }
    ofstream myfile3("arr_num.txt");
    if (myfile3.is_open()) {
        for (int i = 0; i < 20; i++) {
            myfile3<<arr[i]<<endl;
        }
    }
    return 0;
}