#include <iostream>
using namespace std;

int algorithm(int* array, int length) {
     return -1;
}

int main(){
     int length;
     cin >> length;
     int B[length];
     int counter = 0;
     while (counter < length)
         cin >> B[counter++];

     cout << algorithm(B, length) << endl;
}