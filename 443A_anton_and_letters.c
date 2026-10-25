#include <stdio.h>

int main() {
    char input[1000];
    fgets(input, 1000, stdin);

    char letters[1000];
    int lettersLength = 0;

    int i = 1;

    while (input[i] != '}') {
        int isNew = 1;
        for (int j = 0; j < lettersLength; j++) {
            if (input[i] == letters[j]) {
                isNew = 0;
                break;
            }
        }
        if (isNew) {
            letters[lettersLength++] = input[i];
        }

        // If next char is '}', break the cycle to avoid overflow
        if (input[i + 1] == '}') {
            break;
        }

        i += 3; // Skip ', '
    }

    printf("%d\n", lettersLength);

    return 0;
}