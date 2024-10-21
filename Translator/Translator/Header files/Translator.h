#pragma once
#include <string>

class Translator {
public:
    virtual ~Translator() = default;
    virtual void translate() = 0; 
};
