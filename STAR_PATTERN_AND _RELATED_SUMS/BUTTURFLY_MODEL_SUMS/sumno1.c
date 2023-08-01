First we have to find the any one side of the part then we can easily apply to merge all

we have to find the normal way with high code complexity and time complexity taken for this sum...

input: 5

output 

5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5

based on the input to we can get the output....


formaula :: identify the no of column and row is based on input by 

row=(n*2)-1
col=(n*2)-1

another way using butterfly model...

TYPE 1:
(butter fly model)
first we have to find like one wing of butterfly then we combine all wings easily...
as like we write code for one wing of butterfly

code:

#include<stdio.h>

int main()
{
    int Number,row,col;
    scanf("%d",&Number);
   for(row=1;row<=Number;row++,printf("\n"))
    {
        for(col=1;col<=Number;col++)
        { 
            if(row==Number-(Number-row)+1 && col==row || col>row)
            {
                printf("%d",(Number-row)+1);
            }
            else{
                printf("%d",(Number-col)+1);
            }
        } }
}

output::

5 5 5 5 5 
5 4 4 4 4 
5 4 3 3 3 
5 4 3 2 2 
5 4 3 2 1 

finding alll wings to complete the code is

code:--

#include<stdio.h>

int main()
{
    int Number,row,col;
    scanf("%d",&Number);
   for(row=1;row<=Number;row++,printf("\n"))
    {
        for(col=1;col<=Number;col++)
        { 
            if(row==Number-(Number-row)+1 && col==row || col>row)
            {
                printf("%d",(Number-row)+1);
            }
            else{
                printf("%d",(Number-col)+1);
            }
        }

////// as same as above column we have use reverse operation to add upper right side values or(wings)
        for(col=Number-1;col>0;col--)
        {
            if(row==Number-(Number-row)+1 && col==row || col>row)
            {
                printf("%d",(Number-row)+1);
            }
            else{
                printf("%d",(Number-col)+1);
            }
        }
    }

/////as same as above code to reverse the row to copy above half ..
    for(row=Number;row>0;row--,printf("\n"))
    {
        for(col=1;col<=Number;col++)
        { 
            if(row==Number-(Number-row)+1 && col==row || col>row)
            {
                printf("%d",(Number-row)+1);
            }
            else{
                printf("%d",(Number-col)+1);
            }
        }
        for(col=Number-1;col>0;col--)
        {
            if(row==Number-(Number-row)+1 && col==row || col>row)
            {
                printf("%d",(Number-row)+1);
            }
            else{
                printf("%d",(Number-col)+1);
            }
        }
    }
}



Result :: in this code we have to get output but it has some problems of space complexity and time complexity .it takes more execution time ,overcome this problem by short line of code

ALTER METHOD & CODE:


code:

#include<stdio.h>
#include<stdlib.h>
#define MAX(a,b) (a)>(b)?(a):(b);
int main()
{
    int Number,row,col,result;
    scanf("%d",&Number);
    for(row=1;row<=(Number*2)-1;row++,printf("\n"))
    {
        for(col=1;col<=(Number*2)-1;col++)
        {
            result=MAX(abs(Number-row),abs(Number-col));
            printf("%d",result+1);
        }
    }
}

This code also give a valid output and also have optimized than above code 

advantages compare of above is:
*) space complexity lesser
*) time duration also take lesser

