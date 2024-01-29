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

void display_all_data(void)
{
    system("cls");

    Person p;
    FILE *fp;
    char file_name[] = "./data/usr_data.txt";
    char buff[1001];

    fp = fopen(file_name, "rb");
    if(fp == NULL)
        perror("Error.! File Opening Error.!");

    // Read data until the end of the file is reached.
    while (fscanf(fp, "%24s %24s %100s %34s %ld %7s %99s",
                  p.name.first, p.name.last,
                  p.address, p.father_name, &p.mobile_no,
                  p.sex, p.mail) >= 0) {
        // Process each record as needed.
        printf("Name: %s %s\n", p.name.first, p.name.last);
        printf("Address: %s\n", p.address);
        printf("Father's Name: %s\n", p.father_name);
        printf("Mobile No: %ld\n", p.mobile_no);
        printf("Sex: %s\n", p.sex);
        printf("Email: %s\n", p.mail);
        printf("\n");
    }


    fclose(fp);
}
