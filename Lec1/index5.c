#include<stdio.h>
int main(){
	float a,b,c,y;
	scanf("%f%f%f",&a,&b,&c);
	y = b*b - 4*a*c;
	if(y==0){
		printf("Equal root \n");

	}
	else{
		if(y<0)
		printf("Complex Root \n");

		else
		printf("Two distinct real root\n");
	}

	 return 0;
}