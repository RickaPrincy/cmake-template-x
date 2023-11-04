#include <gtest/gtest.h>
#include <myProject/myProject.hpp>

TEST(add_test, positive_test){
    EXPECT_EQ(MyProject::add(5,5), 10);
    EXPECT_EQ(MyProject::add(7,1), 8);
}

TEST(add_test, negative_test){
    EXPECT_EQ(MyProject::add(-5, -1), -6);
    EXPECT_EQ(MyProject::add(-1,-1), -2);
}

TEST(add_test, mixte_test){
    EXPECT_EQ(MyProject::add(-5, 1), -4);
    EXPECT_EQ(MyProject::add(-1,1), 0);
}