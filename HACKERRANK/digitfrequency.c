Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.

Input Format

The first line contains a string,  which is the given number.

Constraints


All the elements of num are made of english alphabets and digits.

Output Format

Print ten space-separated integers in a single line denoting the frequency of each digit from  to .

Sample Input 0

a11472o5t6
Sample Output 0

0 2 1 0 1 1 1 1 0 0 
Explanation 0

In the given string:

 occurs two times.
 and  occur one time each.
The remaining digits  and  don't occur at all.
Sample Input 1

lw4n88j12n1
Sample Output 1

0 2 1 0 1 0 0 0 2 0 
Sample Input 2

1v88886l256338ar0ekk
Sample Output 2

1 1 1 2 0 1 2 0 5 0 




  code:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

char Input[100];
int Num[]={'0','1','2','3','4','5','6','7','8','9'};
scanf("%[^\n]",Input);
for(int i=0;i<10;i++)
{
    int c=0;
    for(int j=0;j<strlen(Input);j++)
    {
        if(Num[i]==Input[j])
        {
          
            c+=1;
        }
    }
    printf("%d ",c);
}
}
