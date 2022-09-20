#define CATCH_CONFIG_MAIN // tells tCatch to privide main() - ONLY DO THIS FOR ONE CPP FILE
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>
// Param 1 is a description
// Param 2 is a tag (used elsewhere)
TEST_CASE("Fibonacci computed", "[fibonacci]")
{
    REQUIRE(NthFibonacci(0) == 1);
    REQUIRE(NthFibonacci(1) == 1);
    REQUIRE(NthFibonacci(2) == 2);
    REQUIRE(NthFibonacci(3) == 3);
    REQUIRE(NthFibonacci(4) == 5);
    REQUIRE(NthFibonacci(5) == 8);
    REQUIRE(NthFibonacci(6) == 13);
    REQUIRE(NthFibonacci(-1) == -1);
}

TEST_CASE("Sign computed", "[sign]")
{
    REQUIRE(Sign(0) == 1);
    REQUIRE(Sign(20) == 1);
    REQUIRE(Sign(23424) == 1);
    REQUIRE(Sign(-568) == -1);
    REQUIRE(Sign(-53875853) == -1);
    REQUIRE(Sign(245234) == 1);
    REQUIRE(Sign(1) == 1);
    REQUIRE(Sign(-1) == -1);
}

TEST_CASE("Sum computed", "[sum]")
{
    std::vector<double> v{0.01, 12.68, -0.6, -84.3};
    std::vector<double> v1{-0.01, -12.68, -0.6, -84.3};
    std::vector<double> v2{0.01, 12.68, 0.6, 84.3};

    SECTION("checking all positive")
    {
        //REQUIRE(Sum(v2) == 97.59);
    }

    SECTION("checking all negative")
    {
        //REQUIRE(Sum(v1) == -97.59);
    }

    SECTION("checking normal")
    {
        //REQUIRE(Sum(v) == -72.21);
    }
}