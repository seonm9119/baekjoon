#include <iostream>
#include <algorithm>
using namespace std;

bool compare(string& a, string& b) {
    if (a.length() == b.length()) 
        return a < b;

    return a.length() < b.length();
}

int main(){

    int n;
    cin >> n;

    string str[n];

    for(int i=0; i<n; i++)
        cin >> str[i];

    sort(str, str+n, compare);

    for (int i = 0; i < n; ++i) {

        if(str[i]==str[i+1])
            continue;
        cout << str[i] << endl;
    }
    

    return 0;
}