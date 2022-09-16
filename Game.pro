QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

win32:RC_ICONS += pixil-frame-0-_37_.ico

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    background.cpp \
    game.cpp \
    lose.cpp \
    main.cpp \
    player.cpp \
    skin_menu.cpp \
    start_movie.cpp \
    widget.cpp \
    win.cpp

HEADERS += \
    background.h \
    game.h \
    lose.h \
    player.h \
    skin_menu.h \
    start_movie.h \
    widget.h \
    win.h

FORMS += \
    game.ui \
    lose.ui \
    skin_menu.ui \
    start_movie.ui \
    widget.ui \
    win.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc
