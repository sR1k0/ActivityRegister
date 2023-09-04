//
// Created by sk on 06/08/23.
//
#include <QApplication>
#include <QtWidgets>
#include <string>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../Register.h"
#include "../Register.cpp"
#include "../Activity.h"
#include "../Activity.cpp"
#include "../qtregister.h"
#include "../qtregister.cpp"
#include "/home/sk/CLionProjects/ActivityRegister/cmake-build-debug/ActivityRegister_autogen/include/ui_qtregister.h"

class QTRegisterTest : public testing::Test{
protected:
    REG_I::qtregister* qtregister;
    QTRegisterTest(){
        qtregister = new REG_I::qtregister;
    }
    virtual ~QTRegisterTest(){
        delete qtregister;
    }
    void SetUp(){
        qtregister = new REG_I::qtregister();
    }
    void TearDown(){
        delete qtregister;
    }
};


TEST_F(QTRegisterTest, canCreateWindow){
}


class ActivityTest : public testing::Test{
protected:
    Activity *activity;
    ActivityTest(){
        activity = new Activity("name");
    };
    ~ActivityTest() override = default;

    void SetUp() override{
        activity = new Activity("name");
    };
    void TearDown() override{
        delete activity;
    };
};

TEST_F(ActivityTest, createActivity){
    ASSERT_THAT("name", activity->getName());
}

TEST_F(ActivityTest, TypeDescritption){
    string d;
    EXPECT_EQ(4, activity->typeDescription(d));
    ASSERT_THAT("ciao", activity->getDescription());
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
