#include<stdio.h>
int main(){
	int a , b , c ;
	printf("moi ban nhap vao so nguyen t1: ");
	scanf ("%d",&a) ;
		printf("moi ban nhap vao so nguyen t2: ");
	scanf ("%d",&b) ;
		printf("moi ban nhap vao so nguyen t3: ");
	scanf ("%d",&c) ;

	if (a>b && a>c && b>c ){
		printf ("%d %d %d ", a,b,c); 
	}else if (b>a && b>c && a>c){
		printf("%d %d %d ", b ,a ,c);
		 
	}else if (b>a && b>c && c>a){
		printf("%d %d %d ", b ,c ,a);
	}
	else if (a>b && a>c && c>b){
		printf("%d %d %d ", a ,c ,b);
	}else if (c>a && c>b && a>b){
		printf("%d %d %d ", c ,a ,b);
			}else if (c>a && c>b && b>a){
			
		printf("%d %d %d ", c ,b ,a);}
		return 0 ;
	} 
