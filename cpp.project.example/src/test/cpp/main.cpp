#include <iostream>
#include <string>
#include "gtest/gtest.h"
#include "MeetserieTest.h"


using namespace std;

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
