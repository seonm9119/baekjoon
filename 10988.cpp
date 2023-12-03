#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string str;
    cin >> str;

    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    cout << ((str == reversedStr) ? "1" : "0");

    return 0;
}