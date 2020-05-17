#include <iostream>
#include <string.h>
using namespace std;

void concatenar(char a[], char b[]){
    int i=0,j=0;
    while (b[i]!='\0'){        
        i++;
    }
    while (a[j]!='\0')
    {
        b[j+i] = a[j];

        j++;
    }
    b[i+j]=0;
    
}
void mostrar(char c[]){
    cout<<c;
}
int main(){
    char a[]="dos",b[]="uno ";
    concatenar(a,b);
    
    mostrar(b);

    return 0;
}