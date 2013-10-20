//changed to C++ io
//Converted program to C++
//changed to one line comments
//changed defines of constants to const
//changed array to vector<>
//inlined init_vector function

#include <iostream>
#include <vector> //included vector
using namespace std;

const int N = 40; //changed from #define to const

inline void init_vector(vector<int>& myvector, int num_items)
{
  for(int i=0; i < num_items; i++) { // i declared and defined inside for
    myvector.push_back(i);
  }
}

//used pass by reference here. Also variable names have
//been changed to improvei readability.
void sum(int& finalsum, int items, vector<int> myvector)
{
  finalsum = 0;

  for(int i = 0; i < items; ++i) {    // iterator declared and defined inside for
     finalsum += myvector[i];         //changed to +=
  }
}

int main()
{
  int accum = 0;
  vector<int> data;              // changed from array to vector

  init_vector(data, N);

  sum(accum, N, data);
  cout<<"sum is "<<accum<<endl;   // printf replaced by cout

  return 0;
}
