#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>

//Hilfsfunktion
bool isnt_multiple_of_3(int i){
    return (i % 3) != 0;
}

bool is_multiple_of_3(int i){
    return (i % 3) == 0;
}
            

TEST_CASE("filtere alle vielfache von 3","[erase]")
{
std::vector<unsigned int> vec2(100);
  for (auto& v : vec2) {
  v = std::rand() % 101; 

  vec2.erase(std::remove_if(vec2.begin(), vec2.end(), isnt_multiple_of_3), vec2.end()); 
  
  }




    REQUIRE(std::all_of(vec2.begin(), vec2.end(),is_multiple_of_3));
}





int main(int argc, char*argv[])
{

    return Catch::Session() .run(argc, argv);
}