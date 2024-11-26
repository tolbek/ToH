#include <iostream>

void ToH(int n, int A, int B, int C)
{
  if (n > 0)
   {
    ToH(n-1,A,C,B);
    std::cout << "(" << A << "," << C << ")" << "\n";
    ToH(n-1,B,A,C);
   }
}

int main()
{
  ToH(3,1,2,3);

  return 0;
}
