#define CATCH_CONFIG_MAIN // provides main(); this line is required in only one .cpp file
#include "catch.hpp"

int theAnswer() { return 6*9; } // function to be tested

TEST_CASE( "Life, the universe and everything", "[42][theAnswer]" ) {
    REQUIRE(theAnswer() == 54);
}