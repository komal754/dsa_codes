#include<stdio.h>
#include<conio.h>

void main(){
    int var1=10;
  {
    int var1=20;
    printf("%d %d",var1,var1);
  }
  printf("%d %d",var1,var1);
}
