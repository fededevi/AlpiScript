#include "expression.h"
#include <iostream>

#include "astconverter.h"
#include "expressionwriter.h"
#include "expressionevaluator.h"

#include "datatype.h"
#include "basetypes.h"

using namespace AlpiScript;

Expression *Expression::parse(const std::string & input)
{
    static AstConverter astconv;
    return astconv.parseExpression(input + "\n");
}

Expression *Expression::evaluate( Context * ctx ) const
{
    static ExpressionEvaluator evaluator;
    return static_cast<Expression *>(accept(&evaluator, ctx));
}

Expression * Expression::compile( Context * ctx )
{
    static ExpressionEvaluator evaluator;
    return static_cast<Expression *>(accept(&evaluator, ctx));
}

Expression *Expression::evaluate(const std::string & s, Context * ctx)
{
    //std::cout << s << " -> " << std::flush;
    ExpressionUPtr toEvaluate (parse(s));
    //std::cout << toEvaluate->toString() << " -> " << std::flush;
    Expression * evaluated = toEvaluate->evaluate(ctx);
    //std::cout << evaluated->toString() << std::endl;
    return evaluated;
}

std::unique_ptr<Expression> Expression::evaluateUPtr(const std::string & s, Context *ctx)
{
    return std::unique_ptr<Expression>(Expression::evaluate(s, ctx));
}

std::string Expression::toString() const
{
    static ExpressionWriter ew;
    std::string out;
    accept(&ew, &out);
    return out;
}

bool Expression::isNumber() {
    Int * exp = dynamic_cast<Int *>(this);
    if (!exp)
        std::cout << "Expression is not Int" << std::endl;
    return dynamic_cast<Number *>(this);
}

Id * Expression::toId() {
    Id * exp = dynamic_cast<Id *>(this);
    if (!exp)
        std::cout << "Expression is not Id" << std::endl;
    return exp;
}

Int * Expression::toInt() {
    Int * exp = dynamic_cast<Int *>(this);
    if (!exp)
        std::cout << "Expression is not Int" << std::endl;
    return exp;
}

Float * Expression::toFloat() {
    Float * exp = dynamic_cast<Float *>(this);
    if (!exp)
        std::cout << "Expression is not Float" << std::endl;
    return exp;
}

Boolean * Expression::toBool() {
    Boolean * exp = dynamic_cast<Boolean *>(this);
    if (!exp)
        std::cout << "Expression is not Boolean" << std::endl;
    return exp;
}

Int::Int(int64_t v) : value(v) {
    type = TypeInt::instance();
}

Float::Float(double v) : value(v) {
    type = TypeFloat::instance();
}

Boolean::Boolean(bool v) : value(v) {
    type = TypeBool::instance();
}
