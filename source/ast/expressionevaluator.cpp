#include "expressionevaluator.h"
#include "expression.h"
#include "datatype.h"
#include <stdexcept>
#include <iostream>

void * evaluateBinaryMethodCall(const BinaryExpression *node, const Name & name) {
    std::unique_ptr<Literal> left  = std::unique_ptr<Literal>(static_cast<Literal *>(node->left->evaluate()));
    std::unique_ptr<Literal> right = std::unique_ptr<Literal>(static_cast<Literal *>(node->right->evaluate()));

    MethodSignature ms = MethodSignature({name, {left->type, right->type}});

    if (!left->type->contains(ms))
        std::cout << "Undefined method -> " <<left->type->name << ":" << Method::signature(ms) << std::endl;

    Method method(left->type->methods.at(ms));

    return method.implementation({left.get(), right.get()});
}

void *ExpressionEvaluator::visit(const Add *node, void *) const{
    return evaluateBinaryMethodCall(node, Name("+"));
}

void *ExpressionEvaluator::visit(const Sub *node, void *data) const{
    return evaluateBinaryMethodCall(node, Name("-"));
}

void *ExpressionEvaluator::visit(const Mul *node, void *data) const{
    return evaluateBinaryMethodCall(node, Name("*"));
}

void *ExpressionEvaluator::visit(const Div *node, void *data) const{
    return evaluateBinaryMethodCall(node, Name("/"));
}

void *ExpressionEvaluator::visit(const Mod *node, void *data) const{
    return evaluateBinaryMethodCall(node, Name("%"));
}

void *ExpressionEvaluator::visit(const Int *node, void *) const{
    return new Int(node->value);
}

void *ExpressionEvaluator::visit(const Id *node, void *) const{
    return new Id(node->value);
}

void *ExpressionEvaluator::visit(const Float *node, void *) const{
    return new Float(node->value);
}

void *ExpressionEvaluator::visit(const Boolean *node, void *) const{
    return new Boolean(node->value);
}


void *ExpressionEvaluator::visit(const LessThan *node, void *) const{
    return evaluateBinaryMethodCall(node, Name("<"));
}

void *ExpressionEvaluator::visit(const LessEqual *node, void *) const{
    return evaluateBinaryMethodCall(node, Name("<="));
}

void *ExpressionEvaluator::visit(const GreaterEqual *node, void *) const{
    return evaluateBinaryMethodCall(node, Name(">="));
}

void *ExpressionEvaluator::visit(const GreaterThan *node, void *) const{
    return evaluateBinaryMethodCall(node, Name(">"));
}

void *ExpressionEvaluator::visit(const Equal *node, void *) const{
    return evaluateBinaryMethodCall(node, Name("=="));
}

void *ExpressionEvaluator::visit(const NotEqual *node, void *) const{
    return evaluateBinaryMethodCall(node, Name("!="));
}

void *ExpressionEvaluator::visit(const Not *node, void *) const{
}

void *ExpressionEvaluator::visit(const And *node, void *) const{
    return evaluateBinaryMethodCall(node, Name("&&"));
}

void *ExpressionEvaluator::visit(const Or *node, void *) const{
    return evaluateBinaryMethodCall(node, Name("||"));
}

void *ExpressionEvaluator::visit(const TypeId *node, void *data) const
{

}

void *ExpressionEvaluator::visit(const Parameter *node, void *data) const
{

}

void *ExpressionEvaluator::visit(const Method *node, void *data) const
{

}



