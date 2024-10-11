#include <stdio.h>
#include <string.h>

int main() {

    int game_count, d_count = 0, a_count = 0;
    char game_string[100000];

    scanf("%d", &game_count);
    scanf("%s", &game_string);

    for (int i = 0; i < strlen(game_string); i++) {
        switch (game_string[i])
        {
        case 'A':
            a_count++;
            break;

        case 'D':
            d_count++;
            break;
        
        default:
            break;
        }
    }

    if (a_count > d_count) {
        printf("%s", "Anton\n");
    } else if (a_count == d_count) {
        printf("%s", "Friendship\n");
    } else {
        printf("%s", "Danik\n");
    }


    return 0;
}