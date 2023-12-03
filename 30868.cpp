#include <iostream>
using namespace std;

int main(){

    int n, vote;
    scanf("%d", &n);

    while(n--){
        scanf("%d", &vote);

        int five = vote/5;
        int one = vote%5;

        for(int i=0; i<five; i++)
            printf("++++ ");
        
        for(int i=0; i<one; i++)
            printf("|");
        
        printf("\n");

    }

    return 0;
}