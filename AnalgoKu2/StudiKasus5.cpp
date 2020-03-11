/* Bunga Azizha N
140810180016 - Kelas B
Studi Kasus 5  "Selection  Sort" */

#include <iostream>
using namespace std;

#define N 5

void SelectionSort(int *x){
    int imaks,temp;
    for(int i = N-1; i >= 1; i--){
        imaks = 0;
        for(int j = 1; j <= i; j++)
            if(x[j] > x[imaks])
                imaks = j;
        temp = x[i];
        x[i] = x[imaks];
        x[imaks] = temp;
    }
}

void print(int *x){
    for(int i = 0; i < N; i++)
    {
        cout << " " << x[i];
    }
    cout << endl;
}

int main(){
    int x[N] = {25,1000,76,32,4};
    cout<<"---------- SELECTION SORT ----------"<<endl;
    cout << "Sebelum diurutkan : "; print(x);
    SelectionSort(x);
    cout << "Setelah diurutkan : "; print(x);
}
