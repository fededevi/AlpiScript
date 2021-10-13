#include "context.h"
#include "basetypes.h"

Context::Context()
{
    TypeBool::instance()->load();
    types.insert({TypeBool::instance()->name, TypeBool::instance()});

    TypeFloat::instance()->load();
    types.insert({TypeFloat::instance()->name, TypeFloat::instance()});

    TypeInt::instance()->load();
    types.insert({TypeInt::instance()->name, TypeInt::instance()});

    TypeString::instance()->load();
    types.insert({TypeString::instance()->name, TypeString::instance()});
}

bool Context::isDeclared(const std::string & k) const
{
    auto it = data.find(k);
    if ( data.end() == it )
        return false;
    return true;
}

bool Context::isDefined(const std::string & k) const
{
    auto it = types.find(k);
    if ( types.end() == it )
        return false;
    return true;
}

std::string Context::toString() const
{
    std::string out;
    for (const auto & l : data )
        out += l.first + " : "+ l.second->toString();
    return out;
}
