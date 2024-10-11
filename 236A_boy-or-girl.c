#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main () {

    char input[100], distincts[100];

    scanf("%s", input);

    for (int i = 0; i < strlen(input); i++) {
        if (i == 0) {
            distincts[0] = input[i];
            continue;
        }

        bool isDistinct = true;
        for (int j = 0; j < strlen(distincts); j++) {
            if (input[i] == distincts[j]) {
                isDistinct = false;
            }

            if (j == strlen(distincts) - 1 && isDistinct) {
                distincts[strlen(distincts)] = input[i];
            }
            
        }
    }

    if (strlen(distincts) % 2 == 0) {
        printf("%s", "CHAT WITH HER!\n");
    } else {
        printf("%s", "IGNORE HIM!\n");
    }

    return 0;
}