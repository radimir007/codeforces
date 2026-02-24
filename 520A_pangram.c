#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char usedLetters[27] = "";

    int inputLen;
    scanf("%d", &inputLen);

    char input[101];
    scanf("%s", input);

    for (int i = 0; i < inputLen; i++)
    {
        int isDuplicate = 0;
        for (int j = 0; j < strlen(usedLetters); j++)
        {   
            if (tolower(input[i]) == usedLetters[j]) isDuplicate = 1;
        }

        if (!isDuplicate) 
        {
            usedLetters[strlen(usedLetters)] = tolower(input[i]);
        }
    }

    if (strlen(usedLetters) >= 26) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }

    return 0;
}