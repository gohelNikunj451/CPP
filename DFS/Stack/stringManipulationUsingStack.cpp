#include <iostream>
#include<vector>
#include <stack>
using namespace std;
void print(stack<char>s){
  cout << "Data : ";
  while(!s.empty()){
    cout << " " << s.top();
    s.pop();
  }
}
int main()
{
  vector<char> v = {'a', 'b', 'b', 'a', 'c','b','d'};
  stack<char> s;
  for (int i = 0; i < v.size();i++){
    if(s.empty()){
      s.push(v[i]);
    }
    else if(s.top()!=v[i]){
      s.push(v[i]);
    }else{
      s.pop();
    }
  }
  print(s);
}