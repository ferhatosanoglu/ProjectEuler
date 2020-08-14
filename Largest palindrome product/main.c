#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,kalan,gecici,sonuc,tut=0;
    for (int i=100;i<1000;i++)
    {
        for (int x=100;x<1000;x++)
        {
            y=i*x;
            gecici=y;
            sonuc=0;
            while (gecici>0)
            {
                kalan=gecici%10;
                sonuc=sonuc*10+kalan;
                gecici=gecici/10;
            }
            if(y==sonuc)
            {
                if(sonuc>tut)
                   tut=sonuc;
            }

        }
    }
    printf("%d",tut);
    return 0;
}
