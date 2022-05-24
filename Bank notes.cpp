#include<stdio.h>
int main(){

  int a,rem,result;
  printf("Enter the amount:");
  scanf("%d",&a);
  
   result=a/1000;
  rem=a%1000;
   printf("1000 notes of taka:%d\n",result);
   result=rem/500;
  rem=rem%500;
   printf("500 notes of taka:%d\n",result);
   result=rem/200;
  rem=rem%200;
   printf("200 notes of taka:%d\n",result);
  result=rem/100;
  rem=rem%100;
   printf("100 notes of taka:%d\n",result);
  result=rem/50;
  rem= rem%50;
    printf("50 notes of taka:%d\n",result);
  result=rem/20;
  rem= rem%20;
    printf("20 notes of taka:%d\n",result);
  result=rem/10;
  rem= rem%10;
    printf("10 notes of taka:%d\n",result);
  result=rem/5;
  rem= rem%5;
  printf("5 notes of taka:%d\n",result);
  result=rem/2;
  rem= rem%2;
  printf("2 notes of taka:%d\n",result);
  result=rem/1;
  rem= rem%1;
    printf("1 notes of taka:%d\n",result);
  return 0;
}
