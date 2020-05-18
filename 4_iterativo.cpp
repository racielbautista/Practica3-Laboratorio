#include <iostream>

using namespace std;
int tam(char cadPtr[]){
    int i=0;
    while (cadPtr[i]!='\0'){
        i++;
    }
    return i;
}
int main(){
    char cad[] = "proyecto";
    int i=0;
    cout<<tam(cad);
    return 0;
}
