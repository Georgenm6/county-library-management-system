/*
    County Library System,
    by, George mbugua,
    Feb 2022,
    MIT License,
    C99 Compiler,
*/

#include <stdio.h>
#include <stdlib.h>

    int menu();

int main()
{
    char title[100] = "County Library Management";
    char status[100] = "welcome George mbugua";

    int v;

    printf("\n\n\n\t\t\t   ****************\n\t\t\t%s\n \t\t\t\    %s\n\t\t\t   ****************\n", title, status);
    menu();



    return 0;
}

int menu () {
    int v;

    printf("Select an action below\n");
    printf("1. Add new Patron\n");
    printf("2. view all patrons\n");
    printf("3. Add new resources\n");
    printf("4. View all resources\n");
    printf("Your actions: \n");
    scanf("%d", &v);

    printf("Choice is: %d\n", v);
    switch(v) {
    case 1:
        printf(" Add new Patron\n");
        break;
    case 2:
        printf(" view all patrons\n");
        break;
    case 3:
        printf(" Add new resources\n");
        break;
    case 4:
        printf(" View all resources\n");
        break;
    default:
        printf("Wrong Entry.");

    }

    return 0;


}
