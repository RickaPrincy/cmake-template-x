#include <gtest/gtest.h>
#include <myProject/myProject.hpp>

TEST(substract_test, positive_test){
    EXPECT_EQ(MyProject::substract(5,5), 0);
    EXPECT_EQ(MyProject::substract(7,1), 6);
}

TEST(substract_test, negative_test){
    EXPECT_EQ(MyProject::substract(-5, -1), -4);
    EXPECT_EQ(MyProject::substract(-1,-1), 0);
}

TEST(substract_test, mixte_test){
    EXPECT_EQ(MyProject::substract(-5, 1), -6);
    EXPECT_EQ(MyProject::substract(-1,1), -2);
}