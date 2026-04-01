#include <iostream>

#include "include/nodes/Noeud.h"
#include "include/nodes/tasks/AssignerVariableNoeud.h"

int main() {
	nodes::tasks::AssignerVariableNoeud n(nullptr);
	n.execute();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
