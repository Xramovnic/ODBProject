#------------------------------------------------- 
#
# Project created by QtCreator 2015-03-13T16:50:52
#
#-------------------------------------------------

QT += core gui
QT += widgets

TEMPLATE = app


OBJECTS_DIR = obj
MOC_DIR = moc
INCLUDEPATH += ../qserialdevice/src/qserialdeviceenumerator ../qserialdevice/src/qserialdevice
SOURCES += main.cpp mainwindow.cpp \
    elm.cpp
HEADERS  += mainwindow.h \
    elm.h \
    OBD.h
FORMS    += mainwindow.ui


CONFIG(debug, debug|release) {
    QMAKE_LIBDIR += ../qserialdevice/src/build/debug
    LIBS += -lqserialdeviced
    DESTDIR = debug
    TARGET = OBD-Scaner

} else {
    QMAKE_LIBDIR += ../qserialdevice/src/build/release
    LIBS += -lqserialdevice
    DESTDIR = release
    TARGET = OBD-Scaner

}

win32 {
    LIBS += -lsetupapi -luuid -ladvapi32
}
unix:!macx {
    LIBS += -ludev
}
