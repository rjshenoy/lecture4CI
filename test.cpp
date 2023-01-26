// #include "main.cpp"
#define CATCH_CONFIG_MAIN
#include "catch.hpp" 
#include "functions_to_implement.cpp"
#include <vector>
#include <string>
using namespace std;


TEST_CASE ("Sum is working", "[Sum]") {

    vector <int> nums = {1,2,3};
    REQUIRE(Sum(nums) == 6);
    nums.push_back(4);
    REQUIRE(Sum(nums) == 10);

}

