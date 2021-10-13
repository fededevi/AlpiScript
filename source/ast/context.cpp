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
