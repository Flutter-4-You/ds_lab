#include <stdio.h>
int main()
{
    int r = 0, i, num;
    long n;
    printf ( "Enter Number:");
    scanf ("%d", & n);
    num = n; //copy original number

    while (n>0)
    {
    i= n% 10;
    r= r*10 + i;
    n= n/10;
    }

    printf("\n Reverse Number : %d", r);

    if (r==num)
        printf("\n\n %d is Plaindrome number", num);
    else
        printf("\n\n %d is NOT a palindrome Number", num);

        return 0;
}
