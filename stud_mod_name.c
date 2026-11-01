#include"header.h"
void stud_mod_name(ST **ptr,char *old_name,char *new_name)
{
	if(*ptr==NULL)
	{
		printf("No data found \n");
		return;
	}

	ST *temp=(*ptr);
	int count=0,roll_mod;
		
	printf("****************************\n");
	printf("Roll\t Name\t Percentage\n");
	while(temp!=NULL)
	{

		if((strcmp(old_name , temp->name))==0)
		{
			printf("%d\t %s\t %f\n",temp->roll,temp->name,temp->percentage);
			count++;
		}
		temp=temp->next;
	}	
	printf("****************************\n");

	if(count==1)
	{
		temp=*ptr;
		while(temp!=NULL)
		{
			if((strcmp(old_name,temp->name))==0)
			{
				strcpy(temp->name,new_name);
				printf("Name Successfully Modified--%s----->%s\n",old_name,new_name);
			}
			temp=temp->next;
		}
	}

	else if(count>1)
	{
		printf("Different Members with Same Name. Enter the Roll to Delete\n");
		scanf("%d",&roll_mod);
		temp=*ptr;

		while(temp!=NULL)
		{
			if(temp->roll==roll_mod)
			{
				strcpy(temp->name,new_name);
				printf("Name Successfully Modified--%s----->%s\n",old_name,new_name);
			}
			temp=temp->next;
		}
	}
	else
	{
		printf("-----No student Found------\n");
		return;
	}
}











