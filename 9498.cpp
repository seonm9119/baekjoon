#include <iostream>
using namespace std;

int main(){

    int score;
    scanf("%d", &score);

    printf("%s", (score > 89 ) ? "A" : (score > 79) ? "B" : (score > 69) ? "C" : (score > 59) ? "D" : "F");

    return 0;
}