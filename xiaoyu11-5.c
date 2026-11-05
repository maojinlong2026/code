#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
int r=rand() %100 +1;
int guess =0;
while(1)
{printf("请猜一猜数字:\n");
scanf("%d",&guess);
if(guess<r)
printf("猜小了");
else if(guess>r)
printf("猜大了");
else 
{printf("恭喜你,猜对了");
break;}}
}
void menu()
{
printf("1.play\n");
printf("0.exit");
}
int main(){
    int input=0;
    srand((unsigned int)time(NULL));
do{
menu();
printf("请选择:\n");
scanf("%d",&input);
switch(input){
case 1:
    game();
    break;
case 0:
     printf("游戏结束");
     break;
default:
    printf("选择错误,请重新选择");
    break;

}
}
while(input);
return 0;
}
