//
// Created by raahi on 1/9/2026.
//
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream myfile2("student_records.txt");
    string name , rnumb,enumb,marks;
    const string comma=",";
    while (true) {
        if (myfile2.is_open()) {
            cout<<"Please enter Student name:(-1 to exit)";
            cin>>name;
            if (name == "-1") {
                myfile2.close();
                break;
            }
            cout<<"Please enter Registration number:(-1 to exit) ";
            cin>>rnumb;
            if (rnumb == "-1") {
                myfile2.close();
                break;
            }
            cout<<"Please enter Enrollment Number:(-1 to exit) ";
            cin>>enumb;
            if (enumb == "-1") {
                myfile2.close();
                break;
            }
            cout<<"Please enter Marks:(-1 to exit)";
            cin>>marks;
            if (marks == "-1") {
                myfile2.close();
                break;
            }
            myfile2<<name<<comma<<rnumb<<comma<<enumb<<comma<<marks<<endl;
        }
    }
    return 0;
}