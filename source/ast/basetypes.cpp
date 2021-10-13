#include "basetypes.h"
#include "expression.h"

#define INT TypeInt::instance()
#define FLOAT TypeFloat::instance()
#define BOOL TypeBool::instance()
#define STRING TypeString::instance()

void TypeBool::load()
{
    if (loaded) return;
    if (!loaded) loaded = true;
    addMethod( Method(BOOL,  Name("="), {BOOL}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Boolean *>(params[0])->value);
               }));
    addMethod( Method(BOOL,  Name("new"), { }, [](std::vector<void *>) -> Boolean *{
                   return new Boolean(false);
               }));
    addMethod( Method(BOOL,  Name("!"), {BOOL}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(!static_cast<Boolean *>(params[0])->value);
               }));
    addMethod( Method(BOOL,  Name("=="), {BOOL, BOOL}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Boolean *>(params[0])->value == static_cast<Boolean *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name("!="), {BOOL, BOOL}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Boolean *>(params[0])->value != static_cast<Boolean *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name("&&"), {BOOL, BOOL}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Boolean *>(params[0])->value && static_cast<Boolean *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name("||"), {BOOL, BOOL}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Boolean *>(params[0])->value || static_cast<Boolean *>(params[1])->value);
               }));
}

TypeBool::TypeBool() {
    name = "bool";
}

