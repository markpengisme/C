#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   char ch1='A';
   printf("   ====1234567890\n");
   printf(" 1.ch1=%c \n",ch1);   
   printf(" 2.ch1=%5c \n",ch1);//寬度5字元 
   printf(" 3.ch1=%-c \n",ch1);//靠左對齊 
   printf(" 4.ch1=%-5c \n",ch1);
   printf(" 5.ch1=%+5c \n",ch1);//5字元靠右對齊其餘補空白 
   printf(" 6.ch1=%+5d \n",ch1);//以10進位顯示ascii 
   printf(" 7.ch1=%-5d \n",ch1);
   printf(" 8.ch1=%5d \n",ch1);
   printf(" 9.ch1=%-5x \n",ch1);//以16進位顯示ascii 
   printf("10.ch1=%5o \n\n",ch1);//以8進位顯示ascii 
   system("PAUSE");	
   return 0;
}
