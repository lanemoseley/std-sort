#include "sortVector.h"

bool secondDescending(std::pair<int, std::string> p1, std::pair<int, std::string> p2)
{
    if (p1.first == p2.first)
        return p1.second > p2.second;

    return p1.first < p2.first;
}

void sortVector(std::vector<Item>& v)
{
    std::sort(v.begin(), v.end());
}

void sortVectorRev(std::vector<Item>& v)
{
    std::sort(v.begin(), v.end(), secondDescending);
}