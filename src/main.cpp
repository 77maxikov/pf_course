#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

/*struct Translation{
    char ru[81];
    char en[81];
};*/
struct Translation{
    char *ru;
    char *en;
};
struct Array{
    size_t size;
    Translation *data;
};

struct DoubleArray{
    size_t size;
    double *data;
};

void addDouble(DoubleArray* array,double val2add){
    if (array->size == 0) {//if (array->data == nullptr)
        array->data = new double[1];
        array->data[0] = val2add;
        array->size = 1;
    }
    else{
        double *tmp = new double[array->size + 1];
        // скопировать все элементы из array->data в tmp
        delete[] array->data;
        array->data = tmp;
        array->size ++;
    }
}

double getElementByInd(const DoubleArray* array,size_t index/*номер элемента*/){
    //array->size = 0;
    if (array == nullptr ||  array->size <= index )
        //Ошибка !!!
        exit(1);
    else
        return array->data[index] ; // *(array->data + index)
}





#define Data double

struct Node{
    Data data;
    Node *next;
    Node *prev;
};

struct DoubleList {
    Node *first;
    Node *last;
    size_t size;
};

//double getElementByInd(const DoubleList* list,size_t index/*номер элемента*/)

double getData(Node *marker){
    return  marker->data;
}

void moveNext(Node *marker){
    marker = marker->next;
}

bool canMoveNext(Node* marker){
    return marker->next != nullptr;
}

void writeToFile(const DoubleArray *array){
    for (size_t k = 0;k < array->size;++k){
        // WriteToFile(array->data[k])
    }
}

void writeToFile(const DoubleList *list){
    Node *marker = list->first;
    do{
        // WriteToFile(getData(marker));
        moveNext(marker);
    }
    while ( canMoveNext(marker) );

}

struct ArrayMarker{
    DoubleArray *array;
    size_t position;
};

double getData(ArrayMarker *marker){

}

void moveNext(ArrayMarker *marker){

}

bool canMoveNext(ArrayMarker * marker){

}

void writeToFile(DoubleArray *array){

    ArrayMarker *marker = new ArrayMarker;
    marker->array = array;
    marker->position = 0;
    do{
        // WriteToFile(getData(marker));
        moveNext(marker);
    }
    while ( canMoveNext(marker) );

}

bool findElementUnordered(DoubleArray* ,double val2find){

}

bool findElementOrdered(DoubleArray* ,double val2find){

}

bool findElementUnordered(DoubleList* ,double val2find){

}

bool findElementOrdered(DoubleList* ,double val2find){

}


void addDouble(DoubleList* list,double val2add){
    if (list->size == 0){
        list->first = new Node;
        list->first->data = val2add;
        list->first->next = nullptr;
        list->size = 1;
        list->last = list->first;
    }
    else{
        Node* tmp = new Node;
        tmp->data = val2add;
        tmp->next = nullptr;

        list->last->next = tmp;
        list->last = tmp;
        /*
        Node *marker = list->first;
        while ( marker->next != nullptr ){
            marker = marker->next;
        }
        marker->next = tmp;*/
    }
}







void addTranslation(Array *array, const char * en,    const char *ru){


    // Предусмотреть ситуацию когда перевод уже есть в словаре??
}
//Translation findTranslation(Array *array,const char * en ){
//int findTranslation(Array *array,const char * en,char* ru ){
Translation* findTranslation(Array *array,const char * en ){

    if ( false /*условие*/){
        cout << "Не нашлось :(" << endl;
        return nullptr;
        //addTranslation()
        //exit(1);
    }

}
void deleteTranslation(Array *array,const char * en){

}

void updateTranslation(Array *array, const char * en, const char *ru){
    deleteTranslation(array,en);
    addTranslation(array,en,ru);
}

Array loadTranslations(char* filename){ // Чтение данных словаря из файла

}

void saveTranslations(Array arr,char* filename){ // Запись данных словаря в файл filename
    //fs.write((&arr),sizeof(arr));
}
#include <cmath>

enum Colors{COL_RED,COL_GREEN,COL_BLUE};

struct Point{
    //Colors color;
    int x;
    int y;
};

struct Segment{
    //Colors color;
    Point p1;
    Point p2;
};

struct Circle{
    //Colors color;
    Point center;
    int r;
};







struct PointArray{
    size_t size;
    Point *data;
};

struct SegmentArray{
    size_t size;
    Segment *data;
};

struct CircleArray{
    size_t size;
    Circle *data;
};

void addPoint(PointArray* array,Point val2add){
    if (array->size == 0) {//if (array->data == nullptr)
        array->data = new Point[1];
        array->data[0] = val2add;
        array->size = 1;
    }
    else{
        Point *tmp = new Point[array->size + 1];
        // скопировать все элементы из array->data в tmp
        delete[] array->data;
        array->data = tmp;
        array->size ++;
    }
}

void outputPoints(PointArray* array){
    for (size_t k = 0; k< array->size ;++k){
        // Output single point
    }
    //array->size = 0;
    array->data = nullptr;

}

int main(int argc,char* argv[])
{
    PointArray pointArray = {0,nullptr};

    Point p1;
    p1.x = 1;p1.y = 2;
    addPoint(&pointArray,p1);
    Point p2 = {2,3};
    addPoint(&pointArray,p2);

    outputPoints(&pointArray);

    Point p3 = {5,3};
    addPoint(&pointArray,p3);
    Point p4 = {6,4};
    addPoint(&pointArray,p4);

    outputPoints(&pointArray);








    return 0;
}
