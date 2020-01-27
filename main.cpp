# include <iostream>
using namespace std;

int EuclideanAlgorithm(int a, int b)
{
  int q = a / b;
  int r = a % b;

  if (r > 0)
  {
    return EuclideanAlgorithm(b, r);
  }
  else
  {
    return b;
  }

  return -1;
}

int main(int argc, char** argv)
{
  int a = 0, b = 0;

  cout << "a = ";
  cin >> a;

  cout << "b = ";
  cin >> b;

  cout << "Answer: " << EuclideanAlgorithm(a, b) << endl;
}
