#include "Fibonacci.h"
#include <CppUTest/CommandLineTestRunner.h>
TEST_GROUP(GroupFibo) { };
TEST(GroupFibo, test_Fibo_1) { // premier test unitaire
    int result = fibonacciIteratif(7);
    CHECK_EQUAL(13, result);
}
TEST(GroupFibo, test_Fibo_2) { // deuxième test unitaire
    int result = fibonacciRecursif(7);
    CHECK_EQUAL(13, result);
}
