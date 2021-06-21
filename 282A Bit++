#include<iostream>
#include<string>
using namespace std;
int main() {
    int x = 0;
    string statement;
    int n;      //no of statements
    cin >> n;
    for(int i = 0; i<n; i++) {
        cin >> statement;
        if(statement == "X++" || statement == "x++")
            x++;
        else if(statement == "X--" || statement == "x--")
            x--;
        else if(statement == "++X" || statement == "++x")
            ++x;
        else if(statement == "--X" || statement == "--x")
            --x;
    }
    cout << x << endl;
    return 0;
}
