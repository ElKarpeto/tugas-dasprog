#include <stdio.h>

typedef long long ll;

ll n;

ll countK()
{
    ll temp = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum * 10 + 6;
        temp += sum;
    }
    return temp;
}

ll countDigits(ll num)
{
    ll sum = 0, lastDigit = 0;
    while (num > 0)
    {
        lastDigit = num % 10;
        num = num / 10;
        sum += lastDigit;
    }

    return sum;
}

int main()
{
    scanf("%lld", &n);

    ll res;
    if (n <= 12)
    {
        res = countDigits(countK());
    }
    else
    {
        if (n % 3 == 0)
        {
            res = 11 * (n - 12) / 3 + countDigits(((1111111111110 - n) * 2) / 3);
        }
        else if (n % 3 == 1)
        {
            res = 11 * (n - 10) / 3 + countDigits(((11111111110 - n) * 2) / 3);
        }
        else
        {
            res = 11 * (n - 11) / 3 + countDigits(((111111111110 - n) * 2) / 3);
        }
    }
    printf("%lld\n", res);
}