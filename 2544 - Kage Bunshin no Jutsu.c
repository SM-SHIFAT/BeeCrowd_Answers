#include <stdio.h>

int main()
{
    int n, count;

    while(scanf("%d", &n) >= 0){

        if(n==1){
            printf("0\n");
        }
        else{
                count = 0;
            while(n != 1)
        {
            n = n/2;
            count++;
        }

            printf("%d\n",count);
        }

    }

    return 0;
}
