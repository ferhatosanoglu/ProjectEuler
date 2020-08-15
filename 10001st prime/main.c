#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,sayac=0;
    for (int i=2;i>0;i++)
    {
        for (int x=2;x<=i;x++)
        {
            if(i%x==0)
            a++;
        }
        if (a==1)
            sayac++;
        a=0;
        if (sayac==10001)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