void TypeFloat::load()
{
    if (loaded) return;
    if (!loaded) loaded = true;


    addMethod( Method(FLOAT,  Name("="), {FLOAT}, [](std::vector<void *> params) -> Float *{
                   return new Float(static_cast<Float *>(params[0])->value);
               }));
    addMethod( Method(FLOAT,  Name("="), {INT}, [](std::vector<void *> params) -> Float *{
                   return new Float(static_cast<Int *>(params[0])->value);
               }));
    addMethod( Method(FLOAT,  Name("new"), { }, [](std::vector<void *>) -> Float *{
                   return new Float(0);
               }));
    addMethod( Method(FLOAT,  Name("-"), { FLOAT}, [](std::vector<void *> params) -> Float *{
                   return new Float(-static_cast<Float *>(params[0])->value);
               }));
    addMethod( Method(FLOAT,  Name("+"), {FLOAT, FLOAT}, [](std::vector<void *> params) -> Float *{
                   return new Float(static_cast<Float *>(params[0])->value + static_cast<Float *>(params[1])->value);
               }));
    addMethod( Method(FLOAT,  Name("+"), {FLOAT, INT}, [](std::vector<void *> params) -> Float *{
                   return new Float(static_cast<Float *>(params[0])->value + static_cast<Int *>(params[1])->value);
               }));
    addMethod( Method(FLOAT,  Name("-"), {FLOAT, FLOAT}, [](std::vector<void *> params) -> Float *{
                   return new Float(static_cast<Float *>(params[0])->value - static_cast<Float *>(params[1])->value);
               }));
    addMethod( Method(FLOAT,  Name("-"), {FLOAT, INT}, [](std::vector<void *> params) -> Float *{
                   return new Float(static_cast<Float *>(params[0])->value - static_cast<Int *>(params[1])->value);
               }));
    addMethod( Method(FLOAT,  Name("*"), {FLOAT, FLOAT}, [](std::vector<void *> params) -> Float *{
                   return new Float(static_cast<Float *>(params[0])->value * static_cast<Float *>(params[1])->value);
               }));
    addMethod( Method(FLOAT,  Name("*"), {FLOAT, INT}, [](std::vector<void *> params) -> Float *{
                   return new Float(static_cast<Float *>(params[0])->value * static_cast<Int *>(params[1])->value);
               }));
    addMethod( Method(FLOAT,  Name("/"), {FLOAT, FLOAT}, [](std::vector<void *> params) -> Float *{
                   return new Float(static_cast<Float *>(params[0])->value / static_cast<Float *>(params[1])->value);
               }));
    addMethod( Method(FLOAT,  Name("/"), {FLOAT, INT}, [](std::vector<void *> params) -> Float *{
                   return new Float(static_cast<Float *>(params[0])->value / static_cast<Int *>(params[1])->value);
               }));

    // BOOLEAN OPERATORS
    addMethod( Method(BOOL,  Name("<"), {FLOAT, FLOAT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Float *>(params[0])->value < static_cast<Float *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name("<"), {FLOAT, INT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Float *>(params[0])->value < static_cast<Int *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name("<="), {FLOAT, FLOAT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Float *>(params[0])->value <= static_cast<Float *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name("<="), {FLOAT, INT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Float *>(params[0])->value <= static_cast<Int *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name(">="), {FLOAT, FLOAT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Float *>(params[0])->value >= static_cast<Float *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name(">="), {FLOAT, INT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Float *>(params[0])->value >= static_cast<Int *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name(">"), {FLOAT, FLOAT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Float *>(params[0])->value > static_cast<Float *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name(">"), {FLOAT, INT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Float *>(params[0])->value > static_cast<Int *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name("=="), {FLOAT, FLOAT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Float *>(params[0])->value == static_cast<Float *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name("=="), {FLOAT, INT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Float *>(params[0])->value == static_cast<Int *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name("!="), {FLOAT, FLOAT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Float *>(params[0])->value != static_cast<Float *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name("!="), {FLOAT, INT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Float *>(params[0])->value != static_cast<Int *>(params[1])->value);
               }));

}

TypeFloat::TypeFloat()
{
    name = "float";
}

void TypeInt::load()
{
    if (loaded) return;
    if (!loaded) loaded = true;

    //Int assignment operator from int
    addMethod( Method(INT,  Name("="), {INT}, [](std::vector<void *> params) -> Int *{
                   return new Int(static_cast<Int *>(params[0])->value);
               }));
    //Int assignment operator from float
    addMethod( Method(INT,  Name("="), {FLOAT}, [](std::vector<void *> params) -> Int *{
                   return new Int(static_cast<Float *>(params[0])->value);
               }));
    addMethod( Method(INT,  Name("new"), { }, [](std::vector<void *>) -> Int *{
                   return new Int(0);
               }));
    addMethod( Method(INT,  Name("-"), { INT}, [](std::vector<void *> params) -> Int *{
                   return new Int(-static_cast<Int *>(params[0])->value);
               }));
    addMethod( Method(INT,  Name("+"), {INT, INT}, [](std::vector<void *> params) -> Int *{
                   return new Int(static_cast<Int *>(params[0])->value + static_cast<Int *>(params[1])->value);
               }));
    addMethod( Method(FLOAT,  Name("+"), {INT, FLOAT}, [](std::vector<void *> params) -> Float *{
                   return new Float(static_cast<Int *>(params[0])->value + static_cast<Float *>(params[1])->value);
               }));
    addMethod( Method(INT,  Name("-"), {INT, INT}, [](std::vector<void *> params) -> Int *{
                   return new Int(static_cast<Int *>(params[0])->value - static_cast<Int *>(params[1])->value);
               }));
    addMethod( Method(FLOAT,  Name("-"), {INT, FLOAT}, [](std::vector<void *> params) -> Float *{
                   return new Float(static_cast<Int *>(params[0])->value - static_cast<Float *>(params[1])->value);
               }));
    addMethod( Method(INT,  Name("*"), {INT, INT}, [](std::vector<void *> params) -> Int *{
                   return new Int(static_cast<Int *>(params[0])->value * static_cast<Int *>(params[1])->value);
               }));
    addMethod( Method(FLOAT,  Name("*"), {INT, FLOAT}, [](std::vector<void *> params) -> Float *{
                   return new Float(static_cast<Int *>(params[0])->value * static_cast<Float *>(params[1])->value);
               }));
    addMethod( Method(INT,  Name("/"), {INT, INT}, [](std::vector<void *> params) -> Int *{
                   return new Int(static_cast<Int *>(params[0])->value / static_cast<Int *>(params[1])->value);
               }));
    addMethod( Method(FLOAT,  Name("/"), {INT, FLOAT}, [](std::vector<void *> params) -> Float *{
                   return new Float(static_cast<Int *>(params[0])->value / static_cast<Float *>(params[1])->value);
               }));
    addMethod( Method(INT,  Name("%"), {INT, INT}, [](std::vector<void *> params) -> Int *{
                   return new Int(static_cast<Int *>(params[0])->value % static_cast<Int *>(params[1])->value);
               }));

    // BOOLEAN OPERATORS
    addMethod( Method(BOOL,  Name("<"), {INT, FLOAT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Int *>(params[0])->value < static_cast<Float *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name("<"), {INT, INT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Int *>(params[0])->value < static_cast<Int *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name("<="), {INT, FLOAT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Int *>(params[0])->value <= static_cast<Float *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name("<="), {INT, INT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Int *>(params[0])->value <= static_cast<Int *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name(">="), {INT, FLOAT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Int *>(params[0])->value >= static_cast<Float *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name(">="), {INT, INT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Int *>(params[0])->value >= static_cast<Int *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name(">"), {INT, FLOAT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Int *>(params[0])->value > static_cast<Float *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name(">"), {INT, INT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Int *>(params[0])->value > static_cast<Int *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name("=="), {INT, FLOAT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Int *>(params[0])->value == static_cast<Float *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name("=="), {INT, INT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Int *>(params[0])->value == static_cast<Int *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name("!="), {INT, FLOAT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Int *>(params[0])->value != static_cast<Float *>(params[1])->value);
               }));
    addMethod( Method(BOOL,  Name("!="), {INT, INT}, [](std::vector<void *> params) -> Boolean *{
                   return new Boolean(static_cast<Int *>(params[0])->value != static_cast<Int *>(params[1])->value);
               }));
}

TypeInt::TypeInt()
{
    name = "int";
}

void TypeString::load()
{
    if (loaded) return;
    if (!loaded) loaded = true;

    addMethod( Method(STRING,  Name("="), {STRING}, [](std::vector<void *> params) -> String *{
                   return new String(static_cast<String *>(params[0])->value.c_str());
               }));
    addMethod( Method(STRING,  Name("new"), { }, [](std::vector<void *>) -> String *{
                   return new String("");
               }));
}

TypeString::TypeString()
{
    name = "string";
}
