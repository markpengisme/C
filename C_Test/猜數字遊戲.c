#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[])
{
  		int keyin, guess, count, min, max;
		char *c; 
		count=0;
		min=0;
		max=100;
		srand((unsigned)time(NULL));  
        guess=rand()%99+1; 		
		printf("======= 猜數字遊戲 =======：\n\n");
		do
		{	
			printf("猜數子範圍 %d < ? < %d ：", min, max);
			scanf("%d", &keyin);
			count++;
			if(keyin>=1 && keyin<100)
			{
				if(keyin>=min && keyin<max)
					{
						if(keyin==guess)
						{
							printf("賓果! 猜對了, 答案是 %d\n", guess);
							break;
						}
						else if(keyin>guess)
						{
							max=keyin;	/*將目前輸入的數字keyin指定給max*/
							printf("再小一點!!");
						}
						else if(keyin<guess)
						{
							min=keyin;	/*將目前輸入的數字keyin指定給min*/
							printf("再大一點!!");
						}
						printf(" 您猜了 %d 次\n\n", count);
					}
				else
					printf("請輸入提示範圍內的數字!\n");
			}
			else
				printf("請輸入提示範圍內的數字!\n");
		}
		while(1);	/*無窮迴圈*/
		if (count>=7)
			c="好爛";
		else if (3<count&&count<7)
			c="還不錯";
		else
			c="真厲害";
		printf("\n總共猜了 %d 次!(%s)\n\n", count,c);
		
  system("PAUSE");	
  return 0;
}
