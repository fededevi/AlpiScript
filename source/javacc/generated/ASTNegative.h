/* Generated By:JJTree: Do not edit this line. ASTNegative.h Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#ifndef ASTNegative_H_
#define ASTNegative_H_

#include "SimpleNode.h"

namespace AlpiScript {
class Parser;

class ASTNegative : public SimpleNode {
public: 
           ASTNegative(int id);
           ASTNegative(Parser *parser, int id);
  virtual ~ASTNegative();

  /** Accept the visitor. **/
  virtual void* jjtAccept(ParserVisitor *visitor, void* data) const ;
};

}

#endif
