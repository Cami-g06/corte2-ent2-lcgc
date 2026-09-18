#include "hamming.h"
#include <cassert>
#include <iostream>
#include <stdexcept>

int main() {
    assert(hamming::compute("GATTACA", "GATTACA") == 0);
    assert(hamming::compute("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT") == 7);
    bool exceptionThrown = false;
    try { hamming::compute("A", "AG"); }
    catch (const std::domain_error&) { exceptionThrown = true; }
    assert(exceptionThrown);
    std::cout << "Hamming Distance: 3 pruebas correctas\n";
}
