#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

int customRound(double x) {
    double decimalPart = x - floor(x);

    if (decimalPart > 0.5)
        return static_cast<int>(ceil(x)) * -1;
    else
        return static_cast<int>(x);
}

int main() {
    int n;
    scanf("%d", &n);

    priority_queue<double, vector<double>, greater<double>> minHeap;

    while (n--) {
        int x;
        scanf("%d", &x);

        if (x == 0) {
            if (!minHeap.empty()) {
                printf("%d\n", customRound(minHeap.top()));
                minHeap.pop();
            } else
                printf("0\n");
        } else if (x > 0) {
            minHeap.push(x + 0.5);
        } else
            minHeap.push(-1 * x - 0.4);
    }

    return 0;
}
