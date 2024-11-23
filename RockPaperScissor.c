#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    system("cls");
    srand(time(0));
    int player,comp;
    int choice;
    printf("Let's play a game of Rock Paper & Scissors\n");
    printf("Enter your choice\n1 for Scissors\n2 for Rock\n3 for Paper\n");
    scanf("%d",&choice);
    comp=rand()%3+1;
    printf("Computer's choice is %d\n",comp);

    if(choice==comp){
        printf("It's a draw\n");
    }
    else if(choice==1&&comp==3||choice==2&&comp==1||choice==3&&comp==2){
        printf("You win\n");
    }
    else if(choice==1&&comp==2||choice==2&&comp==3||choice==3&&comp==1){
        printf("You lose\n");
    }
    else if(choice != 1,2,3){
        printf("Invalid choice\n");
    }
    else{
        printf("Invalid choice\n");
    }
    return 0;

    }


