#include <iostream>
using namespace std;

int main() {
    int problems;
    int count = 0;
    cin >> problems;
    int petya, tonya, vasya;

    for(int i = 0; i<problems; i++) {
        cin >> petya >> tonya >> vasya;
        if(petya+tonya+vasya>=2)
            count++;
    }
    cout << count << endl;
}
