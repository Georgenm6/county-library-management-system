/*
    County Library System,
    by, george mbugua,
    Feb 2022,
    MIT License,
    C99 Compiler,
*/

#include <stdio.h>
#include <stdlib.h>

int menu();
void execute_action(int action);

int main()
{
    char title[100] = "County Library Management";
    char status[100] = "welcome george mbugua";
	execute_action(menu());
    int action;

    printf("\n\n\n\t\t\t   ****************\n\t\t\t%s\n \t\t\t\    %s\n\t\t\t   ****************\n", title, status);
    menu();
	return 0;
}

int menu ()
 {
    int action;

    printf("Select an action below\n");
    printf("1. Add new Patron\n");
    printf("2. view all patrons\n");
    printf("3. Add new resources\n");
    printf("4. View all resources\n");
    printf("Your actions: \n");
    scanf("%d", &action);
    if(action < 1 || action > 4)
    {
    	printf("invalid action\n");
	}
	return action;
}
void execute_action(int action)
{
    printf("Choice is: %d\n", action);
    switch(action) {
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
}
