#include <stdio.h>

int yearly_gain(int a, int b)
{
    int result = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        result++;
    }

    return result;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", yearly_gain(a, b));

    return 0;
}