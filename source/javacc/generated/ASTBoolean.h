/* Generated By:JJTree: Do not edit this line. ASTBoolean.h Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#ifndef ASTBoolean_H_
#define ASTBoolean_H_

#include "SimpleNode.h"

namespace AlpiScript {
class Parser;

class ASTBoolean : public SimpleNode {
public: 
           ASTBoolean(int id);
           ASTBoolean(Parser *parser, int id);
  virtual ~ASTBoolean();

  /** Accept the visitor. **/
  virtual void* jjtAccept(ParserVisitor *visitor, void* data) const ;
};

}

#endif
