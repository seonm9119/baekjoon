#include <stdio.h>


int main(){


    int f[41]={0, 1};

    for(int n=2; n<41; n++) f[n] = f[n-2] + f[n-1];


    int t, n;
    scanf("%d", &t);

    while(t--){

        scanf("%d", &n);

        if(n==0) printf("1 0\n");
        else printf("%d %d\n", f[n-1], f[n]);
        
    }
    
    

    return 0;
}