#pragma once

#include <vector>
#include <memory>

#include "visitormacros.h"
#include "expression.h"

class Program {
public:
    virtual void* accept(const ExpressionVisitor * v, void * d = nullptr) const = 0;
    std::string toString() const;

    static Program * parse( const std::string & );
    Int * execute( Context * );

public:
    std::vector<std::unique_ptr<Program>> next;
};

class Declaration : public Program {
    VISITOR_ACCEPT(ExpressionVisitor)
    std::unique_ptr<Id> dataType;
    std::unique_ptr<Id> id;
    DataType * actualDataType = nullptr;
};

class Assignment : public Program {
    VISITOR_ACCEPT(ExpressionVisitor)
    std::unique_ptr<Id> id;
    std::unique_ptr<Expression> value;
};
