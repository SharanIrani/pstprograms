#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[30];
    int roll;
    float percentage;
};

void main()
{
    struct student s[20];
    int i, n;

    clrscr(); // Clear screen in Turbo C

    printf("\nEnter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        char percentageStr[20];
        printf("\nEnter name, roll, and percentage of student %d: ", i + 1);
        scanf("%s %d %s", s[i].name, &s[i].roll, percentageStr);
        s[i].percentage = atof(percentageStr);
    }

    printf("\nStudent Details:\n\n");
    printf("Name\t\tRoll\t\tPercentage\n");

    for (i = 0; i < n; i++)
        printf("%s\t\t%d\t\t%2.2f\n", s[i].name, s[i].roll, s[i].percentage);

    getch(); // Wait for a key press in Turbo C
}
