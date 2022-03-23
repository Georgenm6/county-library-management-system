/*
    County Library System,
    by, George mbugua,
    Feb 2022,
    MIT License,
    C99 Compiler,
*/

#include <stdio.h>
#include <stdlib.h>

struct Patron
{
    char name[100];
    char email[50];
    char password[30];
    int is_staff;
};
struct Book
{
    char name[100];
    char title[50];
    char ISBN[30];
};

void menu();
void add_patron();
void add_book();


int main()
{
    char title[100] = "County Library Management";
    char status[100] = "welcome George";
    int action;

    printf("\n\n\n\t\t\t   ****************\n\t\t\t%s\n \t\t\t\    %s\n\t\t\t   ****************\n", title, status);
    menu();
	return 0;
}

void menu()
 {
    int action = 0;

    do {
        printf("Select an action below\n");
        printf("1. Add new Patron\n");
        printf("2. view all patrons\n");
        printf("3. Add new book\n");
        printf("4. View all books\n");
        printf("0. Exit program\n");
        printf("\nYour actions: ");
        scanf("%d", &action);
        if(action < 1 || action > 4)
        {
            printf("invalid action\n");
        }

        switch(action) {
            case 1:
                add_patron();
                break;
            case 2:
                printf(" view all patrons\n");
                break;
            case 3:
                add_book();
                break;
            case 4:
                printf(" View all resources\n");
                break;
            case 0:
                exit(1);
                break;
            default:
                printf("Wrong Entry.");

        }
    } while (action != 0);
}

void add_patron()
{
    system("cls");
    struct Patron patron;
    printf("Create Patron");
    printf("enter Name: ");
    getchar();
    gets(patron.name);
    printf("enter email: ");
    gets(patron.email);
    printf("enter initial password: ");
    gets(patron.password);
    printf("enter 1 if staff 0 otherwise: ");
    scanf("%d", &patron.is_staff);

    printf("Enter any key to go to main....\n");
    getchar();
    system("cls");
}

void add_book()
{
    system("cls");
    struct Book book;
    printf("Enter book: ");
    getchar();
    gets(book.name);
    printf("Enter title: ");
    gets(book.title);
    printf("Enter ISBN: ");
    gets(book.ISBN);

    printf("Enter any key to go to main....\n");
    getchar();
    system("cls");
}
