#include <iostream>
#include <string>
using namespace std;

string reverseStr(string& str){
  int n = str.length();
  string reversed (n,' ');
  
  for(int i = 0; i <= n / 2; i++){
    reversed[i] = str[n-i-1];
    reversed[n-i-1] = str[i];
    // swap(str[i],str[n-i-1]);
  }
  return reversed;
}

void PalindromeCheck(string str1, string str2){
    if(str1 == str2){
      cout << "equals" <<endl;
      
    }else{
      cout <<"not equals" << endl;
    }
}


int main(){
  string str = "madam";
  cout << str << endl;
  string rvrs = reverseStr(str);
  cout << rvrs << endl;

  PalindromeCheck(str, rvrs);

  return 0;
}