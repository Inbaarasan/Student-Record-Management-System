#include"header.h"
void stud_del_name(ST **ptr,char *name)
{
	ST *temp=*ptr;
	int count=0,roll;
        
	printf("Roll\tName\tPercentage\n");
	printf("****************************\n");
	while(temp!=NULL)
	{
		if(strcmp(temp->name,name)==0)
		{
			printf("%d\t%s\t%f\n",temp->roll,temp->name,temp->percentage);
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
		    if(strcmp(temp->name,name)==0)
		    {
			 roll=temp->roll;
			 break;
		    }
		    temp=temp->next;
		}
		stud_del(ptr,roll);
	}
	else if(count>1)
	{
		printf("Student with same name .Enter the roll to delete:\n");
		scanf("%d",&roll);

		stud_del(ptr,roll);
	}

}


