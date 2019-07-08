#ifndef SORTSORT_H
#define SORTSORT_H
#include <utility>
#include <vector>

#include <algorithm>
#include <string>

typedef std::pair<int, std::string> Item;

bool secondDescending(std::pair<int, std::string> p1, std::pair<int, std::string> p2);

void sortVector(std::vector<Item>&);
void sortVectorRev(std::vector<Item>&);

#endif