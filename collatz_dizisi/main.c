#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long sayac=0,tut=0, y=0, colletz=0;

    for(int x=200000;x<900000;x++){
        y=x;
        sayac=0;
        while(y>1){
         if (y%2==0)
            y=y/2;
         else
            y=(y*3)+1;
         sayac++;

        }
        printf ("%d",y);
        if (tut<sayac){
            colletz=x;
            tut=sayac;
        }

    }
    printf("%d",colletz);
    return 0;
}
