#pragma once

#include <string>

#include "node.h"

// define the list class
class list {
    private:
        node *head;

    public:
        list();
        void insert(int value);
        std::string to_string();
        int search(int value);
};