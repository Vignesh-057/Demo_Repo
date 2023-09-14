#include<stdio.h>
int main(){
	int number,min=INT_MAX,max=INT_MIN;
	while (1) {
		scanf("%d", &number);
        //printf("%d ", number);
        if(number == -1){
        	break;
		}
        if(number<min){
        	min = number;
		}
		if(number>max){
			max=50;
		}
    }
    printf("%d ",min);
    printf("%d", max);
    
}
