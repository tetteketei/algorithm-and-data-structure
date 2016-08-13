#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
/*this program computes expression in Reverse Polish Notation (PRN)
by using stack,which holds only numbers*/

int top, S[1000];

void push(int x){
  S[++top] = x;
}

int pop(){
  top--;
  return S[top+1];
}

int main(){
  int left_num, right_num;
  top = 0;
  char s[100];
  while( cin >> s ){
    if( s[0] == '+'){
      right_num = pop();
      left_num = pop();
      push(left_num + right_num);
    } else if ( s[0] == '-') {
      right_num = pop();
      left_num = pop();
      push(left_num - right_num);
    } else if ( s[0] == '*') {
      right_num = pop();
      left_num = pop();
      push(left_num * right_num);
    } else {
        push(atoi(s));
    }
  }

  cout << pop() << endl;

  return 0;
}
