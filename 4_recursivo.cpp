//funcion que reciba una cadena y retorne su tamaño
#include <iostream>

using namespace std;
int tamR(char cad[],int pos){
    if(cad[pos]=='\0')
        return 0;
    else
        return 1+ tamR (cad,++pos);
}
int main(){
    char cad[] = "proyecto";
    int tam=0;
    cout<<tamR(cad,0);
    return 0;
}
