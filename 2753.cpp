#include <iostream>
using namespace std;

int main(){

    int year;
    scanf("%d", &year);

    if(year%400==0)
        printf("1");
    else if (year%4==0)
        printf("%s", (year%100!=0) ? "1" : "0");
    else
        printf("0");
    

    return 0;
}