#include <iostream>
using namespace std;

int main () {
    int nums;
    cout << "input how many numbers (max 20)";
    cin >> nums;
    double array[20] = {};
    double sum = 0;


    if(nums >20) {
        cout << "error";
    }
    int i;
    for (i=0; i < nums; i++) {
        double e;
        cin >> e;
        array[i] = e;
        sum += e;
    }

    double mean = sum / nums;

    double VarSum = 0;

    for (i=0; i< nums; i++) {
        VarSum += array[i]-mean;
    }

    double Var = VarSum / nums;

    cout << Var;

}