/* Generated By:JJTree: Do not edit this line. ASTGreaterThan.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTGreaterThan.h"
#include "ParserVisitor.h"

namespace AlpiScript {
  
  ASTGreaterThan::ASTGreaterThan(int id) : SimpleNode(id) {
  }
  ASTGreaterThan::ASTGreaterThan(Parser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTGreaterThan::~ASTGreaterThan() {
  }

  /** Accept the visitor. **/
  void* ASTGreaterThan::jjtAccept(ParserVisitor *visitor, void* data) const {
    return 
    visitor->visit(this, data);
  }

}
