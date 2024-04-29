#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    float max,*p;
    printf("enter range");
    scanf("%d",&n);
    p=(float*)malloc(n*sizeof(float));
    if(p==NULL)
    {
        printf("memory not allocated");
    }
    else
    {
        printf("enter range");
        for(i=0;i<n;i++)
        {
            scanf("%f",(p+i));
        }
        max=*p;
        for(i=0;i<n;i++)
        {
            if(max<*(p+i))
            {
                max=*(p+i);
            }
        }
        printf("max element is:%.2f",max);
    }
    free(p);

    return 0;
}
/*
enter range5
enter range2.3
5.8
6.9
6.2
6.1
max element is:6.90
*/
