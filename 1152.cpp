#include <iostream>
using namespace std;

int main(){

    string str;
    getline(cin, str);

    int cnt = 1;
    for(int i=1; i < str.length(); i++ )
        cnt = (str[i]==' ') ? cnt + 1 : cnt;

    cnt = (str[str.length()-1] == ' ') ? cnt - 1 : cnt;
    printf("%d", cnt);

    return 0;
}