#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10], row, col;
    int i, j;
    printf("Enter the number of Rows: ");
    scanf("%d", &row);
    printf("Enter the number of Columns: ");
    scanf("%d", &col);
    printf("\n Enter %d Array Elements: \n", row*col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            scanf("%d", & a[i][j]);
    }
    printf("\n The Array is:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}
