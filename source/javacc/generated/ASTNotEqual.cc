/* Generated By:JJTree: Do not edit this line. ASTNotEqual.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTNotEqual.h"
#include "ParserVisitor.h"

namespace AlpiScript {
  
  ASTNotEqual::ASTNotEqual(int id) : SimpleNode(id) {
  }
  ASTNotEqual::ASTNotEqual(Parser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTNotEqual::~ASTNotEqual() {
  }

  /** Accept the visitor. **/
  void* ASTNotEqual::jjtAccept(ParserVisitor *visitor, void* data) const {
    return 
    visitor->visit(this, data);
  }

}
