#include<iostream>
#include<string>
using namespace std;

int helper(int num, string output[], string options[]) {
  if(num == 0) {
    output[0] = "";
    return 1;
  }
  
  int ldigit = num % 10;
  int snum = num / 10;
  string soutput[500];
  
  int scount = helper(snum, soutput, options);
  string op = options[ldigit];
  
  int k = 0;
  for(int i = 0; i < op.length(); i++) {
    for(int j = 0; j < scount; j++) {
      output[k] = soutput[j] + op[i];
      k++;
    }
  }
  return k;
}

int keypad(int num, string output[]) {
  string options[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
  return helper(num, output, options);
}
