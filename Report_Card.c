#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#include<time.h>
#include<stdlib.h>

struct Student_Details
{
	char name[100];
	char section[10];
	double Registration_Number;
	char DOB[10];
};

int main()
{
	system("cls");
	printf("Print your Report Card from Academy of Code\n");
	
	int n;
	char subject[100];

    struct Student_Details student;

    printf("\nEnter Student Details: \n");
	printf("Name: ");
    fgets(student.name, 100, stdin);

    printf("Section: ");
    fgets(student.section, 10, stdin);

    printf("Registration Number: ");
    scanf("%lf", &student.Registration_Number);
	b:
    printf("Date of Birth (DD/MM/YYYY): ");
    scanf("%s", student.DOB);
	// if(isdigit(student.DOB)){
	// 	printf("Invalid Input!");
	// 	goto b;
	// }

    printf("\n\nEnter the number of subjects: ");
    scanf("%d", &n);

	int marks[n];

	for(int i=0;i<n;i++)
	{
		printf("Enter the marks in subject %d: ",i+1);
		scanf("%d",&marks[i]);
	}

	int total = 0;
	for(int i=0; i<n; i++) 
	{
		total += marks[i];
	}

	for(int i=0; i<n; i++)
	{
		if (marks[i] > 100) 
		{
			printf("The input is invalid\n");
			return 0;
		}
	}

	printf("\n===================Academy of Code=====================\n");
	printf("********************REPORT CARD***********************\n");
	printf("Name: %s",student.name);
	printf("Section: %s\n",student.section);
	printf("Registration Number: %.0f\tDOB: %s\n",student.Registration_Number, student.DOB);
	printf("=======================================================\n");

	for(int i=0;i<n;i++)
	{
        printf("Subject %d: %d\n",i+1,marks[i]);
    }

	for(int i=0;i<n;i++)
	{
		if (marks[i] < 33) 
		{
			printf("=======================================================\n");
			printf("**Your Subject(s) marks are/is less than 33**\n");
			printf("	 **You are failed!**\n");
			goto a;
		}
	}

	printf("=======================================================\n");

	float percentage = (float)total/n;
	printf("\tTotal: %d\tPercentage: %.2f%%\n",total,percentage);

	if(percentage>=90&&percentage<=100){
		printf("\tGrade: A+\tRemarks: Outstanding\n");
	}
	else if(percentage>=80&&percentage<90){
		printf("\tGrade: A\tRemarks: Excellent\n");
	}
	else if(percentage>=70&&percentage<80){
		printf("\tGrade: B+\tRemarks: Very Good\n");
	}
	else if(percentage>=60&&percentage<70){
		printf("\tGrade: B\tRemarks: Good\n");
	}
	else if(percentage>=50&&percentage<60){
		printf("\tGrade: C\tRemarks: Average\n");
	}
	else if(percentage>=40&&percentage<50){
		printf("\tGrade: D\tRemarks: Poor\n");
	}
	else{
		printf("\tGrade: F\tRemarks: Fail\n");
	}
	a:
	printf("=======================================================\n");
	printf("	**Digitally signed by aadesh006**\n");
	printf("=======================================================\n");


	return 0;
}