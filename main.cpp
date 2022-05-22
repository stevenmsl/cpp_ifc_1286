#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1286;

/*
CombinationIterator iterator = new CombinationIterator("abc", 2); // creates the iterator.

iterator.next(); // returns "ab"
iterator.hasNext(); // returns true
iterator.next(); // returns "ac"
iterator.hasNext(); // returns true
iterator.next(); // returns "bc"
iterator.hasNext(); // returns false
*/

void test1()
{
  auto iterator = CombinationIterator("abc", 2); // creates the iterator.
  cout << "Expect to see ab:" << iterator.next() << endl;
  cout << "Expect to see 1:" << iterator.hasNext() << endl;
  cout << "Expect to see ac:" << iterator.next() << endl;
  cout << "Expect to see 1:" << iterator.hasNext() << endl;
  cout << "Expect to see bc:" << iterator.next() << endl;
  cout << "Expect to see 0:" << iterator.hasNext() << endl;
}

main()
{
  test1();
  return 0;
}