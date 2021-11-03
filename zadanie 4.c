#include <stdio.h>
#include <stdlib.h>

long int silnia(int limit)
{
    long int wynik = 1;
    int ostatnia_silnia = 1;
    int i;
    printf("%d ", ostatnia_silnia);
    for(i = 2; (wynik+ostatnia_silnia) < limit; i++)
    {
        ostatnia_silnia *= i;
        wynik += ostatnia_silnia;
        printf("+ %d ", ostatnia_silnia);
    }

    return 0;
}

int main()
{
    int limit;
    printf("Podaj limit ciagu: ");
    scanf("%d", &limit);
    silnia(limit);

    return 0;
}
