#include <stdio.h>
void main()
{
    int a,b,c;
    printf("enter the a,b,c values");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&b>c)
    {
        printf("a is largest");
    }
            else
            {
                if(b>c)
                {
                    printf("b is largest");
                }
                else
                {
                    printf("c is largest");
                }
            }
    return 0;
    }
    

