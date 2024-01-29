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

// create person struct
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
    Person p;
    int total_write_data = 0;
    FILE *fp;
    char file_name[] = "./data/usr_data.txt";

    // file open
    fp = fopen(file_name, "a+");
    if(fp == NULL)
    {
        perror("Error.! File opening error.!");
        return EXIT_FAILURE; // func return type void
    }

    printf("Enter First Name: ");
    scanf(" %[^\n]", p.name.first);

    printf("Enter Last Name: ");
    scanf(" %[^\n]", p.name.last);

    printf("Enter Address: ");
    scanf(" %[^\n]", p.address);

    printf("Enter Father's Name: ");
    scanf(" %[^\n]", p.father_name);

    printf("Enter Mother's Name: ");
    scanf(" %[^\n]", p.mother_name);

    printf("Enter Phone Number: ");
    scanf("%ld", &p.mobile_no);

    printf("SEX: ");
    scanf(" %[^\n]", p.sex);

    printf("Enter E-mail: ");
    scanf(" %[^\n]", p.mail);

    // save data to file
    total_write_data = fprintf(fp, "%s %s        %s        %s        %s        %ld        %s        %s\n", p.name.first, p.name.last, p.address, p.father_name, p.mother_name, p.mobile_no, p.sex, p.mail);
    if(total_write_data != 0)
    {
        system("cls");
        printf("\t\t\t*****User Data Save Successfully.!*****");
    }

    // file close
    fclose(fp);
}
