// mainmenu.c
#include <stdio.h>
#include "mainmenu.h"

void displayMenu() {
    printf("1. Print something\n");
    printf("2. Option 2 (not implemented)\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
}

void performAction(int choice) {
    switch (choice) {
        case 1:
            printf("You chose to print something!\n");
            break;
        case 2:

            //print TicTacToe board
            //print 3x3 grid

            printf("   |   |   \n");
            printf("-----------\n");
            printf("   |   |   \n");
            printf("-----------\n");
            printf("   |   |   \n");

            break;
        case 3:
            printf("Exiting the program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
    }
}
