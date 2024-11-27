#include<stdio.h>
 int main() {
   int number[5]={1,2,3,3,4};
   for(int i =0;i < sizeof(number)/sizeof(int);i++) {
   	 printf(" \n number[%d] = %d",i,number[i]);
   }
}
