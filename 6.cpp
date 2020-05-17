#include <iostream>
using namespace std;

void copiar(char a[], char b[]){
    int i=0;
    while (a[i]!='\0')
    {
        b[i] = a[i];
        i++;
    }
    b[i]=0;
}

void mostrar(char c[]){
    
    cout<<c;
    
}

int main(){
    char a[]="texto",b[10];
    
    copiar(a,b);
    
    mostrar(b);

    return 0;
}