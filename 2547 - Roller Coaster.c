#include <stdio.h>

int main()
{
    int i,n,temp,a_min,a_max, count;

    while(scanf("%d", &n) >= 0){
            count = 0;
        scanf("%d",&a_min);
        scanf("%d",&a_max);

        for(i=0;i<n;i++){
            scanf("%d",&temp);
            if(temp >= a_min && temp <= a_max){
                count++;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
