 #include "catch.hpp"
#include "soma_string.hpp"

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( soma_string("1,2\n") == 3 );
    REQUIRE( soma_string("1,2,3\n") == 6 );
    REQUIRE( soma_string("1\n") == 1 );
    REQUIRE( soma_string("1,\n") == -1 );
	REQUIRE( soma_string(",1\n") == -1 );
	REQUIRE( soma_string("1,,2\n") == -1 );
	REQUIRE( soma_string(",\n") == -1 );
	REQUIRE( soma_string("1;2\n") == -1 );
	REQUIRE( soma_string("1,2") == -1 );
	REQUIRE( soma_string("1,2 \n") == -1 );
	REQUIRE( soma_string("1\n,2\n") == 3 );
	REQUIRE( soma_string("1,2,3,4\n") == -1 );
	REQUIRE( soma_string("1,2,3\n,4\n") == -1 );
}