#include"header.h"
void print(ST *ptr)
{
	if(ptr==NULL)
	{
		fprintf(stderr,"No Data Found\n");
		return;
	}

	printf("****************************************\n");
	printf("%-6s %-20s %12s\n", "Roll", "Name", "Percentage");
	printf("****************************************\n");
	while(ptr!=NULL)
	{
		printf("%-6d %-20s %12.2f\n", ptr->roll, ptr->name, ptr->percentage);
		ptr=ptr->next;
	}
	printf("****************************************\n");
	printf("\tData Printed\n");
}
