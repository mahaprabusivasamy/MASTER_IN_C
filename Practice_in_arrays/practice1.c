Problem statement

Count the number of pairs in an integer array whose sum equals the given sum. (All array elements should be unique)

Input format :
The first line of input should be an integer that represents the sum of array elements.

The second line of input should be an integer that represents the number of elements.

The third line of input should be the integers that represent the array elements separated by space.

(Refer Sample Input)

Output format :
The output prints an integer that represents the possible number of pairs whose sum equals the given sum.

(Refer Sample Output)

Code constraints :
Array size <=50

Sample test cases :
Input 1 :
10
9
5 6 7 8 10 0 2 4 3
Output 1 :
4

// code for solution is:
#include<stdio.h>
int main()
{
    int a;int sum;
    scanf("%d",&sum);
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int aa=0;

   for(int i=0;i<a;i++)
   {
    for(int j=i+1;j<a;j++)
    {
       if(arr[i]+arr[j]==sum)
       {
        aa=aa+1;
       }
    }
   }
   printf("%d",aa);
   
}
  
