TEMPLATE = app

QT += qml quick widgets

HEADERS += cpuinforeader.h

SOURCES += main.cpp \
    cpuinforeader.cpp

RESOURCES += qml.qrc

# Default rules for deployment.
include(deployment.pri)

