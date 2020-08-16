#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0,counter=0;
    for (int i=1;i<1000000;i++)
    {
        sum+=i;
        for (int x=1;x<=sum;x++)
        {
            if (sum%x==0)
                counter++;
        }
        printf("%d\n",sum);
        if (counter>499)
        {
            return 0;
        }
        counter=0;
    }
}
