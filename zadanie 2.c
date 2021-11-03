#include <stdio.h>
#include <stdlib.h>


int ktora_cwiartka(int wsp_x, int wsp_y)
{
    if(wsp_x > 0 && wsp_y > 0)
        return 1;
    if(wsp_x < 0 && wsp_y > 0)
        return 2;
    if(wsp_x < 0 && wsp_y < 0)
        return 3;
    if(wsp_x > 0 && wsp_y < 0)
        return 4;

    return 0;
}

int main()
{
    int x, y;
    printf("Podaj wspolrzedna x punktu: ");
    scanf("%d", &x);

    printf("Podaj wspolrzedna y punktu: ");
    scanf("%d", &y);

    printf("puntk znajduje sie w %d cwiartce", ktora_cwiartka(x, y));

    return 0;
}
