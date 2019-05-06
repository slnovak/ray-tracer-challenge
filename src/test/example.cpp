#include "catch.hpp"

using namespace Catch::Matchers;

// page xv
SCENARIO("Concatenating two arrays should create a new array", "[example]")
{
    GIVEN("Two vectors [1, 2, 3] and [4, 5, 6]")
    {
        std::vector<int> first {1, 2, 3};
        std::vector<int> second {4, 5,6};

        WHEN("the vectors are concatenated together")
        {
            std::vector<int> result;
            
            result.reserve(first.size() + second.size());

            result.insert(
                result.end(),
                first.begin(),
                first.end()
            );

            result.insert(
                result.end(),
                second.begin(),
                second.end()
            );

            THEN("the resulting vector should be [1,2,3,4,5,6]")
            {
                std::vector<int> expected {1, 2, 3, 4, 5, 6};

                REQUIRE_THAT(result, Equals(expected));
            }
        }
    }
}