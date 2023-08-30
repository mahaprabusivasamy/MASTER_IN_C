Question:

find a ncr value

input:
n=5
r=2

output:

10

formula

ncr=n!/(r!*(n-r)!)

code:

#include<stdio.h>
#include<stdlib.h>
int fact(int val);
void main()
{
    int n,r,ncr;
    scanf("%d%d",&n,&r);
    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("%d",ncr);
}
int fact(int val){
    int fact=1;
    if(val==0)
    {
        return(fact);
    }
    else{
        for(int i=1;i<=val;i++)
        {
            fact=fact*i;
        }
    }
    return(fact);
}
