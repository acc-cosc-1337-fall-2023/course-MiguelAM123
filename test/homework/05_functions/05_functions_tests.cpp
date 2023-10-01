#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("GC count", "Proper count and division")
{
	REQUIRE(getGCcontent("AGCTATAG") == .375 );
	REQUIRE(getGCcontent("CGCTATAG") == .50 );
}

TEST_CASE("Reverse the string")
{
	REQUIRE(getReverseString("AGCTATAG") == "GATATCGA" );
	REQUIRE(getReverseString("CGCTATAG") == "GATATCGC");
}

TEST_CASE("Get DNA compliment")
{
	REQUIRE(getDnaComplement("AAAACCCGGT") == "ACCGGGTTTT" );
	REQUIRE(getDnaComplement("CCCGGAAAAT") == "ATTTTCCGGG" );
}