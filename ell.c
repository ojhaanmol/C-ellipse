#include<stdio.h>
#include<math.h>

int a[5]={9,3,4,6,5};

void main(){int i,t;float j;

int m,r=5,R;
for(i=0;i<=80;i++)
	{printf("\n");for(j=1;j<80;j=j+0.5)
	
	{
		R=pow((i-40),2)+pow((j-40),2);
		if((R>=pow(r,2))&&(R<=pow(r,2)+40))
		printf("#");
		else printf(" ");
	}
}

}