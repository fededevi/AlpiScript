/* Generated By:JJTree: Do not edit this line. ASTIdentifier.h Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#ifndef ASTIdentifier_H_
#define ASTIdentifier_H_

#include "SimpleNode.h"

namespace AlpiScript {
class Parser;

class ASTIdentifier : public SimpleNode {
public: 
           ASTIdentifier(int id);
           ASTIdentifier(Parser *parser, int id);
  virtual ~ASTIdentifier();

  /** Accept the visitor. **/
  virtual void* jjtAccept(ParserVisitor *visitor, void* data) const ;
};

}

#endif