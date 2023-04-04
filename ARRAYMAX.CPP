#include<stdio.h>
#include<conio.h>
void main(){
int i,max=0;
int arr[10]={12,34,77,32,54,11,87,45,22,98};
int min=arr[0];
clrscr();
for(i=0;i<10;i++)
{
   if(arr[i]<min){
   min=arr[i];
   }
   if(arr[i]>max)
   {
   max=arr[i];
   }
	    }

  printf("the max is %d \n",max);
  printf("the min is %d",min);
  getch();
}