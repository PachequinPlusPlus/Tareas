//
//  main.cpp
//  General_Election_1003_Project
//
//  Created by Samuel Pacheco on 20/08/16.
//  Copyright © 2016 Samuel Pacheco. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int tc, i, j, k, N, M, votes, max_votes, winner, cand[5] = {0};
    
    cin >> tc;
    
    for(i=0;i<tc;i++){
        cin >> N >> M;
        for(j=0;j<M;j++){
            for(k=0;k<N;k++){
                cin >> votes;
                cand[k] += votes;
            }
        }
        max_votes=0;
        for(j=0;j<N;j++){
            if(cand[j] > max_votes){
                max_votes = cand[j];
                winner = j+1;
            }
            cand[j] = 0;
        }
        cout << winner << endl;
    }
}