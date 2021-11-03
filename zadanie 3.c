#include <stdio.h>
#include <stdlib.h>


int WarMaks(int limit)
{
    int poprzednia_liczba = 0;
    int wynik = 0;
    printf("Limit wynosi: %d\n", limit);
    printf("%d ", poprzednia_liczba);
    do{
        poprzednia_liczba++;
        wynik += poprzednia_liczba;
        printf("+ %d ", poprzednia_liczba);

    }while(wynik + (poprzednia_liczba+1) < limit);
    printf("= %d", wynik);

    return 0;
}

int main()
{
    int limit;
    printf("Podaj limit ciagu: ");
    scanf("%d", &limit);

    WarMaks(limit);

    return 0;
}
