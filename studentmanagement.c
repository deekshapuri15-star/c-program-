#include<stdio.h>
struct student {
	int roll ;
	char name[50] ;
	float marks;
};
    void addstudent(struct student s[],int *count){
    	printf("enter name");
    	scanf("%s",s[*count].name);
    		printf("enter roll no");
    	scanf("%d",&s[*count].roll);
    		printf("enter marks");
    	scanf("%f",&s[*count].marks);
    	    (*count)++;
	        printf("student added successfully\n");
		}
	void displaystudent(struct student s[],int count){
		 int i;
    if(count == 0) {
        printf("No records found.\n");
        
    }

    for(i = 0; i < count; i++) {
        printf("\nRoll: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f", s[i].marks);

        if(s[i].marks >= 33)
            printf("\nResult: Pass\n");
        else
            printf("\nResult: Fail\n");
    } 
}
void searchstudent(struct student s[],int count){
		int i,found=0,roll;
		printf("enter roll no to be searched");
		scanf("%d",&roll);
		for(i=0;i<count;i++)
		if(s[i].roll==roll) {
			printf("student details matches");
				printf("roll no: %d\n ",s[i].roll);
	        printf("name \n : %s\n ",s[i].name);
	            printf("marks\n : %f\n ",s[i].marks);
	            found=1;
	            break;
		}
		if(found==0) 
		printf("no record found");
	    return;	}
    int  main(){  
    struct student s[50];
    int choice,count=0;
    
    
    
    printf("enter choice 1-4");
    scanf("%d",&choice);
    	
    switch(choice){
    	case 1 :
    	addstudent(s,&count);
    	    break;
    	case 2 :
    	displaystudent(s,count);
    		break;
    	case 3 :
    	searchstudent(s,count);
    		break;
    	case 4:
    	printf("exiting");
    		break;
    	default :
    		printf("invalid choice");    		
    	}
    	return 0;
	}
    
	








	

