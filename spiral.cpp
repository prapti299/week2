#include <stdio.h>
void spiralMatrix(int mat[4][4]) {
    int top=0,bottom=3;
    int left=0,right=3;
    while(top<=bottom && left<=right){
    	for(int i=left;i<=right;i++){
    		printf("%d\n",mat[top][i]);
	}
	top++;
	for(int i=top;i<=bottom;i++){
		printf("%d\n",mat[i][right]);
	}
	right--;
	if(top<=bottom){
		for(int i=right;i>=left;i--){
			printf("%d\n",mat[bottom][i]);
		}
		bottom--;
	}
	if(left<=right){
		for(int i=bottom;i>=top;i--){
			printf("%d\n",mat[i][left]);
		}
		left++;
	}
}
}

int main()
{
	int mat[4][4]={{1,2,3,4},
	          {5,6,7,8},
			  {9,10,11,12},
			  {13,14,15,16}};
    spiralMatrix(mat);			  
}