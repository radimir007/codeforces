#include <stdio.h>

int lucky_numbers_count(long long input)
{
    int result = 0;
    while (input != 0)
    {
        if (input % 10 == 7 || input % 10 == 4)
            result++;
        
        input /= 10;
    }

    return result;
}

int is_lucky(long long number)
{
    if (number == 0) return 0;
    
    while(number != 0)
    {
        if (number % 10 != 4 && number % 10 != 7)
            return 0;

        number /= 10;
    }

    return 1;
}

int main()
{
    long long input;
    scanf("%lld", &input);

    int lucky = lucky_numbers_count(input);

    printf("%s\n", is_lucky(lucky) ? "YES" : "NO");

    return 0;
}