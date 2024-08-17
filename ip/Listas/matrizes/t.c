#include <stdio.h>

int main(){
	int i,j,m,n,l,d;
	
	scanf("%d %d %d %d", &n,&m,&l,&d);
	
	printf("P2\n%d %d\n255\n",m,n);
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if((i<l || j<l)  || (i>=m-l || j>=n-l))
			{
				printf("%d", d);
				if(j<n-1)	printf(" ");
			}
			
			else printf("0 ");
		}
		printf("\n");
	}

return 0;
}