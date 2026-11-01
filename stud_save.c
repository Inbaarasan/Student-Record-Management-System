#include"header.h"
void stud_save(ST *ptr)
{
	if(ptr==NULL)
	{
		fprintf(stderr,"No data to save...\n");
		return;
	}

	FILE *fs=fopen("student_dat.txt","w");
	while(ptr!=NULL)
	{
		fprintf(fs,"%d %s %f\n",ptr->roll,ptr->name,ptr->percentage);
		ptr=ptr->next;
	}
	printf("Data Saved Successfully......\n");
}
