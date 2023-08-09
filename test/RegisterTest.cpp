//
// Created by sk on 06/08/23.
//
#include <string>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../Register.h"

class RegisterTest : public testing::Test{
public:
protected:
Register aRegister;
};

TEST_F(RegisterTest, createWindow){
    aRegister.window("titolo");
    string title = aRegister.name;
    ASSERT_THAT(aRegister.geTitle(), title);
};