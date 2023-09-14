#include<stdio.h>
int main(){
	int n,l=0,i,s,j;
	scanf("%d",&n);
	for(i=-n;i<=n;i++){
		if(i<0){
			l=-i;
		}
		else{
			l=i;
		}
		for(s=0;s<l;s++){
			
			printf("  ");
		}
		for(j=0;j<2*(n-l)+1;j++){
			printf("* ");
			
		}
		printf("\n");
	}
	
}
