#include <iostream>

void ToH(int n, int A, int B, int C)
{
  if (n > 0)
   {
    
    // Disks will be moved from tower A to tower C using tower B

    ToH(n-1,A,C,B);

    // Prints necessary steps in following format (disk is being moved from,disk is being moved to)

    std::cout << "(" << A << "," << C << ")" << "\n";

   // Disks will be moved from tower B to tower A using tower C

    ToH(n-1,B,A,C);
   }
}

int main()
{
  ToH(3,1,2,3);

  return 0;
}
