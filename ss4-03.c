#include<stdio.h>
int main(){
	int n;
	printf("moi nhap vao so nguyen ");
	scanf("%d",&n);
	if (n%3==0){
		printf("%d la so chia het cho 3",n) ;
	} else {
		if(n%5==0){
			printf("%d la so chia het cho 5",n); 
		} else{
			if (n%5==0 && n%3==0){
				printf ("chia het cho ca 3 va 5"); 
			} 
		} 
	} 
	return 0; 
} 
