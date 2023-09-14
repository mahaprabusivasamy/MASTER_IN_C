#include<stdio.h>
int main()
{
    int N,row,col;
    scanf("%d",&N);
  for(row=N;row>0;row--,printf("\n"))
  {
        for(col=1;col<row;col++)
      {
          printf("*");
      }
        for(col=1;col<=N-row;col++)
      {
          printf(" ");
      }
      for(col=1;col<=N-row;col++)
      {
          printf(" ");
      }
      for(col=1;col<row;col++)
      {
          printf("*");
      }
  }
   for(row=1;row<=N;row++,printf("\n"))
   {
        for(col=1;col<row;col++)
       {
           printf("*");
       }
        for(col=1;col<=N-row;col++)
       {
           printf(" ");
       }
       for(col=1;col<=N-row;col++)
       {
           printf(" ");
       }
       for(col=1;col<row;col++)
       {
           printf("*");
       }
   }
   
}

