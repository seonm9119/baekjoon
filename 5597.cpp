#include <iostream>
#define MAX 30
using namespace std;

bool check[MAX]={false,};

int main(){

    int num;
    for(int i=0; i<28; i++){
        scanf("%d", &num);
        check[num-1] = true;
    }

    for(int i=0; i<30; i++)
        if(!check[i]) printf("%d\n", i+1);

    return 0;
}