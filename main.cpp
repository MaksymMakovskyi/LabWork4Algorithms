#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define n 3
void main()
{
    int i, f = 0, obrz;
    struct
    {
        char FIO[20];
        char predmet[20];
        int kol_peresdach;
    } dolg[n];
    for (i = 0; i < n; i++)
    {
        printf("\nBedite FIO           ");
        scanf("%s", &dolg[i].FIO);
        printf("Bedite predmet       ");
        scanf("%s", &dolg[i].predmet);
        printf("Bedite kol_peresdach ");
        scanf("%d", &dolg[i].kol_peresdach);
    }
    printf("\nBedite obrz      ");
    scanf("%d", &obrz);
    for (i = 0; i < n; i++)
    {
        if (dolg[i].kol_peresdach == obrz)
        {
            f++;
            printf("\n%15s\t%15s\t%3i ",
                dolg[i].FIO, dolg[i].predmet, dolg[i].kol_peresdach);
        }
    }
    if (f == 0)printf("\n Error");
    getch();
}
