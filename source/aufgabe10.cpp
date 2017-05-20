#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <algorithm>
#include <vector>
#include <cstdlib> 
#include <iterator> 
#include <iostream>
#include "filter.hpp"


//Hilfsfunktion
bool is_even(int n){
    return n%2 ==0;
}

TEST_CASE("discribe_filter","[aufgabe10]")
{
std::vector<int> v{1,2,3,4,5,6};
std::vector<int> alleven = filter(v, is_even);
  

REQUIRE(std::all_of(alleven.begin(), alleven.end(), is_even));
}





int main(int argc, char*argv[])
{

    return Catch::Session() .run(argc, argv);
}