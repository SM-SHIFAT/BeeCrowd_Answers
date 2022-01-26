#include <iostream>

using namespace std;

int main()
{
    char alpha[30],one[1];
    char bulb[10000];
    int i,n,x,count,j;


    //while(fgets(alpha,27,stdin) >= 0){
    while(cin>>alpha){
            cin>>n;
            count=0;

            for(i=0;i<n;i++)
            {
                x=0;
                cin>>x;
                x=x-1;

                bulb[count]=alpha[x];

                count++;


            }
            for(i=0;i<n;i++)
            {
                
                cout<<bulb[i];


            }
            cout<<"\n";
    }

    return 0;
}
