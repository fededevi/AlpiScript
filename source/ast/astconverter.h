#pragma once

#include "../javacc/generated/ParserVisitor.h"

class Expression;
class Program;
class UnaryExpression;
class BinaryExpression;
namespace AlpiScript {

class AstConverter: public ParserVisitor {

public:
    Expression * parseExpression(const std::string & input);
    Program * parseProgram(const std::string & input);

    virtual void *visit(const SimpleNode *node, void *data) override;
    virtual void *visit(const ASTStart *node, void *data) override;
    virtual void *visit(const ASTAdd *node, void *data) override;
    virtual void *visit(const ASTMult *node, void *data) override;
    virtual void *visit(const ASTIdentifier *node, void *data) override;
    virtual void *visit(const ASTInteger *node, void *data) override;
    virtual void *visit(const ASTString *node, void *data) override;
    virtual void *visit(const ASTSub *node, void *data) override;
    virtual void *visit(const ASTModule *node, void *data) override;
    virtual void *visit(const ASTDivision *node, void *data) override;
    virtual void *visit(const ASTNegative *node, void *data) override;
    virtual void *visit(const ASTFloat *node, void *data) override;
    virtual void *visit(const ASTBoolean *node, void *data) override;
    virtual void *visit(const ASTLessThan *node, void *data) override;
    virtual void *visit(const ASTLessEqual *node, void *data) override;
    virtual void *visit(const ASTGreaterEqual *node, void *data) override;
    virtual void *visit(const ASTGreaterThan *node, void *data) override;
    virtual void *visit(const ASTEqual *node, void *data) override;
    virtual void *visit(const ASTNotEqual *node, void *data) override;
    virtual void *visit(const ASTNot *node, void *data) override;
    virtual void *visit(const ASTAnd *node, void *data) override;
    virtual void *visit(const ASTOr *node, void *data) override;
    virtual void *visit(const ASTProgram *node, void *data) override;
    virtual void *visit(const ASTDeclaration *node, void *data) override;
    virtual void *visit(const ASTAssignment *node, void *data) override;
};

}
