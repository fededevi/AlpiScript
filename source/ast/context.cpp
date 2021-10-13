#include "context.h"

Context::Context()
{
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
