#include <iostream>
#include <string>
using namespace std;

string reverseStr(string& str){
  int n = str.length() - 1;
  // string reversed (n,' ');
  
  for(int i = 0; i <= n; i++){
    swap(str[i], str[n]);
    // str[n] = str[i];
    n--;
    // swap(str[i],str[n-i-1]);
  }
  return str;
}

void isPalindrome(string str1, string str2){
    if(str1 == str2){
      cout << "equals" <<endl;
      
    }else{
      cout <<"not equals" << endl;
    }
}

int main(){
  string str = "Jairo";
  cout << str << endl;
  string rvrs = reverseStr(str);
  cout << rvrs << endl;

  isPalindrome(str, rvrs);

  return 0;
}