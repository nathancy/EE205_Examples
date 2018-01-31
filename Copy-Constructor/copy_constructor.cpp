#include "copy_constructor.hpp"

Pencil::Pencil() : color(""),
                   cost(0)     {}

Pencil::Pencil(std::string c, int initial_cost) : color(c),
                                                  cost(initial_cost) {}

Pencil::Pencil(const Pencil &old) : color(old.color),
                                    cost(old.cost)   {}

std::string Pencil::getColor() {
    return color;
}

int Pencil::getCost() {
    return cost;
}
