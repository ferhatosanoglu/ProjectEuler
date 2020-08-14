#include <stdio.h>
#include <stdlib.h>

main()
{
    long int i,x,y;
    for(i=21; i<999999999; i++)
    {
        y=0;
        for(x=2; x<21; x++)
        {
            if(i%x!=0)
            {
                y=1;
                break;
            }
        }
        if(y==0)
        {
            printf("%ld", i);
            break;
        }
    }
}

