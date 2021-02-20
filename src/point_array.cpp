#include <cstdlib>
#include "point_array.h"

#include <iostream>



PointArray::PointArray(){
    std::cout << "PointArray constructor called" << std::endl;
    m_size = 0;
    data = nullptr;
}

PointArray::PointArray(const PointArray& original){
    std::cout << "PointArray copy constructor called" << std::endl;

    m_size = original.m_size;
    if (m_size == 0)
        data = nullptr;
    else{
        data = new Point[m_size];
        for (size_t k = 0 ;k < m_size;++k)
            data[k] = original.data[k];
    }
}

PointArray::~PointArray(){
    std::cout << "PointArray destructor called" << std::endl;
    if ( data != nullptr )
        delete[] data;
}
void PointArray::addPoint(Point val2add){
    if (m_size == 0) {//if (array->data == nullptr)
        data = new Point[1];
        data[0] = val2add;
        m_size = 1;
    }
    else{
        Point *tmp = new Point[m_size + 1];
        // скопировать все элементы из array->data в tmp
        delete[] data;
        data = tmp;
        m_size ++;
    }
}
size_t PointArray::getSize()const{return m_size;}
Point PointArray::getElementByInd(size_t index/*номер элемента*/)const{
    //array->size = 0;
    if (m_size <= index )
        //Ошибка !!!
        exit(1);
    else
        return data[index] ; // *(data + index)
}

