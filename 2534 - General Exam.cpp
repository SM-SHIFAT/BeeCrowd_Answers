#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    int i,j,N,Q,temp;

    while(cin>>N){

            int new_arr[N];
            cin>>Q;


            for(i=0;i<N;i++)
            {
                cin>>temp;
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
                cin>>temp;
                cout<<new_arr[temp-1]<<"\n";

            }

    }

    return 0;
}
