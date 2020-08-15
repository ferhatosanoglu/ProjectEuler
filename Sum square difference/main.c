#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d",sumsquare()-squaresum());
}
int squaresum()
{
    int result=0;
    for (int i=1;i<101;i++)
    {
        result=result+(i*i);
    }
    return result;
}
int sumsquare()
{
    int result=0;
    for (int i=1;i<101;i++)
    {
        result=result+i;
    }
    return result*result;
}
