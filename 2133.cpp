#include <iostream>

int main(){


    int n;
    scanf("%d", &n);

    int dp[n+1] = {0,};
    dp[2] = 3;
    dp[4] = 11;

    for(int i=6; i<n+1; i+=2){
        dp[i-4] += dp[i-6];
        dp[i] = 3*dp[i-2] + 2*dp[i-4]  + 2;

    }

    if (n%2==0)
        printf("%d", dp[n]);
    else
        printf("0");

    return 0;
}