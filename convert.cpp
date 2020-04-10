#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string example;
    vector <string> vec;

    getline(cin, example);
    int i;
    for (i=0;i< example.length();i++) {
        string a;
       if(example[i] == ' ') {
           vec.push_back(a);
           a = '\0';

       } else {
         a.append(example[i]);
       }
    }

    cout << vec;
}