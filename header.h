#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct st
{
	int roll;
	char name[20];
	float  percentage;
	struct st *next;
}ST;

void stud_add(ST **,int);

void stud_del(ST **,int);
void stud_del_name(ST **,char *);

void print(ST *);

void stud_mod_roll(ST **,int,int);
void stud_mod_name(ST **,char *,char *);
void stud_mod_percentage(ST **,int,int);

void stud_save(ST *);

void stud_sort(ST **,char);
