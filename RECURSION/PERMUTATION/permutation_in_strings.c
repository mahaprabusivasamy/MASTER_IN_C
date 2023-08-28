The question:
find the permutation of a given string 

input:

abc

output:

abc
acb
bac
bca
cba
cab

the formula is :

the input of a string length is 3

then we have to take factorial:(n!)

3!=3*2*1=6

the output return 6 of:
abc,acb,bac,bca,cba,cab

The program based only on the recursive and backtrack...

program:
#include<stdio.h>
#include<string.h>
void swap(char *a,char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}
void permuration(char *str,int start,int end)
{
    if(start==end)
    {
        printf("%s\n",str);
    }
    else{
        for(int i=start;i<=end;i++)
        {
            swap((str+start),(str+i));
            permuration(str,start+1,end);
            swap((str+start),(str+i));
        }
    }
}
int main()
{
    char str[]="abc";
    int len=strlen(str);
    permuration(str,0,len-1);
    return 0;
}
