#include <iostream>
#include <cmath>
using namespace std;





int main() {
    int i;
    cin >> i;
    if (i >0 ) {
        int array[15] = {pow(0, 2), 
                         pow(1, 2), 
                         pow(2, 2), 
                         pow(3, 2), 
                         pow(4, 2), 
                         pow(5, 2), 
                         pow(6, 2), 
                         pow(7, 2), 
                         pow(8, 2), 
                         pow(9, 2), 
                         pow(10, 2), 
                         pow(11, 2),
                         pow(12, 2), 
                         pow(13, 2), 
                         pow(14, 2),  


     };
     array[i+1], array[i+2], array[i+3], array[i+4], array[i+5] =0;
     cout << array;
     

    } else {
        cout << " must input the value greater than 0";
    }
}