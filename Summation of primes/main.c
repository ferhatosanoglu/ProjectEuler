#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int counter=0,sum=0;
    for (int i=2;i<2000000;i++)
    {
        for (int x=2;x<=i;x++)
        {
            if (i%x==0)
                counter++;
        }
        if (counter==1)
            sum=sum+i;
        counter=0;
    }
    printf("%lld",sum);
    return 0;
}
