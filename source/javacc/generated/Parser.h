#ifndef PARSER_H
#define PARSER_H
#include "JavaCC.h"
#include "CharStream.h"
#include "Token.h"
#include "TokenManager.h"
#include "ParserConstants.h"
#include "JJTParserState.h"
#include "ErrorHandler.h"
#include "ParserTree.h"
namespace AlpiScript {
  struct JJCalls {
    int        gen;
    int        arg;
    JJCalls*   next;
    Token*     first;
    ~JJCalls() { if (next) delete next; }
     JJCalls() { next = nullptr; arg = 0; gen = -1; first = nullptr; }
  };

class Parser {
public:
ASTProgram           * parseProgram();
void statement_parse();
void declaration();
void assignment();
ASTStart         * parse();
void expression();
void AND_parse();
void OR_parse();
void LT_parse();
void LE_parse();
void GE_parse();
void GT_parse();
void EQ_parse();
void NE_parse();
void ADD_parse();
void SUB_parse();
void MUL_parse();
void DIV_parse();
void MOD_parse();
void unary();
void parseFloat();
void parseInteger();
void parseBoolean();
void identifier();
 inline bool jj_2_1(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_1() || jj_done);
 { jj_save(0, xla); }
  }

 inline bool jj_2_2(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_2() || jj_done);
 { jj_save(1, xla); }
  }

 inline bool jj_2_3(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_3() || jj_done);
 { jj_save(2, xla); }
  }

 inline bool jj_2_4(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_4() || jj_done);
 { jj_save(3, xla); }
  }

 inline bool jj_2_5(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_5() || jj_done);
 { jj_save(4, xla); }
  }

 inline bool jj_2_6(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_6() || jj_done);
 { jj_save(5, xla); }
  }

 inline bool jj_2_7(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_7() || jj_done);
 { jj_save(6, xla); }
  }

 inline bool jj_2_8(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_8() || jj_done);
 { jj_save(7, xla); }
  }

 inline bool jj_2_9(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_9() || jj_done);
 { jj_save(8, xla); }
  }

 inline bool jj_2_10(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_10() || jj_done);
 { jj_save(9, xla); }
  }

 inline bool jj_2_11(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_11() || jj_done);
 { jj_save(10, xla); }
  }

 inline bool jj_2_12(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_12() || jj_done);
 { jj_save(11, xla); }
  }

 inline bool jj_2_13(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_13() || jj_done);
 { jj_save(12, xla); }
  }

 inline bool jj_2_14(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_14() || jj_done);
 { jj_save(13, xla); }
  }

 inline bool jj_2_15(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_15() || jj_done);
 { jj_save(14, xla); }
  }

 inline bool jj_2_16(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_16() || jj_done);
 { jj_save(15, xla); }
  }

 inline bool jj_2_17(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_17() || jj_done);
 { jj_save(16, xla); }
  }

 inline bool jj_2_18(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_18() || jj_done);
 { jj_save(17, xla); }
  }

 inline bool jj_2_19(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_19() || jj_done);
 { jj_save(18, xla); }
  }

 inline bool jj_2_20(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_20() || jj_done);
 { jj_save(19, xla); }
  }

 inline bool jj_2_21(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_21() || jj_done);
 { jj_save(20, xla); }
  }

 inline bool jj_2_22(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_22() || jj_done);
 { jj_save(21, xla); }
  }

 inline bool jj_2_23(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_23() || jj_done);
 { jj_save(22, xla); }
  }

 inline bool jj_2_24(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_24() || jj_done);
 { jj_save(23, xla); }
  }

 inline bool jj_2_25(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_25() || jj_done);
 { jj_save(24, xla); }
  }

 inline bool jj_3_17()
 {
    if (jj_done) return true;
    if (jj_scan_token(MOD)) return true;
    if (jj_3R_unary_136_2_31()) return true;
    return false;
  }

 inline bool jj_3_16()
 {
    if (jj_done) return true;
    if (jj_scan_token(DIV)) return true;
    if (jj_3R_MOD_parse_133_30_30()) return true;
    return false;
  }

 inline bool jj_3_15()
 {
    if (jj_done) return true;
    if (jj_scan_token(MUL)) return true;
    if (jj_3R_DIV_parse_132_30_29()) return true;
    return false;
  }

 inline bool jj_3_14()
 {
    if (jj_done) return true;
    if (jj_scan_token(SUB)) return true;
    if (jj_3R_MUL_parse_131_30_28()) return true;
    return false;
  }

 inline bool jj_3_13()
 {
    if (jj_done) return true;
    if (jj_scan_token(ADD)) return true;
    if (jj_3R_SUB_parse_130_30_27()) return true;
    return false;
  }

 inline bool jj_3_12()
 {
    if (jj_done) return true;
    if (jj_scan_token(NE)) return true;
    if (jj_3R_ADD_parse_129_30_26()) return true;
    return false;
  }

 inline bool jj_3_11()
 {
    if (jj_done) return true;
    if (jj_scan_token(EQ)) return true;
    if (jj_3R_NE_parse_128_30_25()) return true;
    return false;
  }

 inline bool jj_3_10()
 {
    if (jj_done) return true;
    if (jj_scan_token(GT)) return true;
    if (jj_3R_EQ_parse_127_30_24()) return true;
    return false;
  }

 inline bool jj_3_9()
 {
    if (jj_done) return true;
    if (jj_scan_token(GE)) return true;
    if (jj_3R_GT_parse_126_30_23()) return true;
    return false;
  }

 inline bool jj_3_8()
 {
    if (jj_done) return true;
    if (jj_scan_token(LE)) return true;
    if (jj_3R_GE_parse_125_30_22()) return true;
    return false;
  }

 inline bool jj_3_7()
 {
    if (jj_done) return true;
    if (jj_scan_token(LT)) return true;
    if (jj_3R_LE_parse_124_30_21()) return true;
    return false;
  }

 inline bool jj_3_6()
 {
    if (jj_done) return true;
    if (jj_scan_token(OR)) return true;
    if (jj_3R_LT_parse_123_30_20()) return true;
    return false;
  }

 inline bool jj_3_5()
 {
    if (jj_done) return true;
    if (jj_scan_token(AND)) return true;
    if (jj_3R_OR_parse_121_30_19()) return true;
    return false;
  }

 inline bool jj_3R_MOD_parse_133_30_30()
 {
    if (jj_done) return true;
    if (jj_3R_unary_136_2_31()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_17()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_DIV_parse_132_30_29()
 {
    if (jj_done) return true;
    if (jj_3R_MOD_parse_133_30_30()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_16()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_MUL_parse_131_30_28()
 {
    if (jj_done) return true;
    if (jj_3R_DIV_parse_132_30_29()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_15()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_identifier_157_3_35()
 {
    if (jj_done) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    return false;
  }

 inline bool jj_3R_SUB_parse_130_30_27()
 {
    if (jj_done) return true;
    if (jj_3R_MUL_parse_131_30_28()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_14()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_ADD_parse_129_30_26()
 {
    if (jj_done) return true;
    if (jj_3R_SUB_parse_130_30_27()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_13()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_NE_parse_128_30_25()
 {
    if (jj_done) return true;
    if (jj_3R_ADD_parse_129_30_26()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_12()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_parseBoolean_154_3_34()
 {
    if (jj_done) return true;
    if (jj_scan_token(BOOLEAN)) return true;
    return false;
  }

 inline bool jj_3R_EQ_parse_127_30_24()
 {
    if (jj_done) return true;
    if (jj_3R_NE_parse_128_30_25()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_11()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_GT_parse_126_30_23()
 {
    if (jj_done) return true;
    if (jj_3R_EQ_parse_127_30_24()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_10()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_GE_parse_125_30_22()
 {
    if (jj_done) return true;
    if (jj_3R_GT_parse_126_30_23()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_9()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_LE_parse_124_30_21()
 {
    if (jj_done) return true;
    if (jj_3R_GE_parse_125_30_22()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_8()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_parseInteger_151_2_33()
 {
    if (jj_done) return true;
    if (jj_scan_token(INTEGER_LITERAL)) return true;
    return false;
  }

 inline bool jj_3R_LT_parse_123_30_20()
 {
    if (jj_done) return true;
    if (jj_3R_LE_parse_124_30_21()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_7()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_parseFloat_148_3_32()
 {
    if (jj_done) return true;
    if (jj_scan_token(FLOATING_POINT_LITERAL)) return true;
    return false;
  }

 inline bool jj_3R_OR_parse_121_30_19()
 {
    if (jj_done) return true;
    if (jj_3R_LT_parse_123_30_20()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_6()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_AND_parse_120_30_36()
 {
    if (jj_done) return true;
    if (jj_3R_OR_parse_121_30_19()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_5()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3_25()
 {
    if (jj_done) return true;
    if (jj_scan_token(NOT)) return true;
    if (jj_3R_expression_116_1_18()) return true;
    return false;
  }

 inline bool jj_3_24()
 {
    if (jj_done) return true;
    if (jj_scan_token(LP)) return true;
    if (jj_3R_expression_116_1_18()) return true;
    if (jj_scan_token(RP)) return true;
    return false;
  }

 inline bool jj_3_23()
 {
    if (jj_done) return true;
    if (jj_3R_identifier_157_3_35()) return true;
    return false;
  }

 inline bool jj_3_21()
 {
    if (jj_done) return true;
    if (jj_scan_token(SUB)) return true;
    if (jj_3R_parseInteger_151_2_33()) return true;
    return false;
  }

 inline bool jj_3_22()
 {
    if (jj_done) return true;
    if (jj_3R_parseBoolean_154_3_34()) return true;
    return false;
  }

 inline bool jj_3_19()
 {
    if (jj_done) return true;
    if (jj_scan_token(SUB)) return true;
    if (jj_3R_parseFloat_148_3_32()) return true;
    return false;
  }

 inline bool jj_3_20()
 {
    if (jj_done) return true;
    if (jj_3R_parseInteger_151_2_33()) return true;
    return false;
  }

 inline bool jj_3R_unary_136_2_31()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3_18()) {
    jj_scanpos = xsp;
    if (jj_3_19()) {
    jj_scanpos = xsp;
    if (jj_3_20()) {
    jj_scanpos = xsp;
    if (jj_3_21()) {
    jj_scanpos = xsp;
    if (jj_3_22()) {
    jj_scanpos = xsp;
    if (jj_3_23()) {
    jj_scanpos = xsp;
    if (jj_3_24()) {
    jj_scanpos = xsp;
    if (jj_3_25()) return true;
    }
    }
    }
    }
    }
    }
    }
    return false;
  }

 inline bool jj_3_4()
 {
    if (jj_done) return true;
    if (jj_scan_token(45)) return true;
    if (jj_3R_expression_116_1_18()) return true;
    return false;
  }

 inline bool jj_3_18()
 {
    if (jj_done) return true;
    if (jj_3R_parseFloat_148_3_32()) return true;
    return false;
  }

 inline bool jj_3R_expression_116_1_18()
 {
    if (jj_done) return true;
    if (jj_3R_AND_parse_120_30_36()) return true;
    return false;
  }

 inline bool jj_3R_assignment_108_5_17()
 {
    if (jj_done) return true;
    if (jj_3R_identifier_157_3_35()) return true;
    if (jj_scan_token(45)) return true;
    if (jj_3R_expression_116_1_18()) return true;
    return false;
  }

 inline bool jj_3R_declaration_104_5_16()
 {
    if (jj_done) return true;
    if (jj_3R_identifier_157_3_35()) return true;
    if (jj_3R_identifier_157_3_35()) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3_4()) jj_scanpos = xsp;
    return false;
  }

 inline bool jj_3_3()
 {
    if (jj_done) return true;
    if (jj_3R_assignment_108_5_17()) return true;
    return false;
  }

 inline bool jj_3_2()
 {
    if (jj_done) return true;
    if (jj_3R_declaration_104_5_16()) return true;
    return false;
  }

 inline bool jj_3R_statement_parse_99_5_15()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3_2()) {
    jj_scanpos = xsp;
    if (jj_3_3()) return true;
    }
    return false;
  }

 inline bool jj_3_1()
 {
    if (jj_done) return true;
    if (jj_3R_statement_parse_99_5_15()) return true;
    if (jj_scan_token(44)) return true;
    return false;
  }


public: 
  void setErrorHandler(ErrorHandler *eh) {
    if (errorHandler) delete errorHandler;
    errorHandler = eh;
  }

  TokenManager *token_source = nullptr;
  CharStream   *jj_input_stream = nullptr;
  /** Current token. */
  Token        *token = nullptr;
  /** Next token. */
  Token        *jj_nt = nullptr;

private: 
  int           jj_ntk;
  JJCalls       jj_2_rtns[26];
  bool          jj_rescan;
  int           jj_gc;
  Token        *jj_scanpos, *jj_lastpos;
  int           jj_la;
  /** Whether we are looking ahead. */
  bool          jj_lookingAhead;
  bool          jj_semLA;
  int           jj_gen;
  int           jj_la1[1];
  ErrorHandler *errorHandler = nullptr;

protected: 
  bool          hasError;

  Token *head; 
public: 
  Parser(TokenManager *tokenManager);
  virtual ~Parser();
void ReInit(TokenManager* tokenManager);
void clear();
Token * jj_consume_token(int kind);
bool  jj_scan_token(int kind);
Token * getNextToken();
Token * getToken(int index);
int jj_ntk_f();
private:
  int jj_kind;
  int **jj_expentries;
  int *jj_expentry;
  void jj_add_error_token(int kind, int pos);
protected:
  /** Generate ParseException. */
  virtual void  parseError();
private:
  int  indent;	// trace indentation
  bool trace = false; // trace enabled if true

public:
  bool trace_enabled();
  void enable_tracing();
  void disable_tracing();
  void jj_rescan_token();
  void jj_save(int index, int xla);


  JJTParserState jjtree;
private:
  bool jj_done;
};
}
#endif
