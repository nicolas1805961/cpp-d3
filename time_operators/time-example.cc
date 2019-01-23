#include <iostream>

#include "time.hh"

int main()
{
  Time t1 = Time("1:00:00");
  Time t2 = Time("1:30:30");
  Time t3 = t2;
  Time t4 = Time(10, 30, 50);

  std::cout << t1 << '\n';
  std::cout << t2 << '\n';
  std::cout << std::boolalpha << (t1 == t2) << '\n';
  std::cout << std::boolalpha << (t2 == t3) << '\n';
  std::cout << std::boolalpha << (t1 > t2) << '\n';
  std::cout << std::boolalpha << (t2 < t4) << '\n';

  auto t5 = t2 + t4;
  std::cout << t5 << '\n';
  auto t6 = t2 - t1;
  std::cout << t6 << '\n';

  t1 += t2;
  std::cout << t1 << '\n';
  t1 -= t2;
  std::cout << t1 << '\n';
}
