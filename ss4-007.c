#include<stdio.h>
int main(){
	int year;
	printf("moi ban nhap vao nam: ");
	scanf("%d",&year);
	if (year>0 &&year % 4 ==0 && year%100!=0 ||year %400 == 0){
		printf("nam nhuan "); 
	} else {
		printf("nam khong nhuan "); 
	} 
	return 0; 
} 
