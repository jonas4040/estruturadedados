#include<stdio.h>
int main(){
	int qtd,i=0,v,pos;
	printf("Quantos elementos terao no vetor? ");
	scanf("%d",&qtd);
	int arr[qtd+1];
		for(i=0;i<qtd;i++){
		printf("Digite o %d elemento ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Qual valor voce quer inserir? ");
	scanf("%d",&v);
	printf("Em qual posicao voce quer inserir? (de 0 a %d) ",qtd-1);
	scanf("%d",&pos);
	
	for(i=qtd+1;i>0;i--){
		arr[i]=arr[i-1];
		printf("%d ",arr[i]);
	}
	return 0;
}
