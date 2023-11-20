#include <iostream>
using namespace std;

int main(){

    int h, m;
    scanf("%d%d", &h, &m);

    h = (h == 0 && m < 45) ? 24 : h;
    h = (m < 45) ? h - 1 : h;
    m = (m + 15) % 60;

    printf("%d %d", h, m);

    return 0;
}