#include <iostream>
using namespace std;

int main(){
    int n = 0, i = 0;
    int r = 0;
    
    cin >> n;

    int vetor[n];

    for(i = 0; i < n; i++){
        cin >> vetor[i];
    }

    for(i = 0; i < (n-1); i++){
        for(r = i+1; r < n; r++){
            if(vetor[i] == vetor[r]){
                vetor[r] = 0;
            }
        }
        
    }

    for(i = 0; i < n; i++){
        if(vetor[i] != 0){
            cout << vetor[i] << " ";
        }
    }
    


    return 0;
}