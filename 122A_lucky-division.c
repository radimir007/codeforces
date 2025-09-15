#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    int luckyNumbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    for (int i = 0; i < sizeof(luckyNumbers) / sizeof(int); i++) {
        if (x == luckyNumbers[i] || x % luckyNumbers[i] == 0) {
            printf("YES");
            return 0;
        }
    }

    printf("NO");

    return 0;
}