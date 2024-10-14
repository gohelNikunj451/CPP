#include <iostream>
#include <stack>
using namespace std;
int main()
{
  stack<int> s;
  s.push(5);
  s.push(10);
  cout << endl
       << s.empty();
  cout << endl
       << s.size();
}
//there simple difference between stack and vector
// vector is over flow , when vector create new block of memory with double capacity and delete previous block of memory and other hand
//stack is over flow , when stack is create new block of memeory with our requirement as we need not neccesary space is aqire;
