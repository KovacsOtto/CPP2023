#include <iostream>
#include <cmath>
#include <cmath>
#include <utility>
#include <sstream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int countBits(int number);
bool setBit(int& number, int order);
double mean(double array[], int numElements);
double stddev(double array[], int numElements);
pair<double, double> max2(double array[], int numElements);
int countWords(string text);
string code(string text);
string decode(string text);
string capitalizeWords(string text);

int main(int argc, char * argv[]) {
//    istringstream inputstream(argv[1]);
    string text = "hello world";
    cout << "Enter text: ";
    getline(cin, text);
    cout << capitalizeWords(text) << endl;
//    cout << code(text) << endl;
//    cout << decode(code(text)) << endl;
//    cout << countWords(text) << endl;
//    double result=0;
//    for (int i = 0; i < argc; ++i){
//        istringstream wordstream(argv[i]);
//        double number;
//        if( wordstream >> number ) {
//            result+=stoi(argv[i]);
//        }
//    }
//    cout << result << endl;
//    double array[]={1,2,3,4,5};
//    int numElements = sizeof(array)/sizeof(array[0]);
//    max2(array, numElements);
//    cout << max2(array, numElements).first << " " << max2(array, numElements).second << endl;
//    stddev( array,  numElements);
//    cout << stddev(array, numElements) << endl;
//    mean(array, numElements);
//    cout << mean(array, numElements) << endl;
//    for(int i=0;i<=127;i++){
//        cout << countBits(i) << endl;
//    }
//    for (int i = 0; i < 35; ++i) {
//        int n = 0;
//        if(setBit(n, i)){
//            cout<<i<<" ---> " << n <<endl;
//        }else{
//            cout<<"Impossible operation!" << endl;
//        }
//    }

    return 0;
}

string capitalizeWords(string text){
    text[0]=toupper(text[0]);
    for (int i = 1; i < text.length(); ++i) {
        if(text[i]==' ')
        {
            text[i+1]=toupper(text[i+1]);
            i+=2;
        }
        text[i] = tolower(text[i]);
    }
    return text;
}


string code(string text){
    for (int i = 0; i < text.length(); ++i) {
        if(text[i] >= 'a' && text[i] < 'z'){
            text[i]+=1;
        }
        if(text[i]== 'z')
        {
            text[i]='a';
        }
        if(text[i] >= 'A' && text[i] < 'Z'){
            text[i]+=1;
        }
        if(text[i]== 'Z')
        {
            text[i]='A';
        }
    }
    return text;
}
string decode(string text){
    for (int i = 0; i < text.length(); ++i) {
        if(text[i] >= 'a' && text[i] < 'z'){
            text[i]-=1;
        }
        if(text[i]== 'a')
        {
            text[i]='z';
        }
        if(text[i] >= 'A' && text[i] < 'Z'){
            text[i]-=1;
        }
        if(text[i]== 'A')
        {
            text[i]='Z';
        }
    }
    return text;
}


int countWords(string text) {
    int count = 0;
    for (int i = 0; i < text.length(); ++i) {
        if (text[i] == ' ') {
            ++count;
        }
    }
    return count+1;
}

int countBits(int number){
    if(!number | 0) return 0;
    if(number & 1) return 1+ countBits(number>>1);
    return countBits(number>>1);
}
bool setBit(int& number, int order){
    if (order < 0 || order > 31) {
        return false;
    }
    int mask = 1 << order;
    number |= mask;
    return true;
}
double mean(double array[], int numElements){
    if(numElements == 0){
        return NAN;
    }
    double sum = 0;
    for (int i = 0; i < numElements; ++i) {
        sum += array[i];
    }
    return sum/numElements;
}

double stddev(double array[], int numElements){
    if(numElements == 0){
        return NAN;
    }
    double Mean = mean(array, numElements);
    double sum = 0;
    for (int i = 0; i < numElements; ++i) {
        sum += pow(array[i] - Mean, 2);
    }
    return sqrt(sum/numElements);
}
pair<double, double> max2(double array[], int numElements){
    pair<double, double> result;
    if(numElements == 0){
        result.first = NAN;
        result.second = NAN;
    }
    double max = array[0];
    double max2=0;
    for (int i = 1; i < numElements; ++i) {
        if(array[i] > max){

            if(max>max2){
                max2 = max;
            }
            max = array[i];
            result.first = max2;
            result.second = max;
        }
    }
    return result;
}