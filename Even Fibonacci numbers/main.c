#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y=1,sum=0,total=0;
    for (int x=2;x<4000000;)
    {
        if (x%2==0)
            total=total+x;
        sum=x+y;
        y=x;
        x=sum;
    }
    printf("%d",total);
    return 0;
}
