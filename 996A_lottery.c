#include <stdio.h>

int main()
{
    int amount;
    scanf("%d", &amount);

    int billsAmt = 0;
    const int bills[5] = {100, 20, 10, 5, 1};

    for (int i = 0; i < 5; i++)
    {
        if (amount < bills[i]) continue;

        billsAmt += amount / bills[i];
        amount %= bills[i];
    }
    printf("%d\n", billsAmt);

    return 0;
}