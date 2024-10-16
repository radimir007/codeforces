#include <stdio.h>
#include <string.h>

const char* isReverse(char *base, char *translation) {
    int length = strlen(base) - 1;
    if (strlen(base) != strlen(translation)) {
        return "NO";
    }
    for (int i = 0; i < length + 1; i++) {
        if (base[i] != translation[length - i]) {
            return "NO";
        }
    }

    return "YES";
}

int main() {
    char base[100], translation[100];

    scanf("%s", &base);
    scanf("%s", &translation);

    printf("%s", isReverse(base, translation));

    return 0;
}