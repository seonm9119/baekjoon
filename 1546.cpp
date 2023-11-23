#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
    return a > b;
}

int main(){

    int n;
    cin >> n;

    double score, max, sum=0;
    for(int i=0; i<n; i++){
        cin >> score;
        sum += score;
        if(score>max)
            max = score;
    }

    cout << sum/max/n*100;

    return 0;
}