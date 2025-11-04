#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        i % 2 ? printf("I hate ") : printf("I love ");

        if (i != input)
            printf("that ");
        else if (i == input)
        {
            printf("it\n");
            break;
        }
    }

    return 0;
}