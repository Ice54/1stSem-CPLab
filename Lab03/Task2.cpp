//
// Created by raahi on 1/9/2026.
//
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: "<<endl;
    cin>>number;
    if((number%2)==0) {
        cout<<"Number is even"<<endl;
    }else {
        cout<<"Number is odd"<<endl;
    }
    return 0;
}
