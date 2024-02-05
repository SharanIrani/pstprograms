#include <stdio.h>

void main() {
int x,sum=0;
printf("\nEnter the numbers both positive as well as negative \n");
printf("Ayo... Enter 999 as well\n");
while(1)
{
scanf("%d",&x);
if(x==999)
break;
if(x>0)
sum=sum+x;
}
printf("Sum of ONLY the +ve number is : %d",sum);
}