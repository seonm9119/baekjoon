#include <iostream>
#include <set>
using namespace std;

int main(){

    int num;
    set<int> unique;
    for(int i=0; i<10; i++){
        scanf("%d", &num);
        unique.insert(num%42);
    }

    printf("%d", unique.size());

    return 0;
}