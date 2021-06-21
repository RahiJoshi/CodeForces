#include<iostream>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    int area1 = m*n;
    int areaDomino = 2;
    int result = area1/areaDomino;
    cout << result << endl;
}
