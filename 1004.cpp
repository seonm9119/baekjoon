#include <iostream>
#include <cmath>
using namespace std;

int isPointInsideCircle(int x, int y, int a, int b, int r) {
    int distanceSquared = pow(x - a, 2) + pow(y - b, 2);
    int radiusSquared = pow(r, 2);

    return distanceSquared <= radiusSquared ? 1 : 0;
}


int main(){

    int t;
    scanf("%d", &t);

    while(t--){

        int x1, y1, x2, y2;
        int n;
        scanf("%d%d%d%d%d", &x1, &y1, &x2, &y2, &n);

        int cnt=0;
        for(int i=0; i<n; i++){
            int cx, cy, r;
            scanf("%d%d%d", &cx, &cy, &r);

            int a = isPointInsideCircle(x1,y1,cx,cy,r);
            int b = isPointInsideCircle(x2,y2,cx,cy,r);

            cnt+= a != b ? 1: 0;

        }

        printf("%d\n", cnt);


    }


    return 0;
}