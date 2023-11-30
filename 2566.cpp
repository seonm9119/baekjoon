#include <iostream>
using namespace std;

int main(){

    int num, row, col;
    int max = -1;

    for(int i=0; i<9; i++)
        for(int j=0; j<9; j++){
            scanf("%d", &num);
            if(num>=max){
                row = i;
                col = j;
                max = num;
            }
        }

    printf("%d\n%d %d", max, row+1, col+1);

    return 0;
}