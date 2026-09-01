//
// Created by raahi on 1/9/2026.
//
import <iostream>;
using namespace std;

int main() {
    const int task1_row = 5 , task1_col=5;
    int task1_array[task1_row][task1_col] = {};
    for (int i = 1; i < 6; i++) {
        for (int j = 1; j < 6; j++) {
            task1_array[i-1][j-1]=i*j;
        }
    }
    int sum=0,average;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            sum = sum + task1_array[i][j];
        }
    }
    average = sum / 5;
    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<average<<endl;
    for (int i = 0; i < task1_row; i++) {
        for (int j = 0; j < task1_col; j++) {
            cout << task1_array[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}