#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int * getRandomArray(int n){
    int * arr=new int[n];
    for(int i=0;i<n;i++){
        int j=0;
        int val=rand()%n+1;
        while(j<i){
            if(val==arr[j]){
                j=0;
                val=rand()%n+1;
            }
            else{
                j+=1;
            }
        }
        arr[i]=val;
    }
    return arr;
}

int * getSortedArray(int n){
    int *arr=new int[n];
    for(int i=0; i<n;i++){
        arr[i]=n-i;
    }

    return arr;
}


int main(){
    srand(time(NULL));
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int * arr2=getRandomArray(n);
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    int * arr3=getSortedArray(n);
    for(int i=0;i<n;i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;


}
