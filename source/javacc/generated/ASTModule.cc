/* Generated By:JJTree: Do not edit this line. ASTModule.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTModule.h"
#include "ParserVisitor.h"

namespace AlpiScript {
  
  ASTModule::ASTModule(int id) : SimpleNode(id) {
  }
  ASTModule::ASTModule(Parser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTModule::~ASTModule() {
  }

  /** Accept the visitor. **/
  void* ASTModule::jjtAccept(ParserVisitor *visitor, void* data) const {
    return 
    visitor->visit(this, data);
  }

}
