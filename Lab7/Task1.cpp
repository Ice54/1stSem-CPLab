//
// Created by raahi on 1/9/2026.
//
#include <iostream>
using namespace std;

int main() {
    int row=0, column=0;
    cout<<"Enter number of Rows:";
    cin>>row;
    while(row<0) {
        cout<<"Please enter a number above 0:"<<endl;
        cin>>row;
    }
    cout<<"Enter number of Columns:";
    cin>>column;
    while(column<0) {
        cout<<"Please enter a number above 0:"<<endl;
        cin>>column;
    }
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= column; j++) {
            cout<<i*j<<"\t";
        }
        cout<<endl;
    }
    return 0;
}