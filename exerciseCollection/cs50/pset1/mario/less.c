#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n=get_int("Height: ");
    while(n<0||n>23)
        n = get_int("your input is out of range,input again: ");
    int k=n+1;
    for( int i=0;i<n;i++)
    {
        for(int j=0;j<k-2-i;j++ )
            printf(" ");
        for(int j=k-2-i;j<k;j++)
            printf("#");
        printf("\n");
    }
}