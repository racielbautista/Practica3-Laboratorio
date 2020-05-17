#include <iostream>
using namespace std;

int invertirOrden(int a[],int *tPtr){
        
    int temp;
    
    for (int i=0;i<*tPtr/2;i++){
        temp=a[i];
        a[i]=a[*tPtr-1-i];
        a[*tPtr-1-i]=temp;

    }
    return temp;
}



int main(){
    int a[]={3,4,6,7,12},tam=5;


    invertirOrden(a,&tam);
    
    for(int i=0;i<tam;i++)
    cout<<a[i]<<" ";
    cout<<endl;

}