#include <iostream>
using namespace std;



void ordenar(int array[],int *tPtr){
    int temp;    
    for (int i=0;i<*tPtr-1;i++){
        for (int j=0;j<*tPtr-i-1;j++){
            if (array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

int main(){
    int array[]={9,4,6,7,3},tam=5;

    ordenar(array,&tam);
    
    for(int i=0;i<tam;i++)
    cout<<array[i]<<" ";
    cout<<endl;
    return 1;
}