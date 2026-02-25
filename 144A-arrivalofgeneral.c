#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int* line = malloc(n * sizeof(int));
    scanf("%d", &line[0]);
    int min = line[0];
    int max = line[0];
    int min_index = 0;
    int max_index = 0;

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &line[i]);

        if (line[i] <= min) 
        {
            min = line[i];
            min_index = i;
        }
        else if (line[i] > max)
        {
            max = line[i];
            max_index = i;
        }
    }

    int result = (n - 1 - min_index) + max_index;

    /* If tallest soldier is after the smallest, they will change order between
       themselves in the process, so we need to decrement value by 1 */
    if (max_index > min_index) result--;

    printf("%d\n", result);

    return 0;
}