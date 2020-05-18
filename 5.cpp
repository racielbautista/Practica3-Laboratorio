#include <iostream>
#include <string.h>
using namespace std;

void concatenar(char a[], char b[]){
    int j=0;
    int tamA=sizeof(a)/sizeof(a[0]);
        
    while (a[j]!='\0'){
        b[tamA++] = a[j++];        
    }
    b[tamA]='\0';    
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