#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    int i,N,Q;
    float ccount,m;


    while(cin>>N){
            ccount = 0.0;
            m=N;
            int v[N];

            for(i=0;i<N;i++){
                cin>>v[i];
            }

            for(i=0;i<N;i++){
                if(v[i] == 1)
                {
                    ccount = ccount+1.0;
                }
            }


            if(ccount >= (m*2.0)/3.0){
                cout<<"impeachment\n";
               }
            else{
                cout<<"acusacao arquivada\n";
            }



    }

    return 0;
}
