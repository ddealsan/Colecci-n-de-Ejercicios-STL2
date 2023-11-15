#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <deque>

int main() {
    // Vector
    std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);

    // Map
    std::map<std::string, int> edad;
    edad["Juan"] = 25;
    edad.erase("Juan");

    // Set
    std::set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6);
    conjunto.erase(1);

    // Deque
    std::deque<double> precios {10.5, 20.3, 15.8};
    precios.push_front(5.2);

    // Imprimir elementos del deque
    std::cout << "Elementos del deque: ";
    for (const auto& precio : precios) {
        std::cout << precio << " ";
    }
    std::cout << std::endl;

    return 0;
}