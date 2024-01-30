#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>
using namespace std; 


TEST_CASE( "Sum of elements in vector are computed", "[Sum]" ){
    REQUIRE( Sum(vector<int> {1000000,2000000,3000000}) == 6000000);
    REQUIRE( Sum(vector<int> {-2,-2,-2}) == -6);
    REQUIRE( Sum(vector<int> {1,2,-3}) == 0);
    REQUIRE( Sum(vector<int> {}) == 0);


    SECTION("Checking huge vector"){
        vector<int> big_vec (1000, 1000000);
        REQUIRE( Sum(big_vec) == 1000000000);

    }

}

TEST_CASE( "Product of elements in vector are computed", "[Product]"){
    SECTION("Checking with positive numbers"){
        vector<int> small_ints = {1,2,3,4,5,6,7,8,9};
        vector<int> big_ints = {10,2,3,4,5,6,7,8,9};

        REQUIRE( Product(small_ints) == 362880);
        REQUIRE( Product(big_ints) == 3628800);

    }

    SECTION("Checking with negative nums and 0"){
        vector<int> two_neg = {-1,2,3,4,-5,6,7,8,9};
        vector<int> one_neg = {-1,2,3,4,5,6,7,8,9};
        vector<int> zero = {1,2,3,4,5,6,7,8,9,0};

        REQUIRE( Product(two_neg) == 362880);
        REQUIRE( Product(one_neg) == -362880);
        REQUIRE( Product(zero) == 0);

    }
}

