#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[10][10]={},i,j,c;
    c=1;
    i=j=0;

    while(c!=n*n+1){
        while(j<n && a[i][j]==0){
            a[i][j++]=c++;
        }
        j--;i++;
        while(i<n && a[i][j]==0){
            a[i++][j]=c++;
        }
        i--;j--;
        while(j>=0 && a[i][j]==0){
        	a[i][j--]=c++;
		}
        j++;i--;
        while(i>=0 && a[i][j]==0){
        	a[i--][j]=c++;
		}
		i++;j++;
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%3d",a[i][j]);
        printf("\n");
    }
    return 0;
}