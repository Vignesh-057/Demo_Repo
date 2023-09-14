//#include<stdio.h>
//int main(){
//    int n,i,j,k,b=1;
//    scanf("%d",&n);
//    int m=0;
    //horizontal rectangle
    /*for(i=0;i<n;i++){
        for(j=0;j<n*2;j++)
        printf("* ");
    printf("\n");
  }*/
  
  //inverted right
  /*for(i=n;i>=0;i--){
  	for(j=i;j>=0;j--){
  		printf("* ");
	  }
	  printf("\n");
  }*/
   
  
  //left ^
  /*for(i=n;i>=1;i--){
  	for(j=1;j<i;j++)
  		printf("\t");
  		for(k=1;k<=b;k++)
  		printf("*\t");
	  printf("\n");
	  b++;
}*/
 /*for(i=0;i<n;i++){
  	for(j=i;j<n-1;j++)
  		printf(" ");
  		for(k=1;k<=b;k++)
  		printf("*");
	  printf("\n");
	  b++;
}*/
/*
 for(i=n;i>=1;i--){
  	for(j=1;j<=m;j++)
  		printf(" ");
  		for(k=i;k>=1;k--)
  		printf("*");
	  printf("\n");
	  m++;
}*/
//inverted triangle
 /*for(i=n;i>=1;i--){
  	for(j=1;j<=m;j++)
  		printf(" ");
  		for(k=0;k<2*i-1;k++)
  		printf("*");
	  printf("\n");
	  m++;
    }   */    
    //triangle
  /*  for(i=n;i>=1;i--){
  	for(j=1;j<=i-1;j++)
  		printf(" ");
  		for(k=1;k<=(2*m-1);k++)
	    printf("*");
	  printf("\n");
	  m++;
}*/

//}









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
	int i,n,j,k,m=1;
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
  		printf("*");
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
