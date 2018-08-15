#include<stdio.h>
int main(){
	int qtd,i=0,pos=0;
	printf("Quantos elementos terao no vetor? ");
	scanf("%d",&qtd);
	int arr[qtd];
	for(i=0;i<qtd;i++){
		printf("Digite o %d elemento ",i+1);
		scanf("%d",&arr[i]);
	}
	int menor;
	menor=arr[0];
	for(i=0;i<qtd;i++){ 
		if(arr[i]<menor){
			pos=i;
			menor=arr[i];
		}
	}
	printf("O menor e %d que esta na posicao %d",menor,pos);//pos i 
	return 0;
}
