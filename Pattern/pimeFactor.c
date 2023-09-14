#include<stdio.h>
int main(){
	int n,divi=2,count =0;
	scanf("%d",&n);
	while(n!=1){
		if(n%divi ==0){
			count ++;
			n=n/divi;
		}else{
			if(count>0){
				printf("%d->%d\n",divi,count);
			}	
			divi++;
			count=0;		
		}
	}
	printf("%d->%d",divi,count);
}
