/* Generated By:JJTree: Do not edit this line. ASTStart.h Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#ifndef ASTStart_H_
#define ASTStart_H_

#include "SimpleNode.h"

namespace AlpiScript {
class Parser;

class ASTStart : public SimpleNode {
public: 
           ASTStart(int id);
           ASTStart(Parser *parser, int id);
  virtual ~ASTStart();

  /** Accept the visitor. **/
  virtual void* jjtAccept(ParserVisitor *visitor, void* data) const ;
};

}

#endif
