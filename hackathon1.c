#include<stdio.h>
int main(){
int Number[100];
int n;
int currentNumber=0;
int sum = 0;
int k;
do{
	printf("\n*********menu************\n");
	printf("1. Nhap gia tri n phan tu cua mang\n");
	printf("2. in gia tri cac phan tu trong mang\n");
	printf("3. tinh trung binh cac phan tu duong( > 0) trong mang\n");
	printf("4. in ra vi tri(chi so) cac phan tu co gia tri bang k trong mang\n");
	printf("5. su dung thuat toan sap xep noi bat sap xep mang giam dan\n");
	printf("moi lua chon!!!\n");
	int choice;
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("moi nhap so phan tu\n");
			scanf("%d",&n);
			for(int i=0;i<n;i++){
				printf("number[%d]:",currentNumber);
				scanf("%d",&Number[currentNumber]);
				currentNumber++;
			}
			break;
		case 2:
			printf("cac phan tu co trong mang la ");
			for(int i=0;i<currentNumber;i++){
				printf("%d\t",Number[i]);
			}
			break;
		case 3:
			sum =0;
			for(int i=0;i<currentNumber;i++){
				if(Number[i]> 0){
				
				sum+=Number[i];	
		}
	}
			printf("trung binh cac phan tu la %d",sum);
			
			break;
		case 4:
			
			printf("moi nhap so k :\n");
			scanf("%d",&k);
			printf("vi tri cac chi so bang k la  \n");
			for(int i=0;i<currentNumber;i++){
				if(Number[i]==k){
					printf("%d \t",i);
				}
			}
			
			
			break;
		case 5:
			printf("gia tri cac phan tu cua mang sap xep giam dan la :\n");
			for(int i=0;i<currentNumber-1;i++){
				for(int j=0;j<currentNumber-i-1;j++){
					if(Number[j]>Number[j+1]){
						int temp=Number[j];	
							Number[j]=Number[j+1];
							Number[j+1]=temp;							
					}
				}
			}
			for(int i=0;i<currentNumber;i++){
				printf("%d \t",Number[i]);
			}
			break;
			break;
		default:
			break;
			
	}
}while(1==1);
}
