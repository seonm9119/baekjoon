#include <iostream>
#define MAX 10001
using namespace std;

int sortArr[MAX]= {0,};


int main(){

    int n;
    scanf("%d", &n);

    int num;
    while(n--){
        scanf("%d", &num);
        sortArr[num]++;
    }

    int size = sizeof(sortArr)/sizeof(sortArr[0]);

    for(int i=1; i<size; i++)
        if(sortArr[i]!=0)
            for(int j=0; j<sortArr[i]; j++)
                printf("%d\n", i);

    return 0;
}