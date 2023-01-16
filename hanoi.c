#include<stdio.h>/*从a搬到b*/
void hanoi(int n,char a,char b,char c);
int main()
{
    int n;
    scanf("%d",&n);

    hanoi(n,'a','b','c');
    return 0;
}
void hanoi(int n,char a,char b,char c)
{
    if(n==1){
        printf("%c-->%c\n",a,b);
    }else{
        hanoi(n-1,a,c,b);/*先把n-1个全部搬到c这个过渡座上*/
        printf("%c-->%c\n",a,b);/*把最大的搬到b上*/
        hanoi(n-1,c,b,a);/*把c上n-1个搬到b上*/
    }
}