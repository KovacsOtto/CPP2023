#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <random>
#include "Account.h"

using namespace std;

int main() {
    //1.feladat
    cout << "1.feladat" << endl;
    vector<string> fruits {
            "melon", "strawberry", "raspberry","apple", "banana", "walnut", "lemon"
    };
    auto it=find_if(fruits.begin(), fruits.end(), [](const string& fruit) {
        return strstr(fruit.c_str(), "berry") != nullptr;
    });
    cout << it[0] << endl;
    cout << it[1] << endl;

    //2.feladat
    cout << "2.feladat" << endl;
    vector<int> arr(5);
    for (int i = 0; i < 5; i++) {
        arr[i] = i;
    }
    bool a =all_of(arr.begin(),arr.end(), [&arr](int i) {
        return arr[i] % 2 == 0;
    });
    if(a)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    //3.feladat
    cout << "3.feladat" << endl;
    for_each( arr.begin(), arr.end(), [&arr](int i) {
        return arr[i]*=2;
    });
    for(auto &i:arr){
        cout << i << " ";
    }
    cout << endl;

    //4.feladat

    cout << "4.feladat" << endl;
    vector<string> months {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
    };
    int count=0;
    for_each( months.begin(), months.end(), [&months,&count](const string& month) {
        if(month.size()==5){
            count ++;
        }
    });
    cout << count << endl;

    //5.feladat
    cout << "5.feladat" << endl;
    sort(arr.begin(), arr.end(), [](const int i,const int j) {
        return greater<int>()(i,j);
    });
    for_each( arr.begin(), arr.end(), [](const int i) {
        cout << i << " ";
    });
    cout << endl;

    //6.feladat

    cout << "6.feladat" << endl;
    vector<pair<int,int>> v;
    v.push_back(make_pair(1,1));
    v.push_back(make_pair(2,15));
    v.push_back(make_pair(3,17));
    v.push_back(make_pair(4,8));
    v.push_back(make_pair(5,25));
    v.push_back(make_pair(6,5));
    v.push_back(make_pair(7,35));
    v.push_back(make_pair(8,25));
    v.push_back(make_pair(9,14));
    v.push_back(make_pair(10,13));
    v.push_back(make_pair(11,32));
    v.push_back(make_pair(12,3));
    sort(v.begin(), v.end(), [](const pair<int,int> i,const pair<int,int> j) {
        return i.second < j.second;
    });
    for_each( v.begin(), v.end(), [](const pair<int,int> i) {
        cout << i.first << " " << i.second << endl;
    });
    cout << endl;

    //7.feladat
    cout << "7.feladat" << endl;
    vector<int> arr2;
    arr2.push_back(1);
    arr2.push_back(6);
    arr2.push_back(1);
    arr2.push_back(8);
    arr2.push_back(3);
    sort(arr2.begin(), arr2.end(), [&arr2](const int i,const int j) {
       return abs(arr2[i]) < abs(arr2[j]);
    });
    for_each( arr2.begin(), arr2.end(), [](const int i) {
        cout << i << " ";
    });
    cout << endl;

    //8.feladat
    cout << "8.feladat" << endl;

    for_each(months.begin(),months.end(),[]( string& month){
        month[0]=tolower(month[0]);
    });
    for_each( months.begin(), months.end(), [](const string& month) {
        cout << month << " ";
    });
    cout << endl;

    //9.feladat
    cout << "9.feladat" << endl;
    string alphabet="abcdefghijklmnopqrstuvwxyz";
    shuffle(alphabet.begin(),alphabet.end(),mt19937(static_cast<unsigned int>(time(0))));
    cout << alphabet << endl;
    sort(months.begin(),months.end(),[&alphabet](const string& i,const string& j){
        return alphabet.find(i[0]) < alphabet.find(j[0]);
    });
    for_each( months.begin(), months.end(), [](const string& month) {
        cout << month << " ";
    });
    cout << endl;
    //Extra 1.feladat
    cout << "Extra 1.feladat" << endl;
    Account account;
    account.deposit(1000);
    cout << account << endl;
    account.withdraw(500);
    cout << account << endl;
    account.withdraw(1000);
    cout << account << endl;
    return 0;
}