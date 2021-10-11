/* Parser.cc */
#include "Parser.h"
#include "TokenMgrError.h"
#include "SimpleNode.h"
namespace AlpiScript {

  /** Constructor with user supplied TokenManager. */




ASTStart         * Parser::parse() {/*@bgen(jjtree) Start */
  ASTStart *jjtn000 = new ASTStart(JJTSTART);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
    try {
      expression();
jjtree.closeNodeScope(jjtn000, true);
                jjtc000 = false;
return jjtn000;
    } catch ( ...) {
if (jjtc000) {
    jjtree.clearNodeScope(jjtn000);
    jjtc000 = false;
  } else {
    jjtree.popNode();
  }
    }
if (jjtc000) {
    jjtree.closeNodeScope(jjtn000, true);
  }
assert(false);
}


void Parser::expression() {
    AND_parse();
}


void Parser::AND_parse() {
ASTAnd *jjtn001 = new ASTAnd(JJTAND);
                               bool jjtc001 = true;
                               jjtree.openNodeScope(jjtn001);
    try {
      OR_parse();
      while (!hasError) {
        if (jj_2_1(13)) {
          ;
        } else {
          goto end_label_1;
        }
        jj_consume_token(AND);
        OR_parse();
      }
      end_label_1: ;
    } catch ( ...) {
if (jjtc001) {
                                 jjtree.clearNodeScope(jjtn001);
                                 jjtc001 = false;
                               } else {
                                 jjtree.popNode();
                               }
    }
if (jjtc001) {
                                 jjtree.closeNodeScope(jjtn001, jjtree.nodeArity() > 1);
                               }
}


void Parser::OR_parse() {
ASTOr *jjtn001 = new ASTOr(JJTOR);
                               bool jjtc001 = true;
                               jjtree.openNodeScope(jjtn001);
    try {
      LT_parse();
      while (!hasError) {
        if (jj_2_2(13)) {
          ;
        } else {
          goto end_label_2;
        }
        jj_consume_token(OR);
        LT_parse();
      }
      end_label_2: ;
    } catch ( ...) {
if (jjtc001) {
                                 jjtree.clearNodeScope(jjtn001);
                                 jjtc001 = false;
                               } else {
                                 jjtree.popNode();
                               }
    }
if (jjtc001) {
                                 jjtree.closeNodeScope(jjtn001, jjtree.nodeArity() > 1);
                               }
}


void Parser::LT_parse() {
ASTLessThan *jjtn001 = new ASTLessThan(JJTLESSTHAN);
                               bool jjtc001 = true;
                               jjtree.openNodeScope(jjtn001);
    try {
      LE_parse();
      while (!hasError) {
        if (jj_2_3(13)) {
          ;
        } else {
          goto end_label_3;
        }
        jj_consume_token(LT);
        LE_parse();
      }
      end_label_3: ;
    } catch ( ...) {
if (jjtc001) {
                                 jjtree.clearNodeScope(jjtn001);
                                 jjtc001 = false;
                               } else {
                                 jjtree.popNode();
                               }
    }
if (jjtc001) {
                                 jjtree.closeNodeScope(jjtn001, jjtree.nodeArity() > 1);
                               }
}


void Parser::LE_parse() {
ASTLessEqual *jjtn001 = new ASTLessEqual(JJTLESSEQUAL);
                               bool jjtc001 = true;
                               jjtree.openNodeScope(jjtn001);
    try {
      GE_parse();
      while (!hasError) {
        if (jj_2_4(13)) {
          ;
        } else {
          goto end_label_4;
        }
        jj_consume_token(LE);
        GE_parse();
      }
      end_label_4: ;
    } catch ( ...) {
if (jjtc001) {
                                 jjtree.clearNodeScope(jjtn001);
                                 jjtc001 = false;
                               } else {
                                 jjtree.popNode();
                               }
    }
if (jjtc001) {
                                 jjtree.closeNodeScope(jjtn001, jjtree.nodeArity() > 1);
                               }
}


void Parser::GE_parse() {
ASTGreaterEqual *jjtn001 = new ASTGreaterEqual(JJTGREATEREQUAL);
                               bool jjtc001 = true;
                               jjtree.openNodeScope(jjtn001);
    try {
      GT_parse();
      while (!hasError) {
        if (jj_2_5(13)) {
          ;
        } else {
          goto end_label_5;
        }
        jj_consume_token(GE);
        GT_parse();
      }
      end_label_5: ;
    } catch ( ...) {
if (jjtc001) {
                                 jjtree.clearNodeScope(jjtn001);
                                 jjtc001 = false;
                               } else {
                                 jjtree.popNode();
                               }
    }
if (jjtc001) {
                                 jjtree.closeNodeScope(jjtn001, jjtree.nodeArity() > 1);
                               }
}


void Parser::GT_parse() {
ASTGreaterThan *jjtn001 = new ASTGreaterThan(JJTGREATERTHAN);
                               bool jjtc001 = true;
                               jjtree.openNodeScope(jjtn001);
    try {
      EQ_parse();
      while (!hasError) {
        if (jj_2_6(13)) {
          ;
        } else {
          goto end_label_6;
        }
        jj_consume_token(GT);
        EQ_parse();
      }
      end_label_6: ;
    } catch ( ...) {
if (jjtc001) {
                                 jjtree.clearNodeScope(jjtn001);
                                 jjtc001 = false;
                               } else {
                                 jjtree.popNode();
                               }
    }
if (jjtc001) {
                                 jjtree.closeNodeScope(jjtn001, jjtree.nodeArity() > 1);
                               }
}


void Parser::EQ_parse() {
ASTEqual *jjtn001 = new ASTEqual(JJTEQUAL);
                               bool jjtc001 = true;
                               jjtree.openNodeScope(jjtn001);
    try {
      NE_parse();
      while (!hasError) {
        if (jj_2_7(13)) {
          ;
        } else {
          goto end_label_7;
        }
        jj_consume_token(EQ);
        NE_parse();
      }
      end_label_7: ;
    } catch ( ...) {
if (jjtc001) {
                                 jjtree.clearNodeScope(jjtn001);
                                 jjtc001 = false;
                               } else {
                                 jjtree.popNode();
                               }
    }
if (jjtc001) {
                                 jjtree.closeNodeScope(jjtn001, jjtree.nodeArity() > 1);
                               }
}


void Parser::NE_parse() {
ASTNotEqual *jjtn001 = new ASTNotEqual(JJTNOTEQUAL);
                               bool jjtc001 = true;
                               jjtree.openNodeScope(jjtn001);
    try {
      ADD_parse();
      while (!hasError) {
        if (jj_2_8(13)) {
          ;
        } else {
          goto end_label_8;
        }
        jj_consume_token(NE);
        ADD_parse();
      }
      end_label_8: ;
    } catch ( ...) {
if (jjtc001) {
                                 jjtree.clearNodeScope(jjtn001);
                                 jjtc001 = false;
                               } else {
                                 jjtree.popNode();
                               }
    }
if (jjtc001) {
                                 jjtree.closeNodeScope(jjtn001, jjtree.nodeArity() > 1);
                               }
}


void Parser::ADD_parse() {
ASTAdd *jjtn001 = new ASTAdd(JJTADD);
                               bool jjtc001 = true;
                               jjtree.openNodeScope(jjtn001);
    try {
      SUB_parse();
      while (!hasError) {
        if (jj_2_9(13)) {
          ;
        } else {
          goto end_label_9;
        }
        jj_consume_token(ADD);
        SUB_parse();
      }
      end_label_9: ;
    } catch ( ...) {
if (jjtc001) {
                                 jjtree.clearNodeScope(jjtn001);
                                 jjtc001 = false;
                               } else {
                                 jjtree.popNode();
                               }
    }
if (jjtc001) {
                                 jjtree.closeNodeScope(jjtn001, jjtree.nodeArity() > 1);
                               }
}


void Parser::SUB_parse() {
ASTSub *jjtn001 = new ASTSub(JJTSUB);
                               bool jjtc001 = true;
                               jjtree.openNodeScope(jjtn001);
    try {
      MUL_parse();
      while (!hasError) {
        if (jj_2_10(13)) {
          ;
        } else {
          goto end_label_10;
        }
        jj_consume_token(SUB);
        MUL_parse();
      }
      end_label_10: ;
    } catch ( ...) {
if (jjtc001) {
                                 jjtree.clearNodeScope(jjtn001);
                                 jjtc001 = false;
                               } else {
                                 jjtree.popNode();
                               }
    }
if (jjtc001) {
                                 jjtree.closeNodeScope(jjtn001, jjtree.nodeArity() > 1);
                               }
}


void Parser::MUL_parse() {
ASTMult *jjtn001 = new ASTMult(JJTMULT);
                               bool jjtc001 = true;
                               jjtree.openNodeScope(jjtn001);
    try {
      DIV_parse();
      while (!hasError) {
        if (jj_2_11(13)) {
          ;
        } else {
          goto end_label_11;
        }
        jj_consume_token(MUL);
        DIV_parse();
      }
      end_label_11: ;
    } catch ( ...) {
if (jjtc001) {
                                 jjtree.clearNodeScope(jjtn001);
                                 jjtc001 = false;
                               } else {
                                 jjtree.popNode();
                               }
    }
if (jjtc001) {
                                 jjtree.closeNodeScope(jjtn001, jjtree.nodeArity() > 1);
                               }
}


void Parser::DIV_parse() {
ASTDivision *jjtn001 = new ASTDivision(JJTDIVISION);
                               bool jjtc001 = true;
                               jjtree.openNodeScope(jjtn001);
    try {
      MOD_parse();
      while (!hasError) {
        if (jj_2_12(13)) {
          ;
        } else {
          goto end_label_12;
        }
        jj_consume_token(DIV);
        MOD_parse();
      }
      end_label_12: ;
    } catch ( ...) {
if (jjtc001) {
                                 jjtree.clearNodeScope(jjtn001);
                                 jjtc001 = false;
                               } else {
                                 jjtree.popNode();
                               }
    }
if (jjtc001) {
                                 jjtree.closeNodeScope(jjtn001, jjtree.nodeArity() > 1);
                               }
}


void Parser::MOD_parse() {
ASTModule *jjtn001 = new ASTModule(JJTMODULE);
                               bool jjtc001 = true;
                               jjtree.openNodeScope(jjtn001);
    try {
      unary();
      while (!hasError) {
        if (jj_2_13(13)) {
          ;
        } else {
          goto end_label_13;
        }
        jj_consume_token(MOD);
        unary();
      }
      end_label_13: ;
    } catch ( ...) {
if (jjtc001) {
                                 jjtree.clearNodeScope(jjtn001);
                                 jjtc001 = false;
                               } else {
                                 jjtree.popNode();
                               }
    }
if (jjtc001) {
                                 jjtree.closeNodeScope(jjtn001, jjtree.nodeArity() > 1);
                               }
}


void Parser::unary() {
    if (jj_2_14(13)) {
      parseFloat();
    } else if (jj_2_15(13)) {
ASTNegative *jjtn001 = new ASTNegative(JJTNEGATIVE);
     bool jjtc001 = true;
     jjtree.openNodeScope(jjtn001);
      try {
        jj_consume_token(SUB);
        parseFloat();
      } catch ( ...) {
if (jjtc001) {
       jjtree.clearNodeScope(jjtn001);
       jjtc001 = false;
     } else {
       jjtree.popNode();
     }
      }
if (jjtc001) {
       jjtree.closeNodeScope(jjtn001,  1);
     }
    } else if (jj_2_16(13)) {
      parseInteger();
    } else if (jj_2_17(13)) {
ASTNegative *jjtn002 = new ASTNegative(JJTNEGATIVE);
     bool jjtc002 = true;
     jjtree.openNodeScope(jjtn002);
      try {
        jj_consume_token(SUB);
        parseInteger();
      } catch ( ...) {
if (jjtc002) {
       jjtree.clearNodeScope(jjtn002);
       jjtc002 = false;
     } else {
       jjtree.popNode();
     }
      }
if (jjtc002) {
       jjtree.closeNodeScope(jjtn002,  1);
     }
    } else if (jj_2_18(13)) {
      parseBoolean();
    } else if (jj_2_19(13)) {
      identifier();
    } else if (jj_2_20(13)) {
      jj_consume_token(LP);
      expression();
      jj_consume_token(RP);
    } else if (jj_2_21(13)) {
      jj_consume_token(NOT);
ASTNot *jjtn003 = new ASTNot(JJTNOT);
           bool jjtc003 = true;
           jjtree.openNodeScope(jjtn003);
      try {
        expression();
      } catch ( ...) {
if (jjtc003) {
             jjtree.clearNodeScope(jjtn003);
             jjtc003 = false;
           } else {
             jjtree.popNode();
           }
      }
if (jjtc003) {
             jjtree.closeNodeScope(jjtn003,  1);
           }
    } else {
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
}


void Parser::parseFloat() {Token * t;/*@bgen(jjtree) Float */
  ASTFloat *jjtn000 = new ASTFloat(JJTFLOAT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
    try {
      t = jj_consume_token(FLOATING_POINT_LITERAL);
jjtree.closeNodeScope(jjtn000, true);
                               jjtc000 = false;
jjtn000->jjtSetValue((void *)t->image.c_str());
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
    }
}


void Parser::parseInteger() {Token * t;/*@bgen(jjtree) Integer */
  ASTInteger *jjtn000 = new ASTInteger(JJTINTEGER);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
    try {
      t = jj_consume_token(INTEGER_LITERAL);
jjtree.closeNodeScope(jjtn000, true);
                        jjtc000 = false;
jjtn000->jjtSetValue((void *)t->image.c_str());
    } catch ( ...) {
if (jjtc000) {
     jjtree.clearNodeScope(jjtn000);
     jjtc000 = false;
   } else {
     jjtree.popNode();
   }
    }
if (jjtc000) {
     jjtree.closeNodeScope(jjtn000, true);
   }
}


void Parser::parseBoolean() {Token * t;/*@bgen(jjtree) Boolean */
  ASTBoolean *jjtn000 = new ASTBoolean(JJTBOOLEAN);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
    try {
      t = jj_consume_token(BOOLEAN);
jjtree.closeNodeScope(jjtn000, true);
                jjtc000 = false;
jjtn000->jjtSetValue((void *)t->image.c_str());
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
    }
}


void Parser::identifier() {Token * t;/*@bgen(jjtree) Identifier */
  ASTIdentifier *jjtn000 = new ASTIdentifier(JJTIDENTIFIER);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
    try {
      t = jj_consume_token(IDENTIFIER);
jjtree.closeNodeScope(jjtn000, true);
                   jjtc000 = false;
jjtn000->jjtSetValue((void *)t->image.c_str());
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
    }
}


  Parser::Parser(TokenManager *tokenManager){
    head = nullptr;
    ReInit(tokenManager);
}
Parser::~Parser()
{
  clear();
}

void Parser::ReInit(TokenManager* tokenManager){
    clear();
    errorHandler = new ErrorHandler();
    hasError = false;
    token_source = tokenManager;
    head = token = new Token();
    token->kind = 0;
    token->next = nullptr;
    jj_lookingAhead = false;
    jj_rescan = false;
    jj_done = false;
    jj_scanpos = jj_lastpos = nullptr;
    jj_gc = 0;
    jj_kind = -1;
    indent = 0;
    trace = false;
    jj_ntk = -1;
    jjtree.reset();
    jj_gen = 0;
  }


void Parser::clear(){
  //Since token manager was generate from outside,
  //parser should not take care of deleting
  //if (token_source) delete token_source;
  if (head) {
    Token *next, *t = head;
    while (t) {
      next = t->next;
      delete t;
      t = next;
    }
  }
  if (errorHandler) {
    delete errorHandler, errorHandler = nullptr;
  }
}


Token * Parser::jj_consume_token(int kind)  {
    Token *oldToken;
    if ((oldToken = token)->next != nullptr) token = token->next;
    else token = token->next = token_source->getNextToken();
    jj_ntk = -1;
    if (token->kind == kind) {
      jj_gen++;
      if (++jj_gc > 100) {
        jj_gc = 0;
        for (int i = 0; i < 21; i++) {
          JJCalls *c = &jj_2_rtns[i];
          while (c != nullptr) {
            if (c->gen < jj_gen) c->first = nullptr;
            c = c->next;
          }
        }
      }
      return token;
    }
    token = oldToken;
    jj_kind = kind;
    JJString image = kind >= 0 ? tokenImage[kind] : tokenImage[0];
    errorHandler->handleUnexpectedToken(kind, image.substr(1, image.size() - 2), getToken(1), this);
    hasError = true;
    return token;
  }


bool  Parser::jj_scan_token(int kind){
    if (jj_scanpos == jj_lastpos) {
      jj_la--;
      if (jj_scanpos->next == nullptr) {
        jj_lastpos = jj_scanpos = jj_scanpos->next = token_source->getNextToken();
      } else {
        jj_lastpos = jj_scanpos = jj_scanpos->next;
      }
    } else {
      jj_scanpos = jj_scanpos->next;
    }
    if (jj_rescan) {
      int i = 0; Token *tok = token;
      while (tok != nullptr && tok != jj_scanpos) { i++; tok = tok->next; }
      if (tok != nullptr) jj_add_error_token(kind, i);
    }
    if (jj_scanpos->kind != kind) return true;
    if (jj_la == 0 && jj_scanpos == jj_lastpos) { return jj_done = true; }
    return false;
  }


/** Get the next Token. */

Token * Parser::getNextToken(){
    if (token->next != nullptr) token = token->next;
    else token = token->next = token_source->getNextToken();
    jj_ntk = -1;
    jj_gen++;
    return token;
  }

/** Get the specific Token. */

Token * Parser::getToken(int index){
    Token *t = token;
    for (int i = 0; i < index; i++) {
      if (t->next != nullptr) t = t->next;
      else t = t->next = token_source->getNextToken();
    }
    return t;
  }


int Parser::jj_ntk_f(){
    if ((jj_nt=token->next) == nullptr)
      return (jj_ntk = (token->next=token_source->getNextToken())->kind);
    else
      return (jj_ntk = jj_nt->kind);
  }


  void Parser::jj_add_error_token(int kind, int pos)  {
  }


 void  Parser::parseError()   {
      fprintf(stderr, "Parse error at: %d:%d, after token: %s encountered: %s\n", token->beginLine, token->beginColumn, addUnicodeEscapes(token->image).c_str(), addUnicodeEscapes(getToken(1)->image).c_str());
   }


  bool Parser::trace_enabled()  {
    return trace;
  }


  void Parser::enable_tracing()  {
  }

  void Parser::disable_tracing()  {
  }


  void Parser::jj_rescan_token(){
    jj_rescan = true;
    for (int i = 0; i < 21; i++) {
      JJCalls *p = &jj_2_rtns[i];
      do {
        if (p->gen > jj_gen) {
          jj_la = p->arg; jj_lastpos = jj_scanpos = p->first;
          switch (i) {
            case 0: jj_3_1(); break;
            case 1: jj_3_2(); break;
            case 2: jj_3_3(); break;
            case 3: jj_3_4(); break;
            case 4: jj_3_5(); break;
            case 5: jj_3_6(); break;
            case 6: jj_3_7(); break;
            case 7: jj_3_8(); break;
            case 8: jj_3_9(); break;
            case 9: jj_3_10(); break;
            case 10: jj_3_11(); break;
            case 11: jj_3_12(); break;
            case 12: jj_3_13(); break;
            case 13: jj_3_14(); break;
            case 14: jj_3_15(); break;
            case 15: jj_3_16(); break;
            case 16: jj_3_17(); break;
            case 17: jj_3_18(); break;
            case 18: jj_3_19(); break;
            case 19: jj_3_20(); break;
            case 20: jj_3_21(); break;
          }
        }
        p = p->next;
      } while (p != nullptr);
    }
    jj_rescan = false;
  }


  void Parser::jj_save(int index, int xla){
    JJCalls *p = &jj_2_rtns[index];
    while (p->gen > jj_gen) {
      if (p->next == nullptr) { p = p->next = new JJCalls(); break; }
      p = p->next;
    }
    p->gen = jj_gen + xla - jj_la; p->first = token; p->arg = xla;
  }


}
