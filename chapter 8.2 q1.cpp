#include <stdio.h>

int main()
{
    int i,j,n,m;
     printf ("enter value of n :");
     scanf("%d",&n);
     
     printf("enter value of m :");
     scanf("%d",&m);
     
     int a1[n];
     int a2[m];

     for(i=0;i<n;i++)
     {  
        printf("a1[%d]=",i);
        scanf("%d",&a1[i]);   
     }

      for(j=0;j<m;j++)
      {

        printf("a2[%d]=",j);
        scanf("%d",&a2[j]);
      }

       for(i=0;i<n;i++)
       {

        printf("%d \t",a1[i]);
       }


        for(j=0;j<m;j++)
        {

        printf("%d \t",a2[j]);

}


}
