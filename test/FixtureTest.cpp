//
// Created by sk on 06/08/23.
//
#include <string>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../Register.h"
#include "../Register.cpp"
#include "../Activity.h"
#include "../Activity.cpp"



class ActivityTest : public testing::Test{
protected:
    Activity *activity;
    ActivityTest(){
        activity = new Activity("title");
    };
    ~ActivityTest() override = default;

    void SetUp() override{
        activity = new Activity("titolo");
    };
    void TearDown() override{
        delete activity;
    };
};

TEST_F(ActivityTest, createActivity){
    ASSERT_THAT("name", activity->getName());
}

class RegisterTest : public testing::Test{
protected:
    Register *aRegister;
    RegisterTest(){
        aRegister = new Register("title");
    };
    ~RegisterTest() override = default;

    void SetUp() override{
        aRegister = new Register("titolo");
    };
    void TearDown() override{
        delete aRegister;
    };
};


TEST_F(RegisterTest, canCreateWindow){
    ASSERT_EQ(true, aRegister->window(""));
}

TEST_F(RegisterTest, canCreateRegister){
    string check = aRegister->geTitle();
    ASSERT_THAT("titolo", check);
}


