// main.c
#include <stdio.h>
#include "mainmenu.h"

int main() {
    int choice;

    do {
        displayMenu();
        scanf("%d", &choice);

        performAction(choice);

    } while (choice != 3);

    return 0;
}
