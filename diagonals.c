#include<stdio.h>
int main(){
	int n,m,i,j,p,sum=0;
	scanf("%d",&n);
	scanf("%d",&m);
	int a[n][m];
	for(i =0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i==j){
		        sum=sum+a[i][j]+a[i][m-i-1];
				if(j==(m-i-1)){
					sum=sum-a[i][j];
				}	
		}
	}
}
	printf("%d",sum);
	return 0;
}
