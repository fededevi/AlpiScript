/* Generated By:JJTree: Do not edit this line. ASTBoolean.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTBoolean.h"
#include "ParserVisitor.h"

namespace AlpiScript {
  
  ASTBoolean::ASTBoolean(int id) : SimpleNode(id) {
  }
  ASTBoolean::ASTBoolean(Parser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTBoolean::~ASTBoolean() {
  }

  /** Accept the visitor. **/
  void* ASTBoolean::jjtAccept(ParserVisitor *visitor, void* data) const {
    return 
    visitor->visit(this, data);
  }

}