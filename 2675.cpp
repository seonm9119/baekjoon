#include <iostream>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int r;
        char str[21];
        scanf("%d%s", &r, str);

        for (int i = 0; str[i] != '\0'; i++)
            for (int j = 0; j < r; j++)
                printf("%c", str[i]);
            
            printf("\n");
    }

    return 0;
}
