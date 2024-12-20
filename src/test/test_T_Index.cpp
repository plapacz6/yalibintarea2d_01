/*
Copyright 2024-2024 plapacz6@gmail.com

This file is part of yalibintarea2d_01.

yalibintarea2d_01 is free software: you can redistribute it and/or modify it
under the terms of the GNU Lesser General Public License as published by the
Free Software Foundation, either version 3 of the License, or (at your option)
any later version.

yalibintarea2d_01 is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
details.

You should have received a copy of the GNU Lesser General Public License along
 with yalibintarea2d_01. If not, see <https://www.gnu.org/licenses/>.
*/


#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

#include "yalibintarea2d_01/T_Index.h"

#include <cstdlib>

using namespace testing;
using namespace integers_measured_area_operation_yalibintarea2d_01;

TEST(T_Index, T_Index)
{
    T_Index<size_t, int> idx0;
    EXPECT_EQ(idx0.col, 0);
    EXPECT_EQ(idx0.row, 0);
    idx0.col = 1;
    idx0.row = 2;
    EXPECT_EQ(idx0.col, 1);
    EXPECT_EQ(idx0.row, 2);
    T_Index<size_t, int> idx1{3, 4};
    EXPECT_EQ(idx1.col, 3);
    EXPECT_EQ(idx1.row, 4);
    idx1.col = 5;
    idx1.row = 6;
    EXPECT_EQ(idx1.col, 5);
    EXPECT_EQ(idx1.row, 6);
    // ASSERT_THAT(0, Eq(0));
}
