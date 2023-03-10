#include<stdio.h>
void main()
{
    int i;
    int n, a[10];
    printf("Enter the number of elements: ");
    scanf("%d", & n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", & a[i]);
    }
    printf("Elements are: \n");
    for (i=0;i<n;i++)
    {
        printf("%d\n", a[i]);
    }
    getch();
}
