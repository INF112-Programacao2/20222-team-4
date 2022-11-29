QT       += core gui sql

QT += widgets
greaterThan(QT_MAJOR_VERSION, 4):

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cadastrofuncionarios.cpp \
    janelaprincipal.cpp \
    main.cpp \
    janelalogin.cpp

HEADERS += \
    cadastrofuncionarios.h \
    janelalogin.h \
    janelaprincipal.h

FORMS += \
    cadastrofuncionarios.ui \
    janelalogin.ui \
    janelaprincipal.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
