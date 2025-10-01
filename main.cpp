#include "functions.h"

int main(){
    int v[10]={3,5,1,8,7,2,4,9,6,0};
    int dim=sizeof(v)/sizeof(v[0]);
    afisareVector(v, dim);
    int vSortat[10];
    sortareVector(v, dim, vSortat);
    cout << "Vectorul sortat: ";
    afisareVector(vSortat, dim);
    cout << endl;
    cout << "Suma elementelor: " << sumaVector(v, dim) << endl;
    cout << "Minimul elementelor: " << minimVector(v, dim) << endl;
    cout << "Maximul elementelor: " << maximVector(v, dim) << endl;
    return 0;
}