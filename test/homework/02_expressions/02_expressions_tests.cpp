#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

TEST_CASE("Get Sales Tax", "6.75 when multiplied by 10")
{
	REQUIRE(getSalesTax(10) == 0.675);
	REQUIRE(getSalesTax(20) == 1.35);
}

TEST_CASE("Get tip amount", "tip should return whole num")
{
	REQUIRE(getTipAmount(20.00 , 0.15) == 3);
	REQUIRE(getTipAmount(20 , .2) == 4); 
}