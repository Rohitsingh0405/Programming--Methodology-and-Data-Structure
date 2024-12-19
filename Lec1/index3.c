#include<stdio.h>
int main(){
	int n ;
	printf("Give an integer:");
	scanf("%d",&n); //& is related to how parameter are passed in c language . & n is location 
	  
	printf("The value of n = %d \n",n);
	int a = 10; 
	int x = &a;
	printf("%d",x);
	return 0;
	
}