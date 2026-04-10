cmake_minimum_required(VERSION 4.2)
project(8inf334_TP3)

set(CMAKE_CXX_STANDARD 20)

add_executable(8inf334_TP3 main.cpp
        library/json.hpp
        include/nodes/INoeud.h
        source/nodes/tasks/TacheNoeud.cpp
        include/nodes/tasks/TacheNoeud.h
        source/nodes/tasks/EcrireVariableNoeud.cpp
        include/nodes/tasks/EcrireVariableNoeud.h
        source/nodes/conditions/ConditionNoeud.cpp
        include/nodes/conditions/ConditionNoeud.h
        source/Processus.cpp
        include/Processus.h
        source/factories/ProcessusFabrique.cpp
        include/factories/ProcessusFabrique.h
        source/factories/NoeudFabrique.cpp
        include/factories/NoeudFabrique.h
        source/Contexte.cpp
        include/Contexte.h
        source/nodes/tasks/EffacerVariableNoeud.cpp
        include/nodes/tasks/EffacerVariableNoeud.h
        source/nodes/DepartNoeud.cpp
        include/nodes/DepartNoeud.h
        source/nodes/SortieNoeud.cpp
        include/nodes/SortieNoeud.h
        source/nodes/tasks/LireVariableNoeud.cpp
        include/nodes/tasks/LireVariableNoeud.h
        include/Enregistreur.h
        source/Enregistreur.cpp
        source/nodes/conditions/EgalConditionNoeud.cpp
        include/nodes/conditions/EgalConditionNoeud.h
        source/nodes/tasks/AfficherTexteNoeud.cpp
        include/nodes/tasks/AfficherTexteNoeud.h
        source/nodes/conditions/PlusPetitConditionNoeud.cpp
        include/nodes/conditions/PlusPetitConditionNoeud.h
        source/nodes/conditions/PlusGrandConditionNoeud.cpp
        include/nodes/conditions/PlusGrandConditionNoeud.h
        include/nodes/tasks/IncrementerVariableNoeud.h
        source/nodes/tasks/IncrementerVariableNoeud.cpp)
