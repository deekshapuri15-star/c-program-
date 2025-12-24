#include<stdio.h>
  int main(){
	int a,choice;
  	printf("enter no with unit");
	scanf("%d ",&a);
	printf(" 1 m -cm \n");
	printf(" 2 l-ml\n");
	printf(" 3 kg -g\n");
	
	printf("enter choice 1-3");
	scanf("%d",&choice);
	switch(choice){
		case 1 :
		printf("result %d" , a*100 ) ;
			break;
		case 2:
			printf("result %d" ,a*1000);
			break;
		case 3:
			printf("result %d" ,a*1000);
			break;
		default:
		    printf("invalid no");
		    break;
		
	} 
	return 0;
}
