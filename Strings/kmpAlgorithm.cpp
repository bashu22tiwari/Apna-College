#include <bits/stdc++.h>
using namespace std;


void KMP(string txt, string pattern){
    int n = txt.size();
    int m = pattern.size();

    int LPS[m];
    fillLPS(pattern,LPS);

    int i=0,j=0;
    while(i<N){
        if(pattern[j]==txt[i]){ i++; j++; }
        if(j==m){ cout << j-i  << " " ; j = lps[j-1]; }
        else if(i<n && pattern[j]!=txt[i]){
            if(j==0){ i++; }
            else{ j=LPS[j-1]; }
        }
    }
}