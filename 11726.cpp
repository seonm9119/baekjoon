#include <iostream>
#define MOD 10007


int main(){


    int n;
    scanf("%d", &n);

    int dp[n+1] = {0,};
    dp[1] = 1 % MOD;
    dp[2] = 2 % MOD;
    dp[3] = 3 % MOD;

    for(int i=4; i<n+1; i++)
        dp[i] = (dp[i-1] + dp[i-2])% MOD;


    printf("%d", dp[n]);

    return 0;
}