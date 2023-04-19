#include <iostream>
using namespace std;

void printArr(int* Array, int lengthMas){
    cout << lengthMas << endl;
    for(int i = 0; i < lengthMas; i++){
        cout << Array[i] << endl;
    }
}

int main(int argc, const char * argv[]) {
    int mas[]={1,2,3,4,5};
    printArr(mas, 5);
}

