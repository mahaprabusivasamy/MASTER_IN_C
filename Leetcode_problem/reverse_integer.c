
input:
123
output:
321


input:
-123
output:
-321

input:
  120
output:
  21


int reverse(int x){
    int a,sum=0;
   if(x>0)
   {
   while(x>0)
   {
       a=x%10;
       sum=sum*10+a;
       x=x/10;
   }
   return sum;
   }
   else{
    x=x*-1;
    while(x>0)
   {
       a=x%10;
       sum=sum*10+a;
       x=x/10;
   }
   return (sum*-1);
  
   }
}
