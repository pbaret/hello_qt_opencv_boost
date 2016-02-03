cmake_minimum_required(VERSION 2.8.11)

project(helloQtOpenCV)

ADD_DEFINITIONS ( -O3 -Wall -Wextra -Wno-unused -g -lboost_system)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

#fin opencv package
find_package( OpenCV REQUIRED )

# Find the Qt5Widget module (if you need other packages from Qt, it is all the same. Example with Qt5Network: add 'find_package(Qt5Network)'
find_package(Qt5Widgets)

# Boost package
find_package( Boost 1.55.0 EXACT REQUIRED COMPONENTS thread date_time program_options filesystem system random regex )

# SOURCE CODE :
set ( SOURCES
main.cpp
utils.cpp
mainwindow.cpp
)

set ( HEADERS
utils.h
mainwindow.h
)

set ( UI_FORMS
mainwindow.ui
)

# Process .ui files into valid C++ ui_XXXX.h and store the list into variable UI_HEADERS
qt5_wrap_ui( UI_HEADERS ${UI_FORMS} )

# Tell CMake to create the helloworld executable
add_executable(helloQtOpenCV ${SOURCES} ${HEADERS} ${UI_HEADERS})


target_link_libraries(helloQtOpenCV Qt5::Widgets)      # Use the Widgets module from Qt 5.
target_link_libraries(helloQtOpenCV ${OpenCV_LIBS})    # Use OpenCV
target_link_libraries(helloQtOpenCV ${Boost_LIBRARIES})# Use Boost
