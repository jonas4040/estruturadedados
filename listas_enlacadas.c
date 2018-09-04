#include<stdio.h>
struct node{
	int data;
	struct node *next;//recursivo
};
int main(){
	struct node *ptr,*start;//vai se movimentando na lista e ponteiro inicial
	ptr=start;
	while(ptr!=NULL){//se não acabou a lista
		printf("\t %d",ptr->data);
		ptr=ptr->next;
	}
	return 0;
}

