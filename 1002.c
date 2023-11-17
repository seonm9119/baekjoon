#include <stdio.h>
#include <math.h>


int main(){

    int t;
    scanf("%d", &t);

    int x1, y1, r1;
    int x2, y2, r2;

    for(int i=0; i<t; i++){
        scanf("%d %d %d", &x1, &y1, &r1);
        scanf("%d %d %d", &x2, &y2, &r2);

        double ab = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
        int sum = r1 + r2;
        int diff = abs(r1 - r2);

        int ans=0;
        if (ab == 0 && r1 == r2){
            ans = -1;
        }
        else if (sum > ab && diff < ab){
            ans = 2;
        }
        else if (sum == ab || diff == ab){
            ans = 1;
        }
        else{
            ans = 0;
        }

        printf("%d\n", ans);

    
    }

    return 0;
}