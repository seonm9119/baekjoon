#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

    string str;
    cin >> str;

    int alpha[26]={0,};

    for(int i=0; i< str.size(); i++){
        int idx = (str[i] < 97) ? str[i] - 65 : str[i] - 97;
        alpha[idx]++;
    }


    int maxIdx = 0;
    for(int i=1; i<26; i++)
        if(alpha[i] > alpha[maxIdx])
            maxIdx = i;
    

    int cnt = 0;
    for(int i=0; i<26; i++)  
        if(alpha[i]==alpha[maxIdx])
            cnt++;
        

    cout << ((cnt > 1) ? '?' : (char)(maxIdx + 'A'));


    return 0;
}