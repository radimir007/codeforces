#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    scanf("%d", &count);

    int input;

    double result = 0.0;

    for (int i = 0; i < count; i++)
    {
        scanf("%d", &input);
        result += (double) input;
    }

    result /= (int) count;

    printf("%.10f\n", result);

    return 0;
}