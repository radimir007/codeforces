#include <stdio.h>
#include <stdlib.h>

int compare_elements(const void* a, const void* b)
{
    return (*(int*)b - *(int*)a);
}

int main()
{
    int n;
    scanf("%d", &n);

    int* input_arr = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
        scanf("%d", &input_arr[i]);

    qsort(input_arr, n, sizeof(int), compare_elements);

    int result = 0;

    for (int i = 0; i < n; i++)
    {
        int left_result = 0;
        int right_result = 0;

        for (int j = 0; j <= i; j++)
            left_result += input_arr[j];
        
        for (int j = i+1; j < n; j++)
            right_result += input_arr[j];

        if (left_result > right_result)
        {
            result = i+1;
            break;
        }
    }

    printf("%d\n", result);

    return 0;
}