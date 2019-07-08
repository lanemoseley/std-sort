#include<iostream>
#include<utility>
#include<algorithm>
#include<string>
#include "sortVector.h"

using namespace std;

typedef pair<int, string> Item;

void outputVector(const vector<Item> arr)
{
   for (auto x : arr)
      cout << x.first << " " << x.second << endl;
}

int main()
{

   vector<Item> arr;
   arr.push_back(make_pair(1, "Michael"));
   arr.push_back(make_pair(1, "Jill"));
   arr.push_back(make_pair(2, "George"));
   arr.push_back(make_pair(2, "Abby"));
   arr.push_back(make_pair(3, "Tracy"));
   arr.push_back(make_pair(3, "Drew"));
   arr.push_back(make_pair(4, "Julie"));
   arr.push_back(make_pair(4, "Brett"));
   arr.push_back(make_pair(5, "Stacey"));
   arr.push_back(make_pair(5, "Brendan"));

   sortVector(arr);
   outputVector(arr);
   cout << "Reversed on secondary key\n";
   sortVectorRev(arr);
   outputVector(arr);
   
   return 0;
}