//
// Created by raahi on 1/9/2026.
//
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream myfile("my_file.txt");
    if (myfile.is_open()) {
        myfile<<"Hello World!\nThis is another line.\n";
        myfile.close();
    }
    return 0;
}