#include"header.h"
void stud_mod_percentage(ST **ptr,int old_percentage,int new_percentage)
{
	if(*ptr==NULL)
	{
		printf("No data Found\n");
		return;
	}

	ST *temp=*ptr;
	int count=0,roll_mod;

	while(temp!=NULL)
	{
		if(old_percentage==temp->percentage)
		{
			printf("%d %s %f\n",temp->roll,temp->name,temp->percentage);
			count++;
		}
		temp=temp->next;
	}

	if(count==1)
	{
		temp=*ptr;
		while(temp!=NULL)
		{
			if(old_percentage==temp->percentage)
			{
				temp->percentage=new_percentage;
			}
			temp=temp->next;
		}
		printf("Data Modified Successfully\n");
	}

	else if (count > 1)
	{
		printf("Enter the Roll Number To Modify\n");
		scanf("%d",&roll_mod);

		temp=*ptr;
		while(temp!=NULL)
		{
			if(roll_mod==temp->roll)
			{
				temp->percentage=new_percentage;
			}
			temp=temp->next;
		}
		printf("Data Modified Successfully\n");
	}
	else
	{
		printf("Data does not Found\n");
		return;
	}

}












