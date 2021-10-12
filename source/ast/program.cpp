#include "program.h"

#include "expressionwriter.h"
#include "expressionevaluator.h"
#include "astconverter.h"

using namespace AlpiScript;

std::string Program::toString() const
{
    static ExpressionWriter ew;
    std::string out;
    accept(&ew, &out);
    return out;
}

Program *Program::parse(const std::string & input)
{
    static AstConverter astconv;
    return astconv.parseProgram(input + "\n");
}

Int *Program::execute(Context * ctx)
{
    static ExpressionEvaluator evaluator;
    Program * p = static_cast<Program *>( accept(&evaluator, ctx) );

}
