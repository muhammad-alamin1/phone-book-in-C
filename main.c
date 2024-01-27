#include <stdio.h>
#include <stdlib.h>
#include "./include/menu.h"
#include "./include/new_record.h"

int main(int argc, char* const argv[])
{
    unsigned int input_operation;

    system("color 8f");
    main_menu();

    printf("\n\n\n\tEnter Your Operation.!\n");
    scanf("%u", &input_operation);

    switch(input_operation)
    {
        case 1:
            add_new_record();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            exit(0);
            break;
        default:
            system("cls");
            perror("Error! Wrong Number.");
            printf("Enter 1 to 6 Only.\n\n");
            start();
            printf("\n\n\n\tEnter Your Operation.!\n");
            scanf("%u", &input_operation);
    }

    return 0;
}
