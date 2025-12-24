#include<stdio.h>
  int main(){
	int a,b,choice;
  	printf("enter no");
	scanf("%d %d",&a,&b);
	printf(" 1 addition\n");
	printf(" 2 subtraction\n");
	printf(" 3 multiplication\n");
	printf(" 4 division\n");
	printf("enter choice 1-4");
	scanf("%d",&choice);
	switch(choice){
		case 1 :
		printf("result %d" ,a+b) ;
			break;
		case 2:
			printf("result %d" ,a-b);
			break;
		case 3:
			printf("result %d" ,a*b);
			break;
		case 4 :
			printf("result %d" ,a/b);
			break;
		default:
		printf("invalid no");
		break;
		
	} 
	return 0;
}
