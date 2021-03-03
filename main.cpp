#include <iostream>
using namespace std;

int main(){
     int length;
     cin >> length;
     int B[length];
     int counter = 0;
     while (counter < length)
         cin >> B[counter++];

     cout << peak2(B, length) << endl;
     cout << peak3(B,length,0,length - 1) << endl;
}