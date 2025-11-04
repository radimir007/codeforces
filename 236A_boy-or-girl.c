#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    scanf("%s", input);

    int count = 1;

    for (int i = 1; i < strlen(input); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (input[i] == input[j])
                break;
            
            if (j >= i - 1)
                count++;
        }
    }

    count % 2 ? printf("IGNORE HIM!\n") : printf("CHAT WITH HER!\n");

    return 0;
}