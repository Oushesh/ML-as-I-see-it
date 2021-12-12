/*
In this use case we present an idea for an advantage
of c++ pass by reference:
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector <string> vect{"geeksforgeeks practice",
"geeksforgeeks write", "geeksforgeeks ide"};

  //We avoid copy of the whole string obect by using reference
  for (const auto &x: vect)
    cout << x << endl;
  return 0;
}

//const is a good practice to use when printing elelments in a loop. To avoid
//modifying the elements while printing vector elements
