#include <iostream>
#include "derived.h"

using namespace std;
const int n=10;
const int k=10;
int main() {

    derived ***B = new derived **[n];
    for (int i = 0; i<n; i++){
        B[i]= new derived*[n];
        for (int j=0; j<n; j++){
            B[i][j]= new derived (i-(n/2), j-(n/2),0,0,0);

        }
    }
    for (int i=0; i<=9; i++){
        int i1 = (rand()%n);
        int j1 = (rand()%n);
        B[i1][j1]->setR(rand()%256);
        B[i1][j1]->setG(rand()%256);
        B[i1][j1]->setB(rand()%256);

    }
    for (int i=0; i<=k; i++) {
        for (int j = 0; j < n; j++) {
            cout << B[i][j]->getR() << "  ";

        }
        cout << endl;
    }
    return 0;
}

// Размытие реализовать не получилось