//
// Created by raahi on 1/9/2026.
//
#include <iostream>

using namespace std;

double calculateIncomeTax(double income) {
    if (income <= 500000 and  income > 250001) {
        return income*0.05;
    }else
        if(income > 500001 and income <= 1000000) {
            return income*0.1;
        }else
            if(income >1000000) {
                return income*0.15;
            }
            else
                return income;
}
double calculateNetSalary(double income,double tax,double deductions) {
    return income-(deductions+tax);
}

int main()
{
    cout<<"Enter Gross Salary:";
    double gross_salary =0;
    cin >> gross_salary;
    cout<<"Enter House Rent:";
    double house_rent =0;
    cin >> house_rent;
    cout<<"Enter Health Insurance Premium:";
    double health_insurance =0;
    cin >> health_insurance;
    cout<<"Gross Salary: "<<gross_salary<<endl;
    double tax = calculateIncomeTax(gross_salary);
    double totaldeductions =  house_rent + health_insurance;
    cout<<"Total deductions: "<<totaldeductions<<endl;
    cout<<"Tax Amount: "<<tax<<endl;
    double netsalary =calculateNetSalary(gross_salary,tax,totaldeductions);
    cout<<"Net Salary: "<<netsalary<<endl;
}
