#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
    return a < b;
}


int main(){

    int n;
    scanf("%d", &n);
    int num[n];

    for(int i=0; i<n; i++)
        scanf("%d", &num[i]);

    sort(num, num+n, compare);

    printf("%d %d", num[0], num[n-1]);

    return 0;
}