#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
        for(int i=a;i<=b;i++){
          //  printf("%d",a);
            if(a<=9){
            switch(a){
                case 1: printf("one");
                        break;
                case 2: printf("two");
                        break;
                 case 3: printf("three");
                        break;
                case 4: printf("four");
                        break;
                case 5: printf("five");
                        break;
                 case 6: printf("six");
                        break;
                case 7: printf("seven");
                        break;
                case 8: printf("eight");
                        break;
                case 9: printf("nine");
                        break;
                }
            }
            else if(a%2==0)
                printf("even");
            else {
                printf("odd");
            }
    a=a+1;
    printf("\n");
}
    return 0;
}
