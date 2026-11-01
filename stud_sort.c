#include"header.h"
void stud_sort(ST **ptr,char sort)
{
 	
	ST *temp, *prv ,*nextnode;
	int swapped;

	if(*ptr==NULL)
	{
		printf("No data to Sort..\n");
		return;
	}
	
	if((sort=='N') || (sort=='n'))
	{
		do
		{
			temp=*ptr;
			prv=NULL;
			swapped = 0;

			while(temp!=NULL && temp->next!=NULL)
			{
				if((strcmp(temp->name,temp->next->name))>0)
				{
					nextnode=temp->next;
					temp->next=nextnode->next;
					nextnode->next=temp;

					if(prv==NULL)
						*ptr=nextnode;

					else
						prv->next=nextnode;

					prv=nextnode;
					swapped=1;
				}
				else
				{
					prv=temp;
					temp=temp->next;
				}

			}
		}while(swapped);	
	}

				
	else if((sort=='P') || (sort=='p'))
	{
		do
		{
				temp=*ptr;
				prv=NULL;
				swapped = 0;

				while(temp!=NULL && temp->next!=NULL)
				{
					if(temp->percentage < temp->next->percentage)
					{
						nextnode=temp->next;
						temp->next=nextnode->next;
						nextnode->next=temp;

						if(prv==NULL)
							*ptr=nextnode;
					
						else
							prv->next=nextnode;

						prv=nextnode;
						swapped=1;
					}
					else
					{
						prv=temp;
						temp=temp->next;
					}	
		
				}
		}while(swapped);
	}
}	
		

					

								






	
	
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	






