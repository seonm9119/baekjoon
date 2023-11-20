#include <iostream>
using namespace std;

int main(){

    int n;
    scanf("%d", &n);

    int num[n];
    for(int i=0; i<n; i++)
        scanf("%d", &num[i]);

    int v;
    scanf("%d", &v);

    int cnt = 0;
    for(int i=0; i<n; i++)
        cnt = (num[i]==v) ? cnt + 1 : cnt;

    printf("%d", cnt);

    return 0;
}