#include <iostream>

int fibonacci(int i)
{
   if (i <= 1)
   {
      return i;
   }
   else
   {
      return fibonacci(i - 1) + fibonacci(i - 2);
   }
}

int main()
{
   int n;

   std::cout << "Enter the value of n: ";
   std::cin >> n;

   for (int i = 0; i < n; i++)
   {
      std::cout << fibonacci(i) << std::endl;
   }

   return 0;
}
