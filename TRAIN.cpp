#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define TABLE 1
void main()
{
    int i, f = 0;
        char destination[20];
    struct //��������� � ����������� ��� �����
    {
        char NAZV[20]; //����� ������ �����������
        int NAMR; //����� �����
        char DATE[20]; //���� �����������
        char TIME[20]; //��� �����������
    } dolg[TABLE];
    for (i = 0; i < TABLE; i++)
    {
        printf("\nEnter NAZV\t\t");
        scanf("%s", &dolg[i].NAZV); //���������� ������ ����������� � ������
        printf("Enter NAMR\t\t");
        scanf("%d", &dolg[i].NAMR); //���������� ������ ����� � ������
        printf("Enter DATE\t\t");
        scanf("%s", &dolg[i].DATE); //���������� ���� ����������� ����� � ������
        printf("Enter TIME\t\t");
        scanf("%s", &dolg[i].TIME); //���������� ���� ����������� ����� � ������
    }
    printf("\nEnter your destination\t");
    scanf("%s", &destination);
    for (i = 0; i < TABLE; i++)
    {
        if (dolg[i].NAZV == destination)
        {//��������� �����, �� ����� � ����� ����� �����������
            f++;
            printf("\n%15s\t%4i\t%10s\t%5s ",
                dolg[i].NAZV, dolg[i].NAMR, dolg[i].DATE, dolg[i].TIME);
        }
    }
    //����������� ��� �������, ���� ����� ����� ����
    if (f == 0)printf("\n No train goes to this destination");
#pragma warning(suppress : 4996)getch();
}
