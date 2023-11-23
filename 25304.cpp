#include <iostream>
using namespace std;

int main(){

    int x, n;
    scanf("%d%d", &x, &n);

    int a, b, total = 0;
    while(n--){
        scanf("%d%d", &a, &b);

        total += a*b;

    }

    printf("%s", (total==x) ? "Yes" : "No");


    return 0;
}