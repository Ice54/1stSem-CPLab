//
// Created by raahi on 1/9/2026.
//
#include <iostream>
using namespace std;
int main() {
    const int unitprice=99;
    cout<<"Enter the number of units sold:";
    int unitsold=0;
    cin>>unitsold;
    if (unitsold<0) {
        cout<<"Invalid quantity";
        return 0;
    }
    int discount = 0;
    if(unitsold>=10) {
        discount = 20;
        if(unitsold>=20) {
            discount = 30;
            if(unitsold>=50) {
                discount = 40;
                if(unitsold>=100) {
                    discount = 50;
                }
            }
        }
    }else discount = 0;
    double totalcost=unitsold*unitprice;
    double discountmultiple=0;
    discountmultiple=100-discount;
    discountmultiple=discountmultiple/100;
    totalcost=totalcost*discountmultiple;
    cout<<"Total cost is: $"<<totalcost;
}