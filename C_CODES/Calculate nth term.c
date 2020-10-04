#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int s(int n, int a, int b, int c) {
  //Write your code here.
    if(n==1)
        return a;
    if(n==2)
        return b;
    if(n==3)
        return c;
        return s(n-1,a,b,c)+s(n-2,a,b,c)+s(n-3,a,b,c);
    }

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = s(n, a, b, c);

    printf("%d", ans);
    return 0;
}
