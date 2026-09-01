//
// Created by raahi on 1/9/2026.
//
#include <iostream>
using namespace std;
int main() {
cout<<"Welcome to AbstractPizza!"<<endl
<<"Choose a pizza size:"<<endl
<<"1. Small"<<endl
<<"2. Medium"<<endl
<<"3. Large"<<endl
<<"Enter your Choice:"<<endl;
int pizza_size_choice;
cin>>pizza_size_choice;
while(pizza_size_choice < 1 or pizza_size_choice > 3) {
cout<<"Please enter a number between 1-3"<<endl;
cin>>pizza_size_choice;
}
int total=0;
switch(pizza_size_choice) {
case 1:
cout<<"Pizza size: Small"<<endl;
total = total+250;
break;
case 2:
cout<<"Pizza size: Medium"<<endl;
total = total+500;
break;
case 3:
cout<<"Pizza size: Large"<<endl;
total = total+1000;
break;
}
cout<<"Choose a crust type:"<<endl
<<"1. Thin"<<endl
<<"2. Thick"<<endl
<<"3. Stuffed Crust"<<endl
<<"Enter your Choice:"<<endl;
int crust_type_choice;
cin>>crust_type_choice;
while (crust_type_choice < 1 or crust_type_choice > 3) {
cout<<"Please enter a number between 1-3"<<endl;
cin>>crust_type_choice;
}
switch(crust_type_choice) {
case 1:
cout<<"Crust type: Thin"<<endl;
total = total+250;
break;
case 2:
cout<<"Crust type: Thick"<<endl;
total = total+500;
break;
case 3:
cout<<"Crust type: Stuffed Crust"<<endl;
total = total+1000;
break;
}
cout<<total<<endl;
cout<<"Select Toppings:(0 to exit)"<<endl
<<"1. Pepperoni"<<endl
<<"2. Mushrooms"<<endl
<<"3. Onions"<<endl
<<"4. Extra Cheese"<<endl;
bool topping_loop_break = false;
char topping_loop_break_choice;
int toppings_choice;
while(topping_loop_break == false) {
cout<<"Enter your Choice:"<<endl;
cin>>toppings_choice;
while (toppings_choice < 0 or toppings_choice > 4) {
cout<<"Please enter a number between 1-4 or 0 to exit"<<endl;
cin>>toppings_choice;
}
switch(toppings_choice) {
case 0:
topping_loop_break = true;
continue;
break;
case 1:
cout<<"Pepperoni added!"<<endl;
total = total+100;
break;
case 2:
cout<<"Mushrooms added!"<<endl;
total = total+200;
break;
case 3:
cout<<"Onions added!"<<endl;
total = total+300;
break;
case 4:
cout<<"Extra Cheese added!"<<endl;
total = total+400;
break;
}
cout<<"Do you want to add another topping? (Y/N)";
cin>>topping_loop_break_choice;
cout<<topping_loop_break_choice<<endl;
bool validationloopbreak = false;
while (validationloopbreak==false) {
if(topping_loop_break_choice == 'y' or topping_loop_break_choice
== 'Y' or topping_loop_break_choice == 'n' or topping_loop_break_choice ==
'N') {
validationloopbreak = true;
continue;
}else {
cout<<"Invalid choice enter (Y/N)"<<endl;
cin>>topping_loop_break_choice;
}
}
if(topping_loop_break_choice == 'Y' or topping_loop_break_choice ==
'y') {
topping_loop_break = false;
}else
topping_loop_break = true;
}
cout<<"Your Total is: "<<total<<" PKR"<<endl;
return 0;
}