#include <stdio.h>
#include <string.h>

int main() {

    int destination, currentPos = 0, steps = 0;
    scanf("%d", &destination);

    while (destination != currentPos) {
        for (int step = 5; step > 0; step--) {
            if (currentPos + step <= destination) {
                currentPos += step;
                break;
            }
        }
        steps++;
    }

    printf("%d", steps);

    return 0;
}