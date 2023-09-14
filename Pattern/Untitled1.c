/*#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j==1 || j==n)
			printf("X");
			else
			printf(" ");
		}
		printf("\n");
	}
}*/

/*
#include<stdio.h>
int main(){
	int i,j,n,k,m=1;
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=1;j<m;j++)
		{
		
			printf(" ");
		}
			for(k=1;k<=2*i-1;k++){
				if(k==1||k==2*i-1)
			printf("#");
			else 
			printf(" ");
		}
		m++;
		printf("\n");
	}
}
*/

#include<stdio.h>
int main(){
	int i,n,j,k,y,m=1;
	scanf("%d",&n);
		m=1;
	for(i=n;i>=1;i--){
  	for(j=1;j<=i-1+n;j++)
  		printf(" ");
  		for(k=1;k<=(2*m-1);k++)
	    printf("*");
	  printf("\n");
	  m++;
    }
    
    
    m=1;
	for(i=n;i>=2;i--){
  	for(j=1;j<i;j++)
  		printf(" ");
  		for(k=1;k<=m;k++)
  		printf("* ");
  		for(y=1;y<=m;y++)
  		printf("* ");
	  printf("\n");
	  m++;
    }
    m=0;
    for(i=n;i>=1;i--){
    	for(j=1;j<=m;j++){
    		printf(" ");
		}
		for(k=i;k>0;k--)
		printf("*");
		printf("\n");
		m++;
	}
	
	m=1;
	for(i=n;i>=2;i--){
  	for(j=1;j<i;j++)
  		printf("");
  		for(k=1;k<=m;k++)
  		printf("*");
	  printf("\n");
	  m++;
    }
    m=0;
    for(i=n;i>=1;i--){
    	for(j=1;j<=m;j++){
    		printf("");
		}
		for(k=i;k>0;k--)
		printf("*");
		printf("\n");
		m++;
	}
	
	
	m=1;
	for(i=n;i>=1;i--){
  	for(j=1;j<m+n;j++)
  		printf(" ");
  		for(k=1;k<=2*i-1;k++)
  		printf("*");
	  printf("\n");
	  m++;
    }  
}
