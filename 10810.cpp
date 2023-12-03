#include <iostream>
using namespace std;

int main(){

    int n, m, num;
    scanf("%d%d", &n, &m);

    int basket[n]={0,};

    int i,j,k;
    while(m--){
        scanf("%d%d%d", &i, &j, &k);
        for(int idx=i-1; idx<j; idx++)
            basket[idx]=k;
    }

    for(int i=0; i<n; i++)
        printf("%d ", basket[i]);

    return 0;
}