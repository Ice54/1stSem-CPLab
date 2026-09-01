//
// Created by raahi on 1/9/2026.
//
#include <iostream>
using namespace std;

int main() {
    int years=0, months=12, totalforyear=0,rainfall=0,totalmonths = 0;
    double rainfallpermonth=0,rainfalltotal=0;
    cout<<"Enter Number of Year:";
    cin>>years;
    while(years<1) {
        cout<<"Enter a number greater than 0";
        cin>>years;
    }
    for (int i = 1; i <= years; i++) {
        cout<<"Year: "<<i<<endl;
        for (int j = 1; j <= months; j++) {
            rainfall =0;
            switch (j) {
                case 1:
                    cout<<"Enter rainfall in January: ";
                    break;
                case 2:
                    cout<<"Enter rainfall in February: ";
                    break;
                case 3:
                    cout<<"Enter rainfall in March: ";
                    break;
                case 4:
                    cout<<"Enter rainfall in April: ";
                    break;
                case 5:
                    cout<<"Enter rainfall in May: ";
                    break;
                case 6:
                    cout<<"Enter rainfall in June: ";
                    break;
                case 7:
                    cout<<"Enter rainfall in July: ";
                    break;
                case 8:
                    cout<<"Enter rainfall in August: ";
                    break;
                case 9:
                    cout<<"Enter rainfall in September: ";
                    break;
                case 10:
                    cout<<"Enter rainfall in October: ";
                    break;
                case 11:
                    cout<<"Enter rainfall in November: ";
                    break;
                case 12:
                    cout<<"Enter rainfall in December: ";
                    break;
            }
            cin>>rainfall;
            while(rainfall<1) {
                cout<<"Enter a number greater than 0";
                cin>>rainfall;
            }
            rainfalltotal+=rainfall;
        }
    }
    cout<<"Total Months: "<<months*years<<endl;
    cout<<"Total Rainfall: "<<rainfalltotal<<endl;
    rainfallpermonth=rainfalltotal/(years*months);
    cout<<"Average Rainfall per month: "<<rainfallpermonth<<endl;
    return 0;
}