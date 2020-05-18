#include <iostream>
using namespace std;

void invertirOrdenR(int a[],int tam, int pos){
    int b=a[pos];
    int c=a[tam-1];
    swap(&b,&c);

    if(pos<(tam-1)/2)
        invertirOrdenR(a,--tam,++pos);

}

void swap(int *bPtr, int *cPtr){
    *bPtr^=*cPtr;
    *cPtr^=*bPtr;
    *bPtr^=*cPtr;
}



int main(){
    int a[]={3,4,6,7,12},tam=5;


    invertirOrdenR(a,tam,0);
    
    
return 0;

}