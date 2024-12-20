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

#ifndef T_YALIBINTAREA2D_01_SIZE_H
#define T_YALIBINTAREA2D_01_SIZE_H

namespace integers_measured_area_operation_yalibintarea2d_01 {

template <typename SIZE>
class T_Size
{
public:
    size_t width;
    size_t height;
    explicit T_Size();
    explicit T_Size(SIZE width_, SIZE height_);
};


/* ---------------- T_SIZE --- impl ------------------------*/

template <typename SIZE>
T_Size<SIZE>::T_Size()
    : width {0}, height {0}
{}

template <typename SIZE>
T_Size<SIZE>::T_Size(SIZE width_, SIZE height_)
    : width {width_}, height {height_}
{}

} //namespace integers_measured_area_operation_yalibintarea2d_01 {

#endif // T_YALIBINTAREA2D_01_SIZE_H
