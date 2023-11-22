#include <iostream>
using namespace std;



int main(){

    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int m = ((c % 60) + b);
    int h = (c / 60) + (m / 60) + a;
    
    printf("%d %d", (h < 24) ? h : h-24, m % 60);


    return 0;
}