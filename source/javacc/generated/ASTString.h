/* Generated By:JJTree: Do not edit this line. ASTString.h Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#ifndef ASTString_H_
#define ASTString_H_

#include "SimpleNode.h"

namespace AlpiScript {
class Parser;

class ASTString : public SimpleNode {
public: 
           ASTString(int id);
           ASTString(Parser *parser, int id);
  virtual ~ASTString();

  /** Accept the visitor. **/
  virtual void* jjtAccept(ParserVisitor *visitor, void* data) const ;
};

}

#endif
