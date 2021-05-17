#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
   char a[20];
   int prc,gst=0,total=0;
   printf("...........Desi Food Plaza.......\n");
   printf("**********************************\n");
   printf("Enter the item name: \n");
   scanf("%s",&a);
   printf("Enter the price:\n");
   scanf("%d",&prc);
   gst=((prc*18)/100);
   total=(prc+gst);
   printf("\n price  gst   total\n");
   printf("\n %d      %d    %d \n",prc,gst,total);
   printf("\n***********Thank You**************");
    //return 0;
   getch();
}

