#include <stdio.h>
int main()
{
    char city;
    printf("enter the city name in first letter\n");
    scanf("%c",&city);
    switch(city)
    {
        case 'c':
        printf("my selection is china");
        break;
        case'h':
        printf("my selection is hindi");
        break;
        case't':
        printf("my selection is telengana");
        break;
        default:
        printf("you not  selected the city in this list");
        break;
    }
    printf(" thank you ");
    return 0;

