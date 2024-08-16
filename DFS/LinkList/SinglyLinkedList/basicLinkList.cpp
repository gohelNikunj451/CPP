#include <iostream>
using namespace std;

class NODE
{
public:
  int data;
  NODE *next; // used for store next node address

  NODE(int data)
  {
    this->data = data;
    next = NULL;
  }
};

int main()
{
  NODE *n;
  n = new NODE(32);

  cout << "Data : " << n->data;
  cout << endl
       << "Next address : " << n->next;
}