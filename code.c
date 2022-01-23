#include <stdio.h>
#include <stdlib.h>
sum();
int n;
int main()
{
int i;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The input is: ");
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
    }

    int add=sum(n);
    printf("\nSum of digits is: %d",add);
    sum();

    return 0;
}
sum(int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        return n+sum(n-1);
    }

