TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    program.cpp \
    funcs.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    funcs.h

