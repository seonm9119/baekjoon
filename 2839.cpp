#include <iostream>
#define MAX 5001
using namespace std;

int sugar[MAX]={0,};

int main(){

    int n;
    scanf("%d", &n);

    sugar[3]=1;
    sugar[5]=1;

    for(int i=3; i<n+1; i++){
        if(sugar[i]!=0){
            sugar[i+5] = (sugar[i+5]!=0) ? min(sugar[i] + 1, sugar[i+5]) : sugar[i] + 1;
            sugar[i+3] = (sugar[i+3]!=0) ? min(sugar[i] + 1, sugar[i+3]) : sugar[i] + 1;
        }

    }

    printf("%d", sugar[n]!=0 ? sugar[n] : -1);


    return 0;
}