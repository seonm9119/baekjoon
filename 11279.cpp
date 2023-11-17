#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main(){

    int n;
    scanf("%d", &n);

    priority_queue<int, vector<int>, less<int>> maxHeap;
    while(n--){

        int x;
        scanf("%d", &x);

        if(x==0){

            if(!maxHeap.empty()){
                printf("%d\n", maxHeap.top());
                maxHeap.pop();
            }
            else
                printf("0\n");
        }
        else
            maxHeap.push(x);

    }


    return 0;
}