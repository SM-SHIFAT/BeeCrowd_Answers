#include <stdio.h>
int main()
{
    int i,id,n;
    int temp_id, flag, count;

    while(scanf("%d", &n) >= 0){
        scanf("%d", &id);
        count = 0;

        for(i=0;i<n;i++)
        {
            scanf("%d %d", &temp_id,&flag);
            if(flag == 0)
            {
                if(temp_id==id)
                    count++;
            }
        }

        printf("%d\n",count);



    }

    return 0;
}
