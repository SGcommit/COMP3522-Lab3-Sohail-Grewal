//
// Created by Sohail on 2024-09-18.
//
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "myStack.hpp"
TEST_CASE("A new stack is empty", "testTag1") {
    MyStack tester;

    REQUIRE(tester.isEmpty() == true);
    REQUIRE(tester.isFull() == false);
}
