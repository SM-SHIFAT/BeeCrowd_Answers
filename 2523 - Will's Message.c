#include <stdio.h>
int main()
{
    char alpha[30],one[1];
    char bulb[10000];
    int i,n,x,count,j;


    //while(fgets(alpha,27,stdin) >= 0){
    while(scanf("%s", alpha) >= 0){
            scanf("%d",&n);
            count=0;

            for(i=0;i<n;i++)
            {
                x=0;
                scanf("%d",&x);
                x=x-1;

                bulb[count]=alpha[x];

                count++;


            }
            for(i=0;i<n;i++)
            {
                printf("%c",bulb[i]);


            }
            printf("\n");
    }

    return 0;
}
