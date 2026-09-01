//
// Created by raahi on 1/9/2026.
//
#include <iostream>

using namespace std;

float add(float num1 , float num2) {
    return num1 + num2;
}
float sub(float num1 , float num2) {
    return num1 - num2;
}
float mult(float num1 , float num2) {
    return num1 * num2;
}
float div (float num1 , float num2) {
    float result = 0;
    if (num2 == 0) {
        result = -1;
    }else
        result = num1 / num2;

    return result;
}

int main() {
    float num=0 , num2=0 , num1=0,result=0;
    int loop_counter=0;
    char operator_symbol;
    while (num !=-1) {
        if (loop_counter ==0) {
            cout << "Enter two Numbers:";
            cin >> num1;
            cin>>  num2;
        } else {
            cout << "Enter two numbers: (-1 to exit)";
            cin >> num1;
            if (num1 == -1)
                break;

            cin >> num2;
        }
        if (num1 == -1 or num2 == -1) {
            num = -1;
            continue;
        }
        cout<<"Enter the Operator:";
        cin>>operator_symbol;
        while (operator_symbol != '+' and operator_symbol != '-' and operator_symbol != '*' and operator_symbol != '/') {
            cout<<"Enter Correct Operator:(+ , - , / , *) ";
            cin>>operator_symbol;
        }
        switch (operator_symbol) {
            case '+':
                result = add(num1,num2);
                break;
            case '-':
                result = sub(num1,num2);
                break;
            case '*':
                result= mult(num1,num2);
                break;
            case '/':
                result= div(num1,num2);

                if (result == -1) {
                    cout<<"ERROR!!! : Division by 0";
                    num = -1;
                    continue;
                }
                break;
        }

        cout<<num1<<" "<<operator_symbol<<" "<<num2<<" = "<<result<<endl;
        loop_counter++;
    }
    cout << endl<< "Program Terminated!"<<endl;
    return 0;
}
