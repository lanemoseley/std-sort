#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "sortVector.h"

using namespace std;

TEST_CASE( "sort by second key only" )
{
    vector<Item> arr;
    arr.push_back(make_pair(1, "Michael"));
    arr.push_back(make_pair(1, "Jill"));
    arr.push_back(make_pair(1, "George"));
    arr.push_back(make_pair(1, "Abby"));
    sortVector(arr);

    vector<Item> result(4);
    result[0] = (make_pair(1, "Abby"));
    result[1] = (make_pair(1, "George"));
    result[2] = (make_pair(1, "Jill"));
    result[3] = (make_pair(1, "Michael"));

    REQUIRE( arr == result );

    sortVectorRev(arr);
    reverse(begin(result), end(result));
    REQUIRE( arr == result);
}

TEST_CASE( "sort by both keys" )
{
    vector<Item> arr;
    arr.push_back(make_pair(1, "Michael"));
    arr.push_back(make_pair(1, "Jill"));
    arr.push_back(make_pair(1, "George"));
    arr.push_back(make_pair(2, "Michael"));
    arr.push_back(make_pair(2, "Jill"));
    arr.push_back(make_pair(2, "George"));
    arr.push_back(make_pair(3, "Michael"));
    arr.push_back(make_pair(3, "Jill"));
    arr.push_back(make_pair(3, "George"));
    sortVector(arr);

    vector<Item> result(9);
    result[0] = (make_pair(1, "George"));
    result[1] = (make_pair(1, "Jill"));
    result[2] = (make_pair(1, "Michael"));
    result[3] = (make_pair(2, "George"));
    result[4] = (make_pair(2, "Jill"));
    result[5] = (make_pair(2, "Michael"));
    result[6] = (make_pair(3, "George"));
    result[7] = (make_pair(3, "Jill"));
    result[8] = (make_pair(3, "Michael"));

    REQUIRE( arr == result );
  
    sortVectorRev(arr);
    result[0] = (make_pair(1, "Michael"));
    result[1] = (make_pair(1, "Jill"));
    result[2] = (make_pair(1, "George"));
    result[3] = (make_pair(2, "Michael"));
    result[4] = (make_pair(2, "Jill"));
    result[5] = (make_pair(2, "George"));
    result[6] = (make_pair(3, "Michael"));
    result[7] = (make_pair(3, "Jill"));
    result[8] = (make_pair(3, "George"));

    REQUIRE( arr == result);
}