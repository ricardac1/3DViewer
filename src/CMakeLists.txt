cmake_minimum_required(VERSION 3.10)
project(3DViewer VERSION 2.0 )

# Эти настройки включают автоматическую обработку .ui (Qt Designer), .moc (метаобъекты), и .qrc (ресурсы) файлов.
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Установка стандарта C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Добавление флагов компиляции для всех целей
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra")

# Добавляется флаг компиляции -O3 для максимальной оптимизации.
add_compile_options(-O3)

find_package(Qt6 REQUIRED COMPONENTS Widgets OpenGLWidgets)

add_executable(3DViewer
        desktop/main.cpp
        desktop/mainwindow.cpp
        desktop/mainwindow.h
        desktop/mainwindow.ui
)

target_link_libraries(3DViewer PRIVATE Qt6::Widgets Qt6::OpenGLWidgets)

# Добавление исполняемого файла
# add_executable(3DViewer main.cpp)   

# Добавляем подпроект Qt
# add_subdirectory(./desktop)






