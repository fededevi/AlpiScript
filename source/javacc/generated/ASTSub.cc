/* Generated By:JJTree: Do not edit this line. ASTSub.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTSub.h"
#include "ParserVisitor.h"

namespace AlpiScript {
  
  ASTSub::ASTSub(int id) : SimpleNode(id) {
  }
  ASTSub::ASTSub(Parser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTSub::~ASTSub() {
  }

  /** Accept the visitor. **/
  void* ASTSub::jjtAccept(ParserVisitor *visitor, void* data) const {
    return 
    visitor->visit(this, data);
  }

}
