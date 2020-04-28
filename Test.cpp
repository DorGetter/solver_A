//
// Created by dor on 28/04/2020.
//

#include <iostream>
#include <string>
#include<complex>
#include "doctest.h"
#include "solver.hpp"

using namespace std;

using solver::solve, solver::RealVariable, solver::ComplexVariable;
///Real Variable...
TEST_CASE("Real Variable Operator+/Operator- :  ()+/-x = +/-(Random Number) ")
{
    RealVariable x;
            CHECK(solve(x == 1) == 1);
            CHECK(solve(x+2 == 1) == -1);
            CHECK(solve(15+x-1 == 1) == -13);
            CHECK(solve(15+x-1 == 1+16) == 3);
            CHECK(solve(x+x+x == 21) == 7);
            CHECK(solve(x+x+x == 22+x) == 11);
            CHECK(solve(x+x+2 == 12+x) == 10);
}

TEST_CASE("Real Variable Operator * : ()*x +/- () == +/-/*(Random Number)")
{
    RealVariable x;

            CHECK(solve(1*x == 0) == 0);
            CHECK(solve(2*x*3 == 6) == 1);
            CHECK(solve(2*2*x*2 == 12) == 2);
            CHECK(solve(x*x == 0) == 0);
            CHECK(solve(x*x*2 == 72) == 6)  ;

}
TEST_CASE("Real Variable Operator MIX")
{
    RealVariable x;
            CHECK(1.6666666 == solve(6 * x ^ 2 + 11 * x - 35 == 0));
            CHECK(1.6666666 == solve(6 * x ^ 2 + 11 * x - 35 == 0));




}