#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float Fees;
    char name[30];
    long long int phone;
};

int main()
{
    printf("Enter NUmber of Student: ");
    int n;  
    scanf("%d", &n);
    struct employee e1[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Name of Student %d: ", i + 1);
        scanf("%d", &n);
        //getchar(); // to clear the buffer
        scanf(" %[^\n]s", e1[i].name); 
        // fgets(e1[i].name, 25, stdin); //using this with fgets creates a problem of first character missing

        printf("Enter Fees of Student %d: ", i + 1);
        scanf("%f", &e1[i].Fees);

        printf("Enter Registration Number of Student %d: ", i + 1);
        scanf("%d", &e1[i].code);

        printf("Enter Phone Number of Student %d: ", i + 1);
        scanf("%lld", &e1[i].phone);
        printf("-----------------------------------------------------------\n");
    }
    printf("-----------------------------------------------------------\n");
    printf("                **List of Students**\n");
    printf("-----------------------------------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        printf("Name of Student %d: %s", i + 1, e1[i].name);
        printf("\nFees in Lakh for 4 years: %.2f", e1[i].Fees);
        printf("\nRegistration Number: %lld", e1[i].code);
        printf("\nPhone Number: +91-%lld", e1[i].phone);
        printf("\n-----------------------------------------------------------\n");
    }
    return 0;
}