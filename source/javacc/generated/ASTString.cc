/* Generated By:JJTree: Do not edit this line. ASTString.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTString.h"
#include "ParserVisitor.h"

namespace AlpiScript {
  
  ASTString::ASTString(int id) : SimpleNode(id) {
  }
  ASTString::ASTString(Parser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTString::~ASTString() {
  }

  /** Accept the visitor. **/
  void* ASTString::jjtAccept(ParserVisitor *visitor, void* data) const {
    return 
    visitor->visit(this, data);
  }

}
