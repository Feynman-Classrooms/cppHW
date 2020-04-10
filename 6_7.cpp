// sym
// madamimadam >> palindrome
#include <iostream>
#include <string>

using namespace std;


string reducing(string str) 
{ 
    int i ,j = 0; 
    while (str[i]) 
    { 
        if (str[i] != ' ' || str[i] != '\'') 
           str[j++] = str[i]; 
        i++; 
    } 
    str[j] = '\0'; 
    return str; 
} 
  
// Driver program to test above function 
int main() 
{ 
    string s;
    getline(cin, s);
    string newS = reducing(s);

    int len = s.length();
    int n=len-1;

    string r;
    for(int i=0;i<(len/2);i++){
    r = swap(s[i],s[n]);
    n = n-1;
  }

  if(s == r) {
      cout << "Yes";

  } else {
      cout << "No ";

  }
}