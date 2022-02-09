#include <stdio.h>
int main()
{
    int i,j,N,M,L,M_C,L_C,chosen;
    int result;

    while(scanf("%d", &N) >= 0){
        scanf("%d %d",&M,&L);
        int M_d[M][N], L_d[L][N];

        for(i=0;i<M;i++){
            for(j=0;j<N;j++){
                scanf("%d",&M_d[i][j]);
            }
        }
        for(i=0;i<L;i++){
            for(j=0;j<N;j++){
                scanf("%d",&L_d[i][j]);
            }
        }

        scanf("%d %d %d",&M_C, &L_C, &chosen);

        if(M_d[M_C-1][chosen-1] > L_d[L_C-1][chosen-1])
            printf("Marcos\n");
        else if(M_d[M_C-1][chosen-1] < L_d[L_C-1][chosen-1])
            printf("Leonardo\n");
        else
            printf("Empate\n");


    }

    return 0;
}
