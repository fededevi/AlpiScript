/* Generated By:JJTree: Do not edit this line. ASTDivision.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTDivision.h"
#include "ParserVisitor.h"

namespace AlpiScript {
  
  ASTDivision::ASTDivision(int id) : SimpleNode(id) {
  }
  ASTDivision::ASTDivision(Parser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTDivision::~ASTDivision() {
  }

  /** Accept the visitor. **/
  void* ASTDivision::jjtAccept(ParserVisitor *visitor, void* data) const {
    return 
    visitor->visit(this, data);
  }

}
