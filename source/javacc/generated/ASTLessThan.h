/* Generated By:JJTree: Do not edit this line. ASTLessThan.h Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#ifndef ASTLessThan_H_
#define ASTLessThan_H_

#include "SimpleNode.h"

namespace AlpiScript {
class Parser;

class ASTLessThan : public SimpleNode {
public: 
           ASTLessThan(int id);
           ASTLessThan(Parser *parser, int id);
  virtual ~ASTLessThan();

  /** Accept the visitor. **/
  virtual void* jjtAccept(ParserVisitor *visitor, void* data) const ;
};

}

#endif
