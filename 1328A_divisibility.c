#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int remain = a % b;
        printf("%d\n", remain == 0 ? 0 : b - remain);
    }

    return 0;
}