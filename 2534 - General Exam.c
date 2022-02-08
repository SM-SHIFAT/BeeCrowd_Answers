#include <stdio.h>
int main()
{
    int i,j,N,Q,temp;

    while(scanf("%d", &N) >= 0){

            int new_arr[N];
            scanf("%d", &Q);

            for(i=0;i<N;i++)
            {
                scanf("%d", &temp);
                new_arr[i]=temp;
            }

            //sort
            for(i=0;i<N;i++){
                for(j=i;j<N;j++){
                    if(new_arr[i]<new_arr[j])
                    {
                        temp=new_arr[i];
                        new_arr[i]=new_arr[j];
                        new_arr[j]=temp;
                    }
                }
            }


            for(i=0;i<Q;i++)
            {
                scanf("%d", &temp);
                printf("%d\n",new_arr[temp-1]);

            }

    }

    return 0;
}
