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

#ifndef T_YALIBINTAREA2D_01_INDEX_H
#define T_YALIBINTAREA2D_01_INDEX_H

namespace integers_measured_area_operation_yalibintarea2d_01 {

template <typename IDX, typename SIDX>
class T_IndexShift;

template <typename IDX, typename SIDX>
class T_Index
{
public:
    IDX col;
    IDX row;    
    explicit T_Index();
    explicit T_Index(IDX col_, IDX row_);

    T_Index<IDX, SIDX> operator+(const T_IndexShift<IDX, SIDX>& shift) const;
    // T_Index operator+(T_IndexShift shift) const;     //!!! ambiguity for l-value
};

template <typename IDX, typename SIDX>
class T_IndexShift
{
public:
    SIDX x;
    SIDX y;
    T_IndexShift();
    T_IndexShift(SIDX x_, SIDX y_);
    T_Index<IDX, SIDX> operator+(const T_Index<IDX, SIDX>& idx) const;    
};



/* ---------------- T_INDEX --- impl ------------------------*/

template <typename IDX, typename SIDX>
T_Index<IDX, SIDX>::T_Index()
    : col {0}, row {0}
{}


template <typename IDX, typename SIDX>
T_Index<IDX, SIDX>::T_Index(IDX col_, IDX row_)
    : col {col_}, row {row_}
{}


template <typename IDX, typename SIDX>
T_Index<IDX, SIDX> T_Index<IDX, SIDX>::operator+(const T_IndexShift<IDX, SIDX>& shift) const {
    return T_Index {this->col + shift.x, this->row + shift.y };
}


/* ---------------- T_INDEX_SHIFT --- impl ------------------------*/

template <typename IDX, typename SIDX>
T_IndexShift<IDX, SIDX>::T_IndexShift() {}

template <typename IDX, typename SIDX>
T_IndexShift<IDX, SIDX>::T_IndexShift(SIDX x_, SIDX y_)
    : x {x_}, y {y_}
{}

template <typename IDX, typename SIDX>
T_Index<IDX, SIDX> T_IndexShift<IDX, SIDX>::operator+(const T_Index<IDX, SIDX>& idx) const    
{
    return T_Index {idx.col + x, idx.row + y};
}

} //namespace integers_measured_area_operation_yalibintarea2d_01

#endif // T_YALIBINTAREA2D_01_INDEX_H
