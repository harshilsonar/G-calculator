#include<stdio.h>
#include<conio.h>

void main()
{
	int score;
	char grade;
	
	printf("enter your 0 to 100 score");
	scanf("%d",&score);
	
	if(score>90 && score<=100)
	{
		grade = 'A';
	}
	else if(score>80 && score<=90)
	{
		grade = 'B';
	}
	else if(score>70 && score<=80)
	{
		grade = 'C';
	}
	else if(score>60 && score<=70)
	{
		grade = 'D';
	}
	else if(score>50 && score<=60)
	{
		grade = 'E';
	}
	else if(score>0 && score<=50)
	{
		grade = 'F';
	}
	else
	{
		grade = 'I';
	}
	
     switch(grade)
     {
     	case 'A':
              	printf("THE GRADE IS %c.\n",grade);
             	printf("Excellent work!\n");
            	break;
            	
        case 'B':
		        printf("the grade is %c.\n",grade);
				printf("well done\n");
				break;
				
		case 'C':
		        printf("the grade is %c.\n",grade);
				printf("good job\n");
				break;
				
		case 'D':
		        printf("the grade is %c.\n",grade);
				printf("You passed, but you could do better\n");
				break;			
					    
		case 'E':
		        printf("the grade is %c.\n",grade);
				printf("you could do better\n");
				break;
		
		case 'F':
		        printf("the grade is %c.\n",grade);
				printf("sorry, you failed\n");
				break;	
				
		  default:
            printf("Invalid score. Please enter a score between 0 and 100.\n");
            break;								
	 }
	 
	 if(grade == 'A'||grade == 'B'||grade == 'C'||grade == 'D'||grade == 'E')
	 {
	 	printf("congratulations! you are eligble for next level \n");
	 }
	 else if(grade == 'F')
	 {
	 	printf("Please try again next time");
	 }
}
