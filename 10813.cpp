#include <iostream>
#include <algorithm>
using namespace std;


int main(){

    int n, m;
    scanf("%d%d", &n, &m);

    int num[n+1];
    for(int i=1; i<=n; i++)
        num[i]=i;

    int a, b;
    while(m--){
        scanf("%d%d", &a, &b);
        swap(num[a], num[b]);
    }

    for(int i=1; i<=n; i++)
        printf("%d ", num[i]);


    return 0;
}