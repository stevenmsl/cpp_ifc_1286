
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <queue>
#include <unordered_map>
#include <map>
#include <string>
#include <stack>

using namespace std;
namespace sol1286
{
  class CombinationIterator
  {
  private:
    void _find(string &str, int start, int k, string &combination);
    queue<string> q;

  public:
    string next();
    bool hasNext();
    CombinationIterator(string s, int k);
  };
}
#endif