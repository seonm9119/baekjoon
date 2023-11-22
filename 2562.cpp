#include <iostream>
using namespace std;

int main(){

    int num[9], maxIdx = 0;
    scanf("%d", &num[maxIdx]);


    for(int i=1; i<9; i++){
        scanf("%d", &num[i]);

        if(num[i]>num[maxIdx])
            maxIdx = i;
    }
    

    printf("%d\n%d", num[maxIdx], maxIdx+1);
    

    return 0;
}