#include"header.h"
void stud_mod_roll(ST **ptr,int mod_roll,int roll)
{
	if(*ptr == NULL)
	{
		printf("No data found\n");
		return;
	}

	ST *temp=(*ptr);

	while(temp!=NULL)
	{
		if(temp->roll==mod_roll)
		{
			temp->roll=roll;
			printf("-----Roll number modified successfully-----\n");
			break;
		}
		temp=temp->next;
	}
}



	
