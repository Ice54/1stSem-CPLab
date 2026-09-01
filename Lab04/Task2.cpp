#include <iostream>
using namespace std;
int main() {
    cout<<"Vending Machine"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"1. Soda - $1"<<endl;
    cout<<"2. Chips - $1.5"<<endl;
    cout<<"3. Candy - $1.25"<<endl;
    cout<<"4. Water - $0.75"<<endl;
    cout<<"----------------------------------"<<endl;
    int coins,user_choice = 0;
    double balance,change;
    cout<<"Enter the number of coins (Enter 0 to exit): "<<endl;
    cin>>coins;
    balance = coins;
    cout<<"Balance: $"<<balance<<endl;
    bool loop_break = false;
    while(loop_break == false) {
        cout<<"Select item (Enter 0 to exit): "<<endl;
        cin>>user_choice;
        if (user_choice == 1 or user_choice == 2 or user_choice == 3 or
        user_choice == 4) {
            loop_break = true;
        }else {
            cout<<"Invalid Input"<<endl;
        }
    }
    if (user_choice == 1) {
        if (balance <1) {
            cout<<"Balance isn't Enough"<<endl;
        }else{
            cout<<"Dispensing Soda"<<endl;
            change = balance - 1;
            cout<<"Change Returned = $"<<change<<endl;
        }
    }else if (user_choice == 2) {
        if (balance < 1.5) {
            cout<<"Balance isn't Enough"<<endl;
        }else {
            cout<<"Dispensing Chips"<<endl;
            change = balance - 1.5;
            cout<<"Change Returned = $"<<change<<endl;
        }
    }else if (user_choice == 3) {
        if (balance < 1.25) {
            cout<<"Balance isn't Enough"<<endl;
        }else {
            cout<<"Dispensing Candy"<<endl;
            change = balance - 1.25;
            cout<<"Change Returned = $"<<change<<endl;
        }
    }else if (user_choice == 4) {
        if (balance < 0.75) {
            cout<<"Balance isn't Enough"<<endl;
        }else {
            cout<<"Dispensing Water"<<endl;
            change = balance - 0.75;
            cout<<"Change Returned = $"<<change<<endl;
        }
    }
    return 0;
}