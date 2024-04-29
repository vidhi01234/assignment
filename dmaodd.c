#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p,n,i,c=0;
    printf("enter range: ");
    scanf("%d",&n);
    p= (int*) malloc(n*sizeof(int));
    printf("enter elements\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(i=0;i<n;i++)
    {
        if(*(p+i)>0 && *(p+i)%2!=0)
        {
            c++;
        }
    }
    printf("Total odd no.%d:",c);

    return 0;
}

/*
enter range: 5
enter elements
 2
4
8
14
10
Total odd no.0:
*/
