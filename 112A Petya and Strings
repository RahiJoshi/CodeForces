#include<iostream>
#include<string>
#include<algorithm>
using namespace std
;
int main() {
    string str1, str2, strA, strB;
    int result;
    cin >> str1;
    cin >> str2;
    for_each(str1.begin(), str1.end(), [](char & c) {
        c = ::tolower(c);
    });
    for_each(str2.begin(), str2.end(), [](char & c) {
        c = ::tolower(c);
    });
    if (str1.compare(str2)>0)
        result = 1;
    else if (str1.compare(str2)==0)
        result = 0;    
    else if (str1.compare(str2)<0)
        result = -1;  
    cout << result << endl;
}
