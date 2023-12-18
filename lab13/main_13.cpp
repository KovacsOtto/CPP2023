#include <iostream>
#include "ImplementTextGenerator.h"

int main() {
    string str = "Now is not the time for sleep, now is the time for party!";
    SimpleTextGenerator s;
    s.trainFromText(str);
    s.printData();
    cout << endl;
    cout << s.generate("time for",10) << endl;
    cout << s.generate("time for",10) << endl;
    cout << s.generate("time for",10) << endl;
    return 0;
}