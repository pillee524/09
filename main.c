#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int i, average;
    int sum=0;
    int grade[SIZE];

    for (i=0; i<SIZE; i++) {
        printf("Enter 5 student's grades : ");
        scanf("%d", &grade[i]);
        sum += grade[i];}
        
    average = sum / SIZE;
    printf("Average grade: %d\n", average);
    
    return 0;
}