#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME  "Libpatron.bin"

struct Patron{
    int id;
    char name[50];
    char email[50];
    char password[50];
};

struct Book{
    int id;
    char title[50];
    char author[50];
    char summary[50];
};

void menu();
void add_patron();
void view_patron();
void add_book();
void view_book();

int main(){

 char title [ 50 ] = "county library management";
 char name  [ 10 ] = "GEORGE";
 printf( "\t\t%s\n\t\t%s\n", title, name );
 menu();



}

void menu() {
    int action;
    do {
        printf ("\t\t 1. Add patron\n\t\t 2. View patron\n\t\t 3. Add book\n\t\t 4. View book\n\t\t 0. Exit\n \t\t Select one action: ") ;
        scanf("%d", &action );

        switch (action){
        case 1:
             add_patron();
             break;
        case 2:
            view_patron();
            break;
        case 3:
             add_book();
             break;
        case 4:
             view_book();
             break;
        case 0:
            exit(1);
            break;
        default:
            printf("invalid action!!!");
        }

        system("cls");
    } while (action != 0);



}

void add_patron(){
    system("cls");
    FILE *fp;
    fp = fopen(FILE_NAME,"a+b");

    struct Patron patron;
    printf("\t\t\t Add new Patron.\n\n");
    printf ("\t\t enter name: ");
    scanf("%s", patron.name);
    printf ("\t\t enter email: ");
    scanf("%s", patron.email);
    printf ("\t\t enter password: ");
    scanf("%s", patron.password);

    fwrite(&patron,sizeof(struct Patron),1,fp);
    fclose(fp);

    printf("\n\n\n\t\t\tPress any key to go to main menu.....");
    getchar();
}

 void view_patron(){
    system("cls");
    FILE *fp;
    struct Patron patron;
    fp = fopen(FILE_NAME,"r+b");
    fread(&patron,sizeof(struct Patron),1,fp);
    getchar();
    printf ("\t\t Patron %s.\n", patron.name);
    printf ("\t\t Email %s.\n", patron.email);
    printf ("\t\t Password %s.\n", patron.password);
    getchar();
    fclose(fp);

    printf("\n\n\n\t\t\tPress any key to go to main menu.....");
    getchar();
 }

 void add_book(){
    system("cls");
    FILE *fp;
    fp = fopen(FILE_NAME,"a+b");

    struct Book book;
    printf("\t\t\t Add new Book.\n\n");
    printf ("\t\t Enter Book Title: ");
    scanf("%s", book.title);
    printf ("\t\t enter the book author: ");
    scanf("%s", book.author);
    printf ("\t\t enter a synopsis: ");
    scanf("%s", book.summary);

    fwrite(&book,sizeof(struct Book),1,fp);
    fclose(fp);

    printf("\n\n\n\t\t\tPress any key to go to main menu.....");
    getchar();
 }

 void view_book(){
    system("cls");
    FILE *fp;
    struct Book book;
    fp = fopen(FILE_NAME,"r+b");
    fread(&book,sizeof(struct Book),1,fp);
    getchar();
    printf (" \t\t\t\t All Books.\n");
    printf ("\t\t Title: %s.\n", book.title);
    printf ("\t\t Author %s.\n", book.author);
    printf ("\t\t Summary %s.\n", book.summary);
    getchar();
    fclose(fp);

    printf("\n\n\n\t\t\tPress any key to go to main menu.....");
    getchar();
 }

