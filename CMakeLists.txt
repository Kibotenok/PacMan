﻿# CMakeList.txt: проект CMake для PacMan; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("PacMan")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (PacMan "PacMan.cpp" "PacMan.h")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
