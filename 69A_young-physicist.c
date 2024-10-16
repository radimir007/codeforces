#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

const char* isEquilibrium(int *array, int count) {

    for (int i = 0; i < 3; i++) {
        int result = 0;
        for (int j = 0; j < count; j++) {
            result += array[i + 3 * j];
        }

        if (result != 0) {
            return "NO";
        }
    }

    return "YES";
   
}

int main(void) {
    int count;

    scanf("%d", &count);

    int* input = (int*) malloc((count * 3) * sizeof(int));

    for (int i = 0; i < count; i++) {
        scanf("%d %d %d", &input[i*3], &input[i*3 + 1], &input[i*3 + 2]);
    }

    
    printf("%s", isEquilibrium(input, count));

    free(input);

    return 0;
}