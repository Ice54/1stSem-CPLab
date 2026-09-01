//
// Created by raahi on 1/9/2026.
//
#include <iostream>

using namespace std;

void greet(string name) {
    cout<< "Hello, " << name << "!"<<endl;
}

int calculateArea(int length , int width ) {
    return length * width;
}

int add(int a ,int b) {
    return a + b;
}

double add(double a,double b) {
    return a + b;
}

double calculateSimpleInterest(double interest,double amount,double time ) {
    interest = interest/100;
    return (interest*amount*time)/100;

}

int main() {
    string user_name;
    cout<<"Enter User Name:";
    cin>>user_name;
    greet(user_name);

    cout<<"Enter Length of Rectangle: ";
    int rectangle_length;
    cin>>rectangle_length;
    while(rectangle_length < 0) {
        cout<<"Enter Length of Rectangle:(Positive) ";
        cin>>rectangle_length;
    }
    cout<<"Enter Width of Rectangle: ";
    int rectangle_width;
    cin>>rectangle_width;
    while(rectangle_width < 0) {
        cout<<"Enter Width of Rectangle:(Positive) ";
        cin>>rectangle_width;
    }
    int rectangle_area =calculateArea(rectangle_length, rectangle_width);
    cout<<"Area of Rectangle: "<<rectangle_area<<endl;


    cout<<add(1,2)<<endl;
    cout<<add(2.5,3.5)<<endl;

    cout<<"Give Principal Amount:";
    double principal_amount;
    cin>>principal_amount;
    while(principal_amount < 0) {
        cout<<"Enter Principal Amount: (Positive)";
        cin>>principal_amount;
    }
    cout<<"Enter Interest Rate:";
    double interest_rate;
    cin>>interest_rate;
    while(interest_rate < 0) {
        cout<<"Enter Interest Rate: (Positive)";
        cin>>interest_rate;
    }
    cout<<"Enter Time Period:";
    double time_period;
    cin>>time_period;
    while(time_period < 0) {
        cout<<"Enter Time Period: (Positive)";
        cin>>time_period;
    }
    double simpleInterest=calculateSimpleInterest(principal_amount,interest_rate,time_period);
    cout<<"Simple Interest: "<<simpleInterest<<endl;
    return 0;
}
