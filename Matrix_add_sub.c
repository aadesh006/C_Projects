#include <stdio.h>

int main() {
    int matrix1[3][3];
    int matrix2[3][3];
    int result[3][3];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter the element at position [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter the element at position [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("The 2 matirces are:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    char choice;
    printf("Do you want to add or subtract the matrices?\nEnter\n'+' for addition\n'-' for subtraction\n'*' for multiplication\n");
    scanf("%c",&choice);
    if(choice == '+')
    {
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
    }
    else if(choice == '-')
    {
            for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
            }
        }
    }
    else if(choice == '*'){
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] * matrix2[i][j];
            }
        }
    }
    else{
        printf("Invalid choice\n");
    }

    printf("Resultant Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}