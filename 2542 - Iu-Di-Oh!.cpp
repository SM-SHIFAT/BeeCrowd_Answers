#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    int i,j,N,M,L,M_C,L_C,chosen;
    int result;

    while(cin>>N){
        cin>>M;
        cin>>L;
        int M_d[M][N], L_d[L][N];

        for(i=0;i<M;i++){
            for(j=0;j<N;j++){
                cin>>M_d[i][j];
            }
        }
        for(i=0;i<L;i++){
            for(j=0;j<N;j++){
                cin>>L_d[i][j];
            }
        }

        cin>>M_C;cin>>L_C; cin>>chosen;

        if(M_d[M_C-1][chosen-1] > L_d[L_C-1][chosen-1])
            cout<<"Marcos\n";

        else if(M_d[M_C-1][chosen-1] < L_d[L_C-1][chosen-1])
            cout<<"Leonardo\n";
        else
            cout<<"Empate\n";


    }

    return 0;
}
