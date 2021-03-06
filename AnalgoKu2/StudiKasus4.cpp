/* Bunga Azizha N
140810180016 - Kelas B
Studi Kasus 4  "Insertion Sort" */

#include <iostream>
using namespace std;

#define N 5

void InsertionSort(int *x){
    int insert,j;
    for(int i = 1; i < N; i++){
        insert = x[i];
        j = i-1;
        while(j >= 0 && x[j] > insert){
            x[j+1] = x[j];
            j--;
        }
        x[j+1] = insert;
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
    int x[N] = {13,89,7,80,1500};
    cout<<"------ PROGRAM INSERTION SORT ------"<<endl;
    cout << "Sebelum diurutkan : "; print(x);
    InsertionSort(x);
    cout << "Setelah diurutkan : "; print(x);
}
