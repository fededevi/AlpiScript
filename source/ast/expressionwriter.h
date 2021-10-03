#pragma once

#include "expressionvisitor.h"
#include <string>

class MultiExpression;
class Expression;
class Add;
class Sub;
class Id;
class Int;
class Mul;
class Div;
class Mod;
class Int;

class ExpressionWriter : public ExpressionVisitor
{
public:
    virtual void *visit(const Add * node, void *data) const;
    virtual void *visit(const Sub * node, void *data) const;
    virtual void *visit(const Mul * node, void *data) const;
    virtual void *visit(const Div * node, void *data) const;
    virtual void *visit(const Mod * node, void *data) const;
    virtual void *visit(const Int * node, void *data) const;
    virtual void *visit(const Id * node, void *data) const;

private:
    void * writeMultiOperandOperation(const MultiExpression * e, void * data, const std::string &  op) const;
};