#ifndef EQU_TEST_H
#define EQU_TEST_H
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/*using namespace testing;*/
extern "C" {
#include "myfunc.h"
}
TEST(two_sol, test1){
    solve ret = equ(-1, 2, 15);
    ASSERT_EQ(ret.c, 2);
    ASSERT_EQ(ret.f, -3);
    ASSERT_EQ(ret.s, 5);
}
TEST(two_sol, test2){
    solve ret = equ(4, 0, -4);
    ASSERT_EQ(ret.c, 2);
    ASSERT_EQ(ret.f, -1);
    ASSERT_EQ(ret.s, 1);
}
TEST(two_sol, test3)
{
    solve ret = equ(3.76, 5.678, -4);
    ASSERT_EQ(ret.c, 2);
    ASSERT_NEAR(ret.f, -2.03330790367012, 0.000001);
    ASSERT_NEAR(ret.s, 0.5232015206913966, 0.000001);
}
TEST(one_sol, test2){
    solve ret = equ(1, -2.4, 1.44);
    ASSERT_EQ(ret.c, 1);
    ASSERT_EQ(ret.f, 1.2);
    ASSERT_EQ(ret.s, 1.2);
}
TEST(no_sol, test2){
    solve ret = equ(1, 1, 2);
    ASSERT_EQ(ret.c, 0);
    ASSERT_EQ(ret.f, 0);
    ASSERT_EQ(ret.s, 0);
}
TEST(infinitive_sol, test2){
    solve ret = equ(0, 0, 0);
    ASSERT_EQ(ret.c, 3);
    ASSERT_EQ(ret.f, 0);
    ASSERT_EQ(ret.s, 0);
}
TEST(linear, test1)
{
    solve ret = equ(0, 4, 0);
    ASSERT_EQ(ret.c, 1);
    ASSERT_EQ(ret.f, 0);
    ASSERT_EQ(ret.s, 0);
}
TEST(linear, test2)
{
    solve ret = equ(0, 2, 3);
    ASSERT_EQ(ret.c, 1);
    ASSERT_EQ(ret.f, -1.5);
    ASSERT_EQ(ret.s, -1.5);
}
TEST(uncorrect_data, test1)
{
    solve ret = equ(0, 0, 9);
    ASSERT_EQ(ret.c, -1);
    ASSERT_EQ(ret.f, 0);
    ASSERT_EQ(ret.s, 0);
}

#endif // EQU_TEST_H
