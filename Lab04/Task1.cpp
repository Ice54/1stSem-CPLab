//
// Created by raahi on 1/9/2026.
//
#include <iostream>
#include <ctime>
using namespace std;
int main() {
    int computer_choice;
    string user_choice,computer_choice_word ;
    srand(time(0));
    computer_choice =rand()%3;
    bool loop_break =false;
    cout<<"-----------------------------"<<endl;
    cout<<"Rock-Paper-Scissor"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Enter your choice (Rock,Paper,Scissors): "<<endl;
    while(loop_break==false) {
        cout<<"Your choice: ";
        cin>>user_choice;
        if (user_choice == "Rock" or user_choice == "Paper" or user_choice ==
        "Scissors") {
            loop_break =true;
        }
        else {
            cout<<"Invalid choice"<<endl;
        }
    }
    if (computer_choice==0) {
        cout<<"Computer choice : Rock"<<endl;
        computer_choice_word = "Rock";
    }else if (computer_choice==1) {
        cout<<"Computer choice : Paper"<<endl;
        computer_choice_word = "Paper";
    }else if (computer_choice==2) {
        cout<<"Computer choice : Scissors"<<endl;
        computer_choice_word = "Scissors";
    }else {
        cout<<"Invalid choice"<<endl;
    }
    if (computer_choice_word==user_choice) {
        cout<<"It's a Tie!"<<endl;
    }else if (user_choice == "Rock") {
        if (computer_choice_word=="Paper") {
            cout<<"Computer Wins!"<<endl;
        }else if (computer_choice_word=="Scissors") {
            cout<<"User Wins!"<<endl;
        }
    }else if (user_choice=="Paper") {
        if (computer_choice_word=="Scissors") {
            cout<<"Computer Wins!"<<endl;
        }else if (computer_choice_word=="Rock") {
            cout<<"User Wins!"<<endl;
        }
    }else if (user_choice=="Scissors") {
        if (computer_choice_word=="Rock") {
            cout<<"Computer Wins!"<<endl;
        }else if (computer_choice_word=="Paper") {
            cout<<"User Wins!"<<endl;
        }
    }
    return 0;
}