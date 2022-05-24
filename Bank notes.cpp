#include<stdio.h>
/*I will enter a value and it will show me how many
notes of taka I will rquire */
int main(){

  int a,rem,result;
  printf("Enter the amount:");
  scanf("%d",&a); //Entering the total amount which will be divided into different notes
  
   result=a/1000; //dividing the value by 1000, tells how many notes of 1000 is required
  
   rem=a%1000; /*the remainder is needed to know how many taka will I have.
   Which helps to decide further required notes of other taka*/
  
   printf("1000 notes of taka:%d\n",result);
   result=rem/500; //dividing the rmaining taka by 500 tells how many 500 notes I need 
     
   rem=rem%500; /*and then remainder needed again to determine further result
    and so forth and so on like this till 1 taka's note */
    
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
