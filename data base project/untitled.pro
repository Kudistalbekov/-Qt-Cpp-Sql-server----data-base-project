QT       += core gui
QT       +=sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin_page.cpp \
    check.cpp \
    instructor_page.cpp \
    main.cpp \
    mainwindow.cpp \
    mysql.cpp \
    student_page.cpp \

HEADERS += \
    admin_page.h \
    check.h \
    instructor_page.h \
    mainwindow.h \
    mysql.h \
    student_page.h \

FORMS += \
    admin_page.ui \
    instructor_page.ui \
    mainwindow.ui \
    student_page.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc

DISTFILES += \
    picture/iconfinder_key_1055040.png
