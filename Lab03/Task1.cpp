//
// Created by raahi on 1/9/2026.
//
#include <iostream>
using namespace std;
int main() {
    cout<< "Enter Student Score"<< endl;
    double studentNum;
    cin>>studentNum;
    if(100>=studentNum and studentNum>=97) {
        cout<<"Student Grade = A+"<<endl;
    } else if(studentNum<97 and studentNum>=90){
        cout<<"Student Grade = A"<<endl;
    } else if(studentNum<90 and studentNum>=87) {
        cout<<"Student Grade = B+"<<endl;
    }else if(studentNum<87 and studentNum>=80) {
        cout<<"Student Grade = B"<<endl;
    }else if(studentNum<80 and studentNum>=77) {
        cout<<"Student Grade = C+"<<endl;
    } else if(studentNum<77 and studentNum>=70) {
        cout<<"Student Grade = C"<<endl;
    } else if(studentNum<70 and studentNum>=67) {
        cout<<"Student Grade = D+"<<endl;
    } else if(studentNum<67 and studentNum>=60) {
        cout<<"Student Grade = D"<<endl;
    }else if(studentNum<60 and studentNum>=0) {
        cout<<"Student Grade = F"<<endl;
    }else {
        cout<<"Incorrect Number Entered Restart Program"<<endl;
    }
    return 0;
}