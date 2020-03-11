/* Bunga Azizha N 
140810180016 - Kelas B
Studi Kasus 1  "Algoritma Pencarian Nilai Maksimal" */

#include <iostream>
using namespace std;

#define N 10
int FindMaks(int x[]){
    int maks = x[0];
    for(int i = 1; i < N; i++){
        if(x[i] > maks)
            maks = x[i];
    }
    return maks;
}

int main(){
    int x[N] = {4,8,980,7,56,15,20,1,80,571};
    cout << "Nilai maksimal adalah "<<FindMaks(x);
}

