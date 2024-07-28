//
// Created by jatin on 28-Jul-24.
//

/*
Write a C Program to create a structure with atleast 5 members of different datatype.

a.Use the structure to get five records from the user (console input)
b.Use the structure to print ten records. ( console output)
*/

#include <stdio.h>

struct records {
    char name[90];
    int age;
    long regi;
    float weight;
    double Ph;
};

struct records R[10]; // Global array to store 10 records



void get()
{
    printf("Enter details for 10 students:\n");
    for (int i = 0; i < 10; ++i)
    {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", R[i].name);
        printf("Age: ");
        scanf("%d", &R[i].age);
        printf("Registration Number: ");
        scanf("%ld", &R[i].regi);
        printf("Weight: ");
        scanf("%f", &R[i].weight);
        printf("Phone Number: ");
        scanf("%lf", &R[i].Ph);
        while(R[i].Ph<1000000000||R[i].Ph>9999999999)
        {
            printf(" Invaild number entered,\n Please enter again");
            printf("\n\nPhone Number: ");
            scanf("%lf", &R[i].Ph);
        }
        printf("\n");
    }
}

void put()
{
    printf("\nPrinting all records:\n");
    for (int i = 0; i < 10; ++i)
    {
        printf("Record %d:\n", i + 1);
        printf("Name: %s\n", R[i].name);
        printf("Age: %d\n", R[i].age);
        printf("Registration Number: %ld\n", R[i].regi);
        printf("Weight: %f\n", R[i].weight);
        printf("Phone Number: %.0f\n", R[i].Ph);
        printf("\n");
    }
}

int main()
{
    get();
    put();
    return 0;
}
