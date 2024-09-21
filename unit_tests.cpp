#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "myStack.hpp"
TEST_CASE("A new stack is empty", "testTag1") {
    MyStack tester;

    REQUIRE(tester.isEmpty() == true);
    REQUIRE(tester.isFull() == false);
}
TEST_CASE("Test push and pop numbers", "testTag2") {
    MyStack tester;
    tester.push(1);
    tester.push(2);
    tester.push(3);

    REQUIRE(tester.top() == 3);
    tester.pop();
    REQUIRE(tester.top() == 2);
    tester.pop();
    REQUIRE(tester.top() == 1);
    tester.pop();

    REQUIRE(tester.top() == -1);
}

TEST_CASE("Test isFull()","testTag3") {
    MyStack tester;
    for(int i = 0; i < 10; i++) {
        tester.push(i);
    }
    REQUIRE(tester.push(10) == false);
    REQUIRE(tester.isFull() == true);
}

TEST_CASE("Test print()","testTag4") {
    MyStack tester;
    tester.push(1);
    tester.push(2);
    tester.push(3);
    CHECK(tester.print()=="Numbers in stack (bottom to top): 1 2 3 ");
}