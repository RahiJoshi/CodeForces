#include<iostream>
using namespace std;
int main() {
    //Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score
    int n, k;
    cin >> n >> k;
    int scores[50];

    //filling the array with scores of n participants
    for(int i = 0; i<n; i++) {
        cin >> scores[i];
    }

    int participants = 0;
    for(int i = 0; i<n; i++) {
        if(scores[i]>0 && scores[i]>=scores[k-1])
            participants++;
    }
    cout << participants << endl;
}
