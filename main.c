#include<stdio.h>
#include"header.h"
int main()
{
	ST *hptr=NULL;
	int roll=0,del_roll,mod_roll;
	char ch,op,del,sort,modify,save_option;
	char del_name[20],old_name[20],new_name[20];
	float old_percentage,new_percentage;
	
	do
	{
	printf("\n**************************************\n");
	printf("\tSTUDENTS RECORD MENU\n\n \tA/a : Add New Record\n \tD/d : Delete a Record\n \tS/s : Show the List\n \tM/m : Modify a Record\n \tV/v : Save\n \tT/t : Sort the List\n \tE/e : Exit\n");
	printf("**************************************\n");
	scanf(" %c",&op);
	
	switch(op)
	{
	case 'A':
	case 'a':
	{
	  do
	  {
	     roll++;
	     stud_add(&hptr,roll);
	     printf("\nEnter add Student: Y/N:\n");
	     scanf(" %c",&ch);
	  }while((ch=='Y')||(ch=='y'));	
	  break;
	}

	case 'D':
	case 'd':
	{
		printf("R/r: Delete by Roll Number\nN/n: Delete by Name\n");
		scanf(" %c",&del);
		if((del =='R') || (del=='r'))
		{
			printf("enter the roll number\n");
			scanf("%d",&del_roll);
			stud_del(&hptr,del_roll);
			break;
		}
		else if((del =='N')||(del =='n'))
		{
			printf("Enter the name to delete\n");
			scanf("%s",del_name);
			stud_del_name(&hptr,del_name);
			break;
		}else
		{
			printf("Invalid choice. Choose Correct Option\n");
			break;
		}
	}

	case 'S':
	case 's':
	{
		print(hptr);
		break;
	}

	case 'M':
	case 'm':
	{
		printf("R/r :Modify by Roll\nN/n :Name\nP/p :Percentage\n");
		scanf(" %c",&modify);

		if((modify=='r') || (modify=='R'))
		{
			printf("Enter the roll number to modify\n");
			scanf("%d",&mod_roll);
		        roll++;
		        stud_mod_roll(&hptr,mod_roll,roll);
			break;
		}
		else if((modify == 'N') || (modify == 'n'))
		{
			printf("Enter the Name to modify\n");
			scanf("%s",old_name);

			printf("Enter the New Name to Modify\n");
			scanf("%s",new_name);
			
			stud_mod_name(&hptr,old_name,new_name);
			break;
		}
		else if((modify == 'P') || (modify == 'p'))
		{
			printf("Enter the Percentage to Modify\n");
			scanf("%f",&old_percentage);
			
			printf("Enter the New Percentage to Change\n");
			scanf("%f",&new_percentage);
			
			stud_mod_percentage(&hptr,old_percentage,new_percentage);
			break;
		}
		else
		{
			printf("Invalid Operation\n");
			break;
		}
	}
	case 'V':
	case 'v':
	{
		stud_save(hptr);
		break;
	}

	case 'T':
	case 't':
	{
		printf("N/n :Sort by Name\nP/p :Sort by Percentage\n");
		scanf(" %c",&sort);
		if(((sort=='N') || (sort=='n')) || ((sort=='P') || (sort=='p')))
		{
			stud_sort(&hptr,sort);
			print(hptr);
			break;
		}
		else
		{
			printf("Invalid choice. Choose Correct Option\n");
			break;	
		}
	}

	case 'E':
	case 'e':
	{
		printf("S/s :Save and Exit\nN/n :Exit Without Saving\n");
		scanf(" %c",&save_option);
		if((save_option=='s') || (save_option =='S'))
		{
			stud_save(hptr);
			break;
		}
		else if((save_option =='N') || (save_option =='n'))
		{
			printf("exit\n");
			break;
		}
	}

	default:
	      printf("invalid choice\n");
	      break;
	}
	}while(op!='E' && op!='e');
}
