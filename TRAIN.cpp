#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define TABLE 1
void main()
{
    int i, f = 0;
        char destination[20];
    struct //Структура з інформацією про поїзди
    {
        char NAZV[20]; //Назва пункту призначення
        int NAMR; //Номер поїзда
        char DATE[20]; //Дата відправлення
        char TIME[20]; //Час відправлення
    } dolg[TABLE];
    for (i = 0; i < TABLE; i++)
    {
        printf("\nEnter NAZV\t\t");
        scanf("%s", &dolg[i].NAZV); //Зчитування пункту призначення з консолі
        printf("Enter NAMR\t\t");
        scanf("%d", &dolg[i].NAMR); //Зчитування номера поїзда з консолі
        printf("Enter DATE\t\t");
        scanf("%s", &dolg[i].DATE); //Зчитування дати відправлення поїзда з консолі
        printf("Enter TIME\t\t");
        scanf("%s", &dolg[i].TIME); //Зчитування часу відправлення поїзда з консолі
    }
    printf("\nEnter your destination\t");
    scanf("%s", &destination);
    for (i = 0; i < TABLE; i++)
    {
        if (dolg[i].NAZV == destination)
        {//Виведення поїздів, що їдуть в даний пункт призначення
            f++;
            printf("\n%15s\t%4i\t%10s\t%5s ",
                dolg[i].NAZV, dolg[i].NAMR, dolg[i].DATE, dolg[i].TIME);
        }
    }
    //Повідомлення про помилку, якщо таких поїздів немає
    if (f == 0)printf("\n No train goes to this destination");
#pragma warning(suppress : 4996)getch();
}
