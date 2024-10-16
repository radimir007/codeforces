#include <stdio.h>
#include <string.h>

const char* isInDanger(char *input) {
    int temp = 1;

    for (int i = 1; i < strlen(input); i++) {
        if (input[i] != input[i-1]) {
            temp = 1;
        } else {
            ++temp;
            if (temp == 7) {
                return "YES";
            }
        }
    }

    return "NO";
}

int main() {

    char input[100];
    scanf("%s", input);

    printf("%s", isInDanger(input));

    return 0;
}