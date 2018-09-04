#include<stdio.h>
struct student{
	int r_no;
	char name[20];
	char course[20];
	float fees;	
};
int main(){
	struct student *ptr_stud,stud;
	ptr_stud=&stud;
	(*ptr_stud).r_no=30;//coloca no stud
	//ou ptr_stud->r_no=50;
	printf("%d\n",stud.r_no);
	return 0;
}

