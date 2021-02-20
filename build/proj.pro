TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ../src/main.cpp \
        ../src/point_array.cpp

HEADERS += \
    ../include/objects.h \
    ../include/point_array.h

INCLUDEPATH += \
    ../include
