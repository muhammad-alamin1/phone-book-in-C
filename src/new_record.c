// create new account
#include <stdio.h>
#include <stdlib.h>
#include "../include/new_record.h"

// name struct
typedef struct
{
    char first[25];
    char last[25];
} Name_type;

// create struct
typedef struct
{
    Name_type name;
    char address[101];
    char father_name[35];
    char mother_name[30];
    long int mobile_no;
    char sex[8];
    char mail[100];
} Person;

// new data save to database
void add_new_record(void)
{
    system("cls");
}
