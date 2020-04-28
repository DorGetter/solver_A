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
            CHECK(solve(2*x^2 -64==0 ) == 5.6568542);
            CHECK(solve(x^2 -16==0 ) == 4);
            CHECK(solve(9*x^2 == 729) == 1);
            CHECK(solve((x+2)*(x-3) == 0) == -2);
            CHECK(solve((x+2)*(x-3) == 0) == 3);
            CHECK(solve((x+12)*(6+x-3) == 0) == -12);
            CHECK(solve((x+12)*(6+x-3) == 0) == 3);
            CHECK(solve(-1*x^2 + -22*x + 7104 == 0) == 74);
            CHECK(solve(-1*x^2 + -22*x + 7104 == 0) == -96);
            CHECK(solve(-6*x^2 + 90*x + 96  == 0) == -1);
            CHECK(solve(-6*x^2 + 90*x + 96  == 0) == 16);
            CHECK(solve(25*x + 6 == 99*x^2) == 0.15041102);
            CHECK(solve(-99*x^2 + 25*x + 6 == 0) == -0.40293628);
            CHECK(solve((3*x)*x + x*7.5 + 16*x == -40) == -2.5);
            CHECK(solve((3*x)*x + x*7.5 + 16*x == -40) == -5.33333333);
            CHECK(solve((x-2)*(x+1) == (x-1)*(x+3) == 0.3333333 ));
            CHECK(solve((x+1)^2 == 2*(x-3)+2) == -3);
            CHECK(solve((x+1)^2 == 2*(x-3)+2) == 3);
            CHECK(solve(x^2 + 3*x +1  == (x-2)^2) == 0.42857142);
            CHECK(solve((55*x^2 -15*x - 50)/5 == 0) == -5);
            CHECK(solve((55*x^2 -15*x - 50)/5 == 0) == 2);
}

TEST_CASE("Complex Variable Operator MIX")
{
    ComplexVariable x;
    CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve((x-2)*(x-3)+x^2 == 5*x +6)== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== 0);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2-6 )== -3i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);
            CHECK(solve(x^2 + 12*x + 1 == (6*x)*2 )== -1i);


}