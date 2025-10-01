#include "functions.h"

void afisareVector(const int v[], int dim) {
    for (int i = 0; i < dim; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void sortareVector(const int v[], int dim, int vSortat[]) {
    for (int i = 0; i < dim; i++) {
        vSortat[i] = v[i];
    }
    for (int i = 0; i < dim - 1; i++) {
        for (int j = i + 1; j < dim; j++) {
            if (vSortat[i] > vSortat[j]) {
                swap(vSortat[i], vSortat[j]);
            }
        }
    }
    cout << endl;
}

int sumaVector(const int v[], int dim) {
    int suma = 0;
    for (int i = 0; i < dim; i++) {
        suma += v[i];
    }
    return suma;
    cout << endl;
}

int minimvector(const int v[], int dim) {
    int minim = v[0];
    for (int i = 1; i < dim; i++) {
        if (v[i] < minim) {
            minim = v[i];
        }
    }
    return minim;
    cout << endl;
}

int maximvector(const int v[], int dim) {
    int maxim = v[0];
    for (int i = 1; i < dim; i++) {
        if (v[i] > maxim) {
            maxim = v[i];
        }
    }
    return maxim;
    cout << endl;
}