#include<stdio.h>
typedef struct student{
  int roll;
  float marks;
  }stu;
  int main()
  {
   stu s[50],*p;
   int i,n;
   p=s;
   printf("input no of data enter: ");
  scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   printf("Enter the data of roll no and marks  of :%d\n",i+1);
     scanf("%d%f",&(p+i)->roll,&(p+i)->marks);
   }
   for(i=0;i<n;i++)
   {
     if(((p+i)->marks )> 70)
     {
      printf("roll no. is%d\n",(p+i)->roll);
     }
     }
      return 0;
     }
     
     /*
     input no of data enter: 3
Enter the data of roll no and marks  of :1
1
20
Enter the data of roll no and marks  of :2
2
100
Enter the data of roll no and marks  of :3
3
520
roll no. is2
roll no. is3
*/
