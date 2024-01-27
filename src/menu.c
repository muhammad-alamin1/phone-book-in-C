#include <stdio.h>
#include <stdlib.h>
#include "../include/menu.h"

// menu
void main_menu()
{
    printf("\t\t\t**********WELCOME TO PHONE-BOOK**********\n");
    printf("\n\n\t\t\t**********MAIN MENU**********\n\n");
    printf("\t1. Create New Account\n");
    printf("\t2. List All Account\n");
    printf("\t3. Modify Account\n");
    printf("\t4. Search By Name\n");
    printf("\t5. Delete Account\n");
    printf("\t6. Exit\n");
}

// start func
void start()
{
    main_menu();
}

// back func
void back()
{
    start();
}
