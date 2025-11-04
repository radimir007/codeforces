#include <stdio.h>

int main()
{
    char a[101];
    char b[101];

    scanf("%s", a);
    scanf("%s", b);

    int i = 0;

    while (a[i] != '\0')
    {
        if (a[i] != b[i])
            printf("1");
        else
            printf("0");
        
        i++;
    }
    printf("\n");
}