#include"header.h"
void stud_add(ST **ptr,int roll)
{
    ST *new=(ST *)malloc(sizeof(ST));
    if(new==NULL)
    {
	    printf("memory allocation failed\n");
	    return ;
    }
    new->roll=roll;
    printf("Roll = %d\n",roll);
    printf("---------------------------------\n");
    printf("Enter the Name and  Percentage\n");
    printf("---------------------------------\n");
    scanf(" %s %f",new->name,&new->percentage);
    new->next=NULL;

    if(*ptr==NULL)
	    *ptr=new;

    else
    {
	    ST *temp=(*ptr);
	    while(temp->next!=NULL)
	    {
		    temp=temp->next;
	    }
	    temp->next=new;
    }
    printf("-----Student Data Added Successfully-----\n");
}




        
