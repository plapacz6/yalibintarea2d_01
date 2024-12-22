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

#ifndef T_YALIBINTAREA2D_01_RECT_H
#define T_YALIBINTAREA2D_01_RECT_H

#include "T_Index.h"
#include "T_Size.h"

namespace integers_measured_area_operation_yalibintarea2d_01 {


template <typename IDX, typename SIDX, typename SIZE>
class T_Rect
{
public:
    IDX col;
    IDX row;
    SIZE width;
    SIZE height;
    T_Rect();
    T_Rect(IDX col_, IDX row_, SIZE width_, SIZE height_);
    T_Rect operator+(const T_IndexShift<IDX, SIDX>& shift) const;
};


/* ---------------- T_RECT --- impl ------------------------*/

template <typename IDX, typename SIDX, typename SIZE>
T_Rect<IDX, SIDX, SIZE>::T_Rect() {}

template <typename IDX, typename SIDX, typename SIZE>
T_Rect<IDX, SIDX, SIZE>::T_Rect(IDX col_, IDX row_, SIZE width_, SIZE height_)
    : col {col_}, row {row_}, width {width_}, height {height_}
{}

template <typename IDX, typename SIDX, typename SIZE>
T_Rect<IDX, SIDX, SIZE> T_Rect<IDX, SIDX, SIZE>::operator+(const T_IndexShift<IDX, SIDX>& shift) const
{
    return T_Rect {col + shift.x, row + shift.y, width, height};
}

} //namespace integers_measured_area_operation_yalibintarea2d_01 {

#endif // T_YALIBINTAREA2D_01_RECT_H
