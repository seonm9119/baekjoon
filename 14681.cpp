#include <iostream>
using namespace std;

int main(){

    int x, y;
    scanf("%d%d", &x, &y);

    if(x > 0)
        printf("%s", (y > 0) ? "1" : "4");
    else
        printf("%s", (y > 0) ? "2" : "3");

    return 0;
}