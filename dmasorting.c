#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,t,n,*p,j;
    printf("enter range: ");
    scanf("%d",&n);
    p= (int*)malloc (n*sizeof(int));
    if(p== NULL)
    {
        printf("memory not allocated");
    }
    else
    {
        printf("enter elements\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",(p+i));
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(*(p+j)>*(p+j+1))
                {
                    t=*(p+j);
                    *(p+j)=*(p+j+1);
                    *(p+j+1)=t;  
                }
                
            }
        }
        printf("elements after sorting:");
        for(i=0;i<n;i++)
        {
            printf("%d ",*(p+i));
        }
        
    }
    free(p);

    return 0;
}
/*
enter range: 5
enter elements
1
6
9
8
2
elements after sorting:1 2 6 8 9
*/

