/**
test.cpp
Purpose: Unit Test Fibonacci Tested Project
@author Gar Diu
@version 1.0 24/09/2015
*/

#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

void test()
{
    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;

    std::for_each(
        in(std::cin), in(), std::cout << (_1 * 3) << " " );
}