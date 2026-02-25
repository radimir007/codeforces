#include <stdio.h>
#include <string.h>

int faces_count(char* input)
{
    if (strcmp(input, "Tetrahedron") == 0)
    {
        return 4;
    } 
    else if (strcmp(input, "Cube") == 0)
    {
        return 6;
    }
    else if (strcmp(input, "Octahedron") == 0)
    {
        return 8;
    }
    else if (strcmp(input, "Dodecahedron") == 0)
    {
        return 12;
    }

    return 20;
}

int main()
{
    int n;
    scanf("%d", &n);

    int result = 0;

    for (int i = 0; i < n; i++)
    {
        char input[15];
        scanf("%s", input);

        result += faces_count(input);
    }

    printf("%d\n", result);

    return 0;
}