#include<stdio.h>
#include<conio.h>

void main()
{
	int score;
	char grade;
	
	printf("enter the you 100 score");
	scanf("%d",&score);
	
	
	if(score>=90 && score<100)
	{
		grade = 'A';
	}
	else if(score>=80 && score<90)
	{
		grade = 'B';
	}
		else if(score>=70 && score<80)
	{
		grade = 'C';
	}
		else if(score>=60 && score<70)
	{
		grade = 'D';
	}
		else if(score>=50 && score<60)
	{
		grade = 'E';
	}
		else if(score>=0 && score<50)
	{
		grade = 'F';
	}
	else {
        grade = 'I'; 
    }
	
	if(grade=='I')
	{
		printf("Invalid score.Please enter a score between 0 and 100.\n");
	}
	else
	{
		 printf("The grade is: %c\n", grade);
	}
}
