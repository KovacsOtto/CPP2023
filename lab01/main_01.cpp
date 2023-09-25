#include <iostream>
#include <cmath>

using namespace std;

int countBits(int number);
bool setBit(int& number, int order);

int main() {
    for(int i=0;i<=127;i++){
        cout << countBits(i) << endl;
    }
    return 0;
}


int countBits(int number){
    if(!number | 0) return 0;
    if(number & 1) return 1+ countBits(number>>1);
    return countBits(number>>1);
}
bool setBit(int& number, int order){

}