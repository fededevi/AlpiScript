#pragma once

class Expression;
class Add;
class Sub;
class Id;
class Int;
class Mul;
class Div;
class Mod;
class Int;
class Float;
class LessThan;
class LessEqual;
class GreaterEqual;
class GreaterThan;
class Equal;
class NotEqual;
class Not;
class Boolean;
class And;
class Or;

class ExpressionVisitor
{
public:
    virtual void *visit(const Add          * node, void *data) const = 0;
    virtual void *visit(const Sub          * node, void *data) const = 0;
    virtual void *visit(const Mul          * node, void *data) const = 0;
    virtual void *visit(const Div          * node, void *data) const = 0;
    virtual void *visit(const Mod          * node, void *data) const = 0;

    virtual void *visit(const Id           * node, void *data) const = 0;

    virtual void *visit(const Int          * node, void *data) const = 0;
    virtual void *visit(const Float        * node, void *data) const = 0;
    virtual void *visit(const Boolean      * node, void *data) const = 0;

    virtual void *visit(const LessThan     * node, void *data) const = 0;
    virtual void *visit(const LessEqual    * node, void *data) const = 0;
    virtual void *visit(const GreaterEqual * node, void *data) const = 0;
    virtual void *visit(const GreaterThan  * node, void *data) const = 0;
    virtual void *visit(const Equal        * node, void *data) const = 0;
    virtual void *visit(const NotEqual     * node, void *data) const = 0;
    virtual void *visit(const Not          * node, void *data) const = 0;

    virtual void *visit(const And          * node, void *data) const = 0;
    virtual void *visit(const Or           * node, void *data) const = 0;
};
