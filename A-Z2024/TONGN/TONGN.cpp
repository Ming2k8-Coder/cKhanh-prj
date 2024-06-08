#include <bits/stdc++.h>
using namespace std;

bool snt(int n)
{
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
    return true;
  }
}
int tach(int n)
{
  long long sum = 0;
  while (n > 0)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main()
{
  int n;
  cin >> n;
  int a = tach(n);
  if (snt(a))
  {
    cout << 1;
  }
  else
  {
    cout << 0;
  }
}
