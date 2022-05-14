
# include <stdio.h>
# include <stdbool.h>
# include <math.h>
bool kaprekar(int n)
{
 int rdigits;
 if (n == 1)
 return true;
 int sqrn = n * n;
 int digits = 0;
 while (sqrn!=0)
 {
 digits++;
 sqrn /= 10;
 }
 sqrn = n*n;
 for (int rdigits=1; rdigits<digits; rdigits++)
 {
 int eq_parts = pow(10, rdigits);
 if (eq_parts == n)
 continue;
 int sum = sqrn/eq_parts + sqrn % eq_parts;
 if (sum == n)
 return true;
 }
 return false;
}
int main()
{
 int range,i;
 printf("Upto which number do you require kaprekar numbers to be printed? :\n");
 scanf("%d",&range);
 printf("Kaprekar numbers:\n");
 for(i=0;i<=range;i++){
 if(kaprekar(i)==true){
 printf("%d\n",i);
 }
 else{
 continue;
 }
 }
 return 0;
}