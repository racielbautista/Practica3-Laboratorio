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
    int i=0;
    cout<<tamR(cad,i);
    return 0;
}

/*
int tam(char cadPtr[]){
    int i=0;
    while (cadPtr[i]!='\0'){
        i++;
    }
    return i;
}*/
