/* Generated By:JJTree: Do not edit this line. ASTSub.h Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#ifndef ASTSub_H_
#define ASTSub_H_

#include "SimpleNode.h"

namespace AlpiScript {
class Parser;

class ASTSub : public SimpleNode {
public: 
           ASTSub(int id);
           ASTSub(Parser *parser, int id);
  virtual ~ASTSub();

  /** Accept the visitor. **/
  virtual void* jjtAccept(ParserVisitor *visitor, void* data) const ;
};

}

#endif
