#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
using namespace sol1286;
using namespace std;

/*takeaways
  - refer to question 77 for how combinations are created

*/

void CombinationIterator::_find(string &str, int start, int k, string &combination)
{
  if (combination.size() == k)
  {
    q.push(combination);
    return;
  }
  for (auto picked = start; picked < str.size(); picked++)
  {
    combination.push_back(str[picked]);
    _find(str, picked + 1, k, combination);
    combination.pop_back();
  }
}

CombinationIterator::CombinationIterator(string s, int k)
{
  string c;
  _find(s, 0, k, c);
}

string CombinationIterator::next()
{
  auto c = q.front();
  q.pop();
  return c;
}

bool CombinationIterator::hasNext()
{
  return !q.empty();
}
