#include<stdio.h>
int main(){
	int n ;
	printf ("nhap vao thang ");
	scanf("%d",&n);
	switch (n){
		case 1 :
		printf ("co 31 ngay ");
		break; 
			case 2 :
		printf ("co 28 ngay ");
		break; 
			case 3 :
		printf ("co 30 ngay ");
		break; 
			case 5 :
		printf ("co 30 ngay ");
		break; 
			case 7 :
		printf ("co 30 ngay ");
		break; 
			case 8 :
		printf ("co 30 ngay ");
		break; 
			case 10 :
		printf ("co 30 ngay ");
		break; 
			case 12 :
		printf ("co 30 ngay ");
		break; 
			case 4 :
		printf ("co 31 ngay ");
		break; 
			case 6 :
		printf ("co 31 ngay ");
		break; 
			case 11 :
		printf ("co 31 ngay ");
		break;
	    		case 9:
		printf ("co 30 ngay ");
		break; 

	default :
	printf("default"); 
	}
	
	return 0; 
} 
