//
// Created by raahi on 1/9/2026.
//
import <iostream>;
using namespace std;


int main() {
    int voteCount[5];
    int largestVotes = voteCount[0],winner=0;
    string name[5]={"Ali","Bilal","khan","Asad","Azlan"};
    cout<<"Enter Votes for Ali:";
    cin>>voteCount[0];
    cout<<"Enter Votes for Bilal:";
    cin>>voteCount[1];
    cout<<"Enter Votes for Khan:";
    cin>>voteCount[2];
    cout<<"Enter Votes for Asad:";
    cin>>voteCount[3];
    cout<<"Enter Votes for Azlan:";
    cin>>voteCount[4];
    int totalVotes = 0;
    for (int i=0;i<5;i++) {
        totalVotes = totalVotes + voteCount[i];
        if (voteCount[i]>largestVotes) {
            largestVotes = voteCount[i];
            winner = i;
        }
    }
    cout<<endl;
    cout<<"Total Votes Cast:"<<totalVotes<<endl;
    cout<<"Winner: "+name[winner]+" with "<<largestVotes<<" votes."<<endl;

    return 0;
}
