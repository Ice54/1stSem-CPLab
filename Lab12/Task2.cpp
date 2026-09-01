//
// Created by raahi on 1/9/2026.
//
import <iostream>;
using namespace std;

const int task2_row=10,task2_col=10;
int task2_array[task2_row][task2_col] = {};
void bookSeats(int row,int col) {
    if (task2_array[row][col] == 0) {
        task2_array[row][col] = 1;
        cout<<"Seat booked! ("<<row+1<<","<<col+1<<")";
    }else {
        cout<<"Already booked! ("<<row+1<<","<<col+1<<")";
    }
}
void displayBooking() {
    for (int i = 0; i < task2_row; i++) {
        for (int j = 0; j < task2_col; j++) {
            if (task2_array[i][j] == 1) {
                cout<<"x ";
            }
            if (task2_array[i][j] == 0) {
                cout<<"- ";
            }
        }
        cout<<endl;
    }
}
void checkEmpty() {
    for (int i = 0; i < task2_row; i++) {
        for (int j = 0; j < task2_col; j++) {
            if (task2_array[i][j] == 0) {
                cout<<"Empty Seat found at row "<<i+1<<", column"<<j+1<<endl;
                return;
            }
        }
    }
}
int main() {
    int user_row,user_col;
    char userChoice;
    bool tryAgain = true;
    do {
        cout<<"Enter Row and Column to book a seat.\nRow:";
        cin>>user_row;
        while (user_row <1 || user_row >10) {
            cout<<"Row should be between 1 and 10.\nEnter Row:";
            cin>>user_row;
        }
        cout<<"Enter Column:";
        cin>>user_col;
        while (user_col <1 || user_col >10) {
            cout<<"Column should be between 1 and 10.\nEnter Column:";
            cin>>user_col;
        }
        bookSeats(user_row-1,user_col-1);
        cout<<"\nDo you want to continue?(y/n):";
        cin>>userChoice;
        while (userChoice!='y' && userChoice!='Y' && userChoice!='n' &&
        userChoice!='N'){
            cout<<"Enter Your choice (Y/N)";
            cin>>userChoice;
        }
        if (userChoice == 'n' || userChoice == 'N') {
            tryAgain = false;
        }
    } while (tryAgain==true);
    cout<<"Seating Arrangement:\n";
    displayBooking();
    checkEmpty();
    return 0;
}