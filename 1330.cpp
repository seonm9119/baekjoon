#include <iostream>
using namespace std;

int main(){

    int a, b;
    scanf("%d%d", &a, &b);

    printf("%s", ((a > b) ? ">" : (a < b) ? "<" : "=="));

    return 0;
}