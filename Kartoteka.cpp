#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

//оголошення структури
int const kilkist = 3;
struct video
{
    char name[40];
    char regis[40];
    int price;
}film[kilkist];

//прототипы ф-цій
void AddInfo();
void Searchregis(char* regis);
void ShowAll();

//головна програма
void main()
{
    char name[20], regis[20], choice;
    //меню
    do {
        cout << "Select an action:\n1-Add information\n2-Search by producer\n3-Sorted by price\n4-Exit\n";
        cin >> choice;
        switch (choice) {
        case '1':
            AddInfo();
            break;
        case '2':
            cout << "Enter producer`s name\n";
            cin >> regis;
            Searchregis(regis);
            break;
        case '3':
            ShowAll();
            break;
        case '4':
            exit(0);
            break;
        default:
            cout << "Wrong selection\n";
            break;
        }
    } while (choice != '7');
}

//ф-ція додавання інрормації
void AddInfo()
{
    int k;
    cout << "Enter the number of movies:\n";
    cin >> k;
    for (int i = 0; i < k; i++) {
        cout << "Enter the movie name[" << i << "]:\n";
        cin >> film[i].name;
        cout << "Enter the produser`s name[" << i << "]:\n";
        cin >> film[i].regis;
        cout << "Enter the price[" << i << "]:\n";
        cin >> film[i].price;
    }
}

//ф-ція пошуку по режисеру
void Searchregis(char* regis)
{
    for (int i = 0; i < kilkist; i++) {
        if (_stricmp(regis, film[i].regis) == 0) {
            cout << "Movie name: " << film[i].name << "\n";
            cout << "Producer: " << film[i].regis << "\n";
            cout << "Price: " << film[i].price << "\n";
            cout << "##########################\n";
        }
        else
            cout << "Movie not found\n";
    }

}
//ф-ція показу всіх фільмів
void ShowAll()
{
    for (int i = 0; i < kilkist; i++) {
        cout << "Movie name: " << film[i].name << "\n";
        cout << "Producer: " << film[i].regis << "\n";
        cout << "Price: " << film[i].price << "\n";
        cout << "##########################\n";
    }
}