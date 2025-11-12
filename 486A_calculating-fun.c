#include <stdio.h>
#include <math.h>

long long calculation(const long long n)
{
    int addition = 1;
    if (n % 2 == 0) addition = 0;

    return (n / 2 + addition) * pow(-1, n);
}

int main()
{
    long long input;
    scanf("%lld", &input);

    printf("%lld\n", calculation(input));

    return 0;
}