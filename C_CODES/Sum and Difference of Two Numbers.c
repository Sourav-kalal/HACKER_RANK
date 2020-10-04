#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x,y;
    float m,n;
    scanf("%d%d",&x,&y);
    scanf("%f%f",&n,&m);
    int diff=x-y;
    int sum=x+y;
    printf("%d %d\n",sum,diff);
    printf("%.1f %.1f",n+m,n-m);

    return 0;
}
