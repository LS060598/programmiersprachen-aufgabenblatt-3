#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream> // std::cout
#include <iterator> // std::ostream_iterator<>
#include "circel.hpp"





TEST_CASE("describe_operator", "[aufgabe7]") {  // nach Radius sortieren
std::vector<Circle> kreis (10);

	for (auto& c : kreis){
		c.setRadius(std::rand() % 20 + 1);
}

std::vector<Circle> c1(kreis.size());
	std::copy(kreis.begin(), kreis.end(), c1.begin());
	std::sort(c1.begin(), c1.end());

REQUIRE(std::is_sorted(c1.begin(), c1.end()));
}



TEST_CASE("describe_sortLambda", "[aufgabe8]") { // nach Radius sortieren mit Lambda
std::vector<Circle> kreis2 (10);

	for (auto& j : kreis2){
		j.setRadius(std::rand() % 20 + 1);
}

  std::vector<Circle> c2(kreis2.size());
	std::copy(kreis2.begin(),kreis2.end(), c2.begin());
	std::sort(c2.begin(), c2.end(),
		[](Circle const& lhs, Circle const& rhs) -> bool{
			return (lhs <= rhs);
});

REQUIRE(std::is_sorted(c2.begin(), c2.end()));
}





TEST_CASE("describe_addition", "[aufgabe9]") // Addition mit Lambda
{
	std::vector <int> v1 {1,2,3,4,5,6,7,8,9};
	std::vector <int> v2 {9,8,7,6,5,4,3,2,1};
	std::vector <int> v3 (9);

	std::transform(v1.begin(), v1.end(), v2.begin(), v3.begin(),
		[](int v1_el, int v2_el) -> int {
			return v1_el + v2_el;
		});

	REQUIRE(std::all_of(v3.begin(), v3.end(),
		[](int x) -> bool{
			return x == 10;
		}));
}






int main(int argc, char* argv[]){

    return Catch::Session().run(argc, argv);

}