#include <stdio.h>
#include <stdlib.h>

int maks(int a, int b, int c)
{
    int maks = a;
    if(b > maks)
        maks = b;

    if(c > maks)
        maks = c;

    return maks;
}

int main()
{
    int a, b, c;
    printf("Podaj liczbe a: ");
    scanf("%d", &a);

    printf("Podaj liczbe b: ");
    scanf("%d", &b);

    printf("Podaj liczbe c: ");
    scanf("%d", &c);

    printf("Liczba maksymalna: %d", maks(a, b, c));

    return 0;
}
