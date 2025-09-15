#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    char input[3];
    char lastVal = 'x';

    int pairs = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s", input);

        if (lastVal == 'x') {
            lastVal = input[1];
            pairs++;
            continue;
        }

        if (input[0] == lastVal) {
            pairs++;
        }

        lastVal = input[1];
    }

    printf("%d\n", pairs);

    return 0;
}