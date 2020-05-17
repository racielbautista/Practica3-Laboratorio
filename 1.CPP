//funcion recibe arreglo de enteros y su tamano y retorna la sumaElementos de los elementos de un arreglo
#include <iostream>
#include <array>
using namespace std;

int sumaElementos(const int a[], const int *tamPtr){
    int sum=0;
    for (int i=0;i<*tamPtr;++i){
        sum+=a[i];
    }
    return sum;
}

int sumaElementosR(const int a[], int *tamPtr){
    
    if (--*tamPtr==0)
        return a[0]; 
    else
        return a[*tamPtr]+sumaElementosR(a,tamPtr);
}


int main(){

    int tamArreglo=4;
    int a[]={10,20,30,40};

    //cout<<sumaElementos(a, &tamArreglo)<<endl;
    cout<<sumaElementosR(a, &tamArreglo);

    return 0;
}