#include <iostream>
using namespace std;

int main(){

    int alpha[26]={0,};
    string str;
    cin >> str;

    for(int i=0; i<str.size(); i++)
        if(!alpha[str[i]-97]) alpha[str[i]-97]=i+1;

    for(int i=0; i<26; i++)
        cout << alpha[i]-1 << " ";
    

    return 0;
}