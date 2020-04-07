/* Bunga Azizha N - 140810180016
Kelas B - Program Adjacency Matrix */

#include<iostream>
using namespace std;

int vertArr[20][20]; //the adjacency matrix initially 0
int count = 0;

void displayMatrix(int v) {
   int i, j;
   for(i = 0; i < v; i++) {
      for(j = 0; j < v; j++) {
         cout << vertArr[i][j] << " ";
      }
      cout << endl;
   }
}

void add_edge(int u, int v) { //function to add edge into the matrix
   vertArr[u][v] = 1;
   vertArr[v][u] = 1;
}

main(int argc, char* argv[]) {
   int v = 8;    //there are 8 vertices in the graph
   add_edge(1, 2);
   add_edge(1, 3);
   add_edge(2, 4);
   add_edge(2, 5);
   add_edge(3, 2);
   add_edge(3, 8);
   add_edge(4, 5);
   add_edge(5, 6);
   add_edge(7, 3);
   add_edge(8, 7);
   displayMatrix(v);
}
