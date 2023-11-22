#include <iostream>
using namespace std;

int main(){

    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int prize;
    if(a==b && b==c)
        prize = 10000 + (a * 1000);
    else if(a==b)
        prize = 1000 + (a * 100);
    else if(b==c)
        prize = 1000 + (b * 100);
    else if(c==a)
        prize = 1000 + (c * 100);
    else {

        int max;
        if (a > b)
            max = (a>c)? a : (c>b)? c : b;
        else
            max = (b>c)? b: (c>a)? c: a;

        prize = max * 100;

    }

    printf("%d", prize);





    return 0;
}