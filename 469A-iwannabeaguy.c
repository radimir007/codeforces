#include <stdio.h>
#include <stdlib.h>

void store_levels(int *result) 
{
    int count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        int temp;
        scanf("%d", &temp);

        result[temp - 1] = 1;
    }
}

int check_result(int* result, const int n) 
{
    for (int i = 0; i < n; i++) 
    {
        if (result[i] == 0)
        {
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }

    printf("I become the guy.\n");
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    int* result = calloc(n, sizeof(int));
    store_levels(result); // X
    store_levels(result); // Y

    check_result(result, n);

    free(result);

    return 0;
}