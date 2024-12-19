#include<stdio.h>
#include<math.h>
int main(){
	 float a ,b,c,r1,r2,y,z,w;
	 scanf("%f%f%f",&a,&b,&c);
	 y = b*b - 4*a*c;
	 w = 2*a;
	 if(y==0)
	 	printf("equal root=%f \n",-b/w);
	else{
		if(y<0)
		printf("Complex Root \n");
		else{

		z = sqrt(y);
		r1 = (-b-z)/w;
		r2=(-b+z)/w;
		printf("root1=%f, root2 = %f \n",r1,r2);
	}
		}
	return 0;

}