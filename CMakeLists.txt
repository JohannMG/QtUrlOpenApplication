cmake_minimum_required(VERSION 3.5)

project(UrlOpenApp LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

#SET_TARGET_PROPERTIES(UrlOpenApp PROPERTIES MACOSX_BUNDLE TRUE)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(UrlOpenApp
  main.cpp
  mainwindow.cpp
  mainwindow.h
  mainwindow.ui
)

target_link_libraries(UrlOpenApp
    PRIVATE Qt5::Widgets)

# set customk plist for the app bundle?
# set_target_properties(UrlOpenApp PROPERTIES MACOSX_BUNDLE_INFO_PLIST Info.plist)
