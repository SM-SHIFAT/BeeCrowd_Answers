#include <stdio.h>
int main()
{
    int i,N,Q;
    float count,m;


    while(scanf("%d", &N) >= 0){
            count = 0.0;
            m=N;

            int v[N];
            for(i=0;i<N;i++){
                scanf("%d", &v[i]);
            }
            for(i=0;i<N;i++){
                if(v[i]==1)
                {
                    count=count+1.0;
                }
            }
            

            if(count >= (m*2.0)/3.0){
                    printf("impeachment\n");
               }
            else{
                printf("acusacao arquivada\n");
            }



    }

    return 0;
}
