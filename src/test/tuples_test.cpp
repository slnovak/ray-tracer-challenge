#include "catch.hpp"

#include "tuples.hpp"

using namespace Catch::Matchers;

using namespace ray_tracer_challenge::tuples;

SCENARIO("A tuple with w=1.0 is a point", "[tuples]")
{
    GIVEN("a = tuple(4.3, -4.2, 3.1, 1.0)")
    {
        tuple_t a {4.3, -4.2, 3.1, 1.0};

        THEN("a.x = 4.3")
        {
            REQUIRE(a.x() == 4.3);
        }

        AND_THEN("a.y = -4.2")
        {
            REQUIRE(a.y() == -4.2);
        }
    }
}