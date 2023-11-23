#include <iostream>
using namespace std;

int main(){

    int n;
    scanf("%d", &n);

    char num[n];
    scanf("%s", num);

    int sum =0;
    for(int i=0; i<n; i++)
        sum += num[i] - 48;

    printf("%d", sum);

    return 0;
}