#include <stdio.h>
#include <conio.h>
void main()
{
start:
    printf("Welcome to our program.");
    int term, prev = 1, sec_prev = 0;
    printf("\nHow much terms of Fibbonacci Series you wanna print? ");
    scanf("%d", &term);
    printf("%d,%d", sec_prev, prev);
    for (int index = 0; index < term; index++)
    {
        int sum = prev + sec_prev;
        sec_prev = prev;
        printf(",%d", sum);
        prev = sum;
    }
    char permit;
    printf("\nIf You Wanna Use This Program Again.Press 'Y': ");
    getchar();
    scanf("%c", &permit);
    if (permit = 'Y' && permit == 'y')
    {
        printf("Redirecting To Program \n");
        goto start;
    }
    else
    {
        printf("Thanks for using our program.\nDeveloped by Er Pratham Saxena");
    }
    getch();
}