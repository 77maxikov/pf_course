#ifndef POINT_ARRAY_H
#define POINT_ARRAY_H
#include <cstddef>
#include "objects.h"

class PointArray{
private:
    size_t m_size;
    Point *data;
public:
    PointArray();
    //PointArray(const PointArray& ); // копирующий конструктор

    ~PointArray();
    void addPoint(Point val2add);
    size_t getSize()const;
    Point getElementByInd(size_t index/*номер элемента*/)const;

};

#endif // POINT_ARRAY_H
