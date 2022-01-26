#include <stdio.h>
int main()
{
    int n,m,i,j;

    int x,y,a,b;
    int val_i,val_ii;


    while(scanf("%d",&n) >= 0){
        scanf("%d",&m);
        int city[n][m];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&city[i][j]);
                if(city[i][j]==2)
                {
                    x=i;
                    y=j;
                }
                if(city[i][j]==1)
                {
                    a=i;
                    b=j;
                }
            }
        }
        
        val_i=x-a;
        val_ii=y-b;
        
        if(val_i<0)
            val_i*=-1;
        if(val_ii<0)
            val_ii*=-1;

        printf("%d\n",val_i+val_ii);

    }

    return 0;
}
