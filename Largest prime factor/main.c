#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i=2;i<600851475143;i++)
        if (600851475143%i==0)
        {
            int a=0;
            for (int x=1;x<i;x++)
            {
                if (i%x==0)
                    a++;
            }
            if (a==1)
                printf("%d\n",i);
        }
    return 0;
}
