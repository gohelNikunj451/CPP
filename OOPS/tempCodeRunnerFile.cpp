
using namespace std;
inline int sum(int a, int b)
{
  static int c = 0;
  c = c + 1;
  return a + b + c;