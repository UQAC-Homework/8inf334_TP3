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
        source/nodes/tasks/AfficherTexteNoeud.cpp
        include/nodes/tasks/AfficherTexteNoeud.h
        include/nodes/tasks/IncrementerVariableNoeud.h
        source/nodes/tasks/IncrementerVariableNoeud.cpp
        include/strategies/IStrategie.h
        include/strategies/EgalStrategie.h
        source/strategies/EgalStrategie.cpp
        include/strategies/PlusGrandStrategie.h
        source/strategies/PlusGrandStrategie.cpp
        include/strategies/PlusPetitStrategie.h
        source/strategies/PlusPetitStrategie.cpp)
