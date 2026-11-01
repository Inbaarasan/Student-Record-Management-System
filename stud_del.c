#include"header.h"
void stud_del(ST **ptr,int roll)
{
    if(*ptr==NULL)
    {
	    printf("No data ..\n");
	    return;
    }
    ST *temp=(*ptr),*prv;
    while(temp!=NULL)
    {
	    if(roll==temp->roll)
	    {
		    if(temp==(*ptr))
		    {
			    *ptr=(*ptr)->next;
		    }
		    else
		    {
			    prv->next=temp->next;
		    }
		    free(temp);
		    printf("-----Deleted successfully-----\n");
		    return ;
	    }
	    else
	    {
		    prv=temp;
		    temp=temp->next;
	    }
    }
}
