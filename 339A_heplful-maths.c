#include <stdio.h>
#include <string.h>

int main() {

    char input[100];

    scanf("%s", input);

    for (int i = 0; i < strlen(input); i+=2) {
        for (int j = i; j < strlen(input); j+=2) {
            if (input[j] < input[i]) {
                char temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }

    printf("%s", input);
    

    return 0;
}