//
// Created by raahi on 1/9/2026.
//
import <iostream>;
using namespace std;

int main() {
    cout<<"Enter Temperature for each day:"
    <<endl<<"Monday:";
    float temperature[7];
    cin>>temperature[0];
    cout<<"Tuesday:";
    cin>>temperature[1];
    cout<<"Wednesday:";
    cin>>temperature[2];
    cout<<"Thursday:";
    cin>>temperature[3];
    cout<<"Friday:";
    cin>>temperature[4];
    cout<<"Saturday:";
    cin>>temperature[5];
    cout<<"Sunday:";
    cin>>temperature[6];
    float largest = temperature[0],smallest = temperature[0],total = 0;
    for(int i=0;i<6;i++) {
        if (temperature[i]>largest) {
            largest = temperature[i];
        }
        if (temperature[i]<smallest) {
            smallest = temperature[i];
        }
        total = total + temperature[i];
    }
    cout<<"Highest Temperature:"<<largest<<" C\n";
    cout<<"Lowest Temperature:"<<smallest<<" C\n";
    cout<<"Average Temperature:"<<total/7<<" C\n";
    return 0;
}
