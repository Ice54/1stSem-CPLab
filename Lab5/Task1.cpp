//
// Created by raahi on 1/9/2026.
//
#include <iostream>
#include<cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    double num1 = rand() % 10, num2 = rand() % 10,expectedresult=0,result=0;
    char operation;
    cout<<"Select an operation(+,-,*,/):";
    cin>>operation;
    if(operation == '+') {
        cout<<num1<<" + "<<num2<<endl;
        expectedresult = num1 + num2;
    }else if(operation == '-') {
        cout<<num1<<" - "<<num2<<endl;
        expectedresult = num1 - num2;
    }else if(operation == '*') {
        cout<<num1<<" * "<<num2<<endl;
        expectedresult = num1 * num2;
    }else if(operation == '/') {
        if(num2 == 0) {
            num2=1;
        }
        cout<<num1<<" / "<<num2<<endl;
        expectedresult = num1 / num2;
    }else {
        cout<<"Invalid operation!"<<endl;
        return 0;
    }
    cout<<"Enter your Answer:";
    cin>>result;
    if(result==expectedresult) {
        cout<<"Correct!"<<endl;
    }else {
        cout<<"Incorrect. The correct answer is: "<<expectedresult<<endl;
    }
    return 0;
}