#include <stdio.h>
int main()
{
    int a,b,c;
    a=21;
    scanf("%d",&b);
    c=b%7;
    if(c>0)
    {
        printf("Exces %d no of lime",c);
    }
    else if(c<0)
    {
        printf("Needed %d no of lime",c-7);
    }
    else
    {
        printf("Satisfied");
    }
}
