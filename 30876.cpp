#include <iostream>
using namespace std;

int main(){

    int n;
    scanf("%d", &n);

    int southX, southY, min=1001;
    while(n--){
        int x, y;
        scanf("%d%d", &x, &y);
        
        if(y<min){
            min = y;
            southX = x;
            southY = y;
        }

    }

    printf("%d %d", southX, southY);

    return 0;
}