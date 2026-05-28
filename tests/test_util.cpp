#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Util.h"

TEST_CASE("strToUpper works correctly", "[util]") {
    SECTION("Empty string") {
        CHECK(strToUpper("") == "");
    }

    SECTION("Already uppercase") {
        CHECK(strToUpper("HELLO") == "HELLO");
    }

    SECTION("Lowercase to uppercase") {
        CHECK(strToUpper("hello") == "HELLO");
    }

    SECTION("Mixed case") {
        CHECK(strToUpper("hElLo 123!") == "HELLO 123!");
    }
}
