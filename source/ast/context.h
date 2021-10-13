#pragma once

#include <map>
#include <memory>
#include <string>

#include "expression.h"

class Literal;
class DataType;
class Context
{
public:
    Context();
    std::map<std::string, std::unique_ptr<Literal>> data;
    std::map<std::string, DataType *> types;

    bool isDeclared(const std::string &) const;
    bool isDefined(const std::string &) const;

    std::string toString() const;
};
