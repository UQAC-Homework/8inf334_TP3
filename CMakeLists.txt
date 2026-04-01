cmake_minimum_required(VERSION 4.2)
project(8inf334_TP3)

set(CMAKE_CXX_STANDARD 20)

add_executable(8inf334_TP3 main.cpp
        library/json.hpp
        include/nodes/Noeud.h
        source/nodes/tasks/TacheNoeud.cpp
        include/nodes/tasks/TacheNoeud.h
        source/nodes/tasks/AssignerVariableNoeud.cpp
        include/nodes/tasks/AssignerVariableNoeud.h
        source/nodes/conditions/ConditionNoeud.cpp
        include/nodes/conditions/ConditionNoeud.h
        source/Processus.cpp
        include/Processus.h)
