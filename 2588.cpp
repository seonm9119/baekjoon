#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    int num1; 
    char num2[4];
    scanf("%d%s", &num1, num2);

    printf("%d\n", num1*(num2[2]-'0'));
    printf("%d\n", num1*(num2[1]-'0'));
    printf("%d\n", num1*(num2[0]-'0'));
    printf("%d", num1*(atoi(num2)));
    return 0;
}