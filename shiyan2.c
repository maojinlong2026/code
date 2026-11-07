// // // #include<stdio.h>
// // // int gcd(int m, int n){
// // // while(n!=0){
// // //     int t=m % n;
// // //     m=n;
// // //     n=t;
// // // }return m;
// // // }
// // // int lcm(int m ,int n){
// // //     return m/gcd(m,n)*n;
// // // }
// // // int main(){
// // //     printf("请输入两个正整数m和n\n");
// // // int m=0; int n=0;
// // //     scanf("%d %d",&m, &n);
// // //     printf("最大公约数是:%d\n",gcd(m,n));
// // //     printf("最小公倍数是:%d\n",lcm(m,n));
// // // return 0;}
// // #include<stdio.h>
// // int main(){
// // printf("请输入一串字符串(以回车键结束)");
// // int uppeer =0, lower = 0,other = 0;
// // char ch;
// // while((ch=getchar()) !='\n')
// // {
// //     if (ch>='a'&& ch<='z')
// //     lower++;
// //    else if(ch >='A'&& ch <='Z')
// //     uppeer++;
// //     else other++;

// // }
// // printf("大写字母的个数为:%d个",uppeer);
// // printf("小写字母的个数为%d个",lower);
// // printf("其他的个数为%d个",other);
// // return 0;}
// #include<stdio.h>
// int main(){
// int i,j;
// for ( i=1;i<=9;i++){
//     for( j=1;j<=i;j++)
// {
//     printf("%d*%d=%-2d",j,i,i*j);
// }printf("\n");
// }
// return 0;}
// #include<stdio.h> 
// int main(){
// int i,j,t,s;
// int count=0;
// for(i=100;i<=999;i++){
// j=i/100;//百位
// t=(i/10)%10;
// s=i%10;
// if(t+j+s==5)
// {count++;
//    printf("%d ",i);
//     if (count==10)
//     {printf("\n");}
// }
// }
// return 0;}
// #include<stdio.h> 
// int main(){
// int i,j;
//     for(i=0;i<=9;i++){
//      for(j=0;j<i;j++){
//         printf("%c",'A'+j);}
//      printf("\n");
//     }

//     return 0;}