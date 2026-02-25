#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *result = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &result[i]);
    }

    // For each friend, we need to find his original donator
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == result[j])
            {
                printf("%d", j+1);
                if (i != n) 
                {
                    printf(" ");
                }
                break;
            }
        }
    }
    printf("\n");

    return 0;
}