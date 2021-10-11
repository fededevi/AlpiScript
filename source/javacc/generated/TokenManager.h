/* Generated By:JavaCC: Do not edit this line. TokenManager.h Version 7.0 */
/* JavaCCOptions:STATIC=true,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#ifndef JAVACC_TOKENMANAGER_H
#define JAVACC_TOKENMANAGER_H

#include <iostream>
#include "JavaCC.h"
#include "Token.h"

namespace AlpiScript {
/**
 * An implementation for this interface is generated by
 * JavaCCParser.  The user is free to use any implementation
 * of their choice.
 */

class TokenManager {
public:
  virtual       ~TokenManager() { }
  /** This gets the next token from the input stream.
   *  A token of kind 0 (`<EOF>`) should be returned on EOF.
   */
  virtual Token *getNextToken() = 0;
  virtual void   setParser(void* parser) {};
  virtual void   lexicalError() {
  	std::cerr << "Lexical error encountered." << std::endl;
  }

};

}

#endif
/* JavaCC - OriginalChecksum=539c75ba5261bd1074c8106a30cdca27 (do not edit this line) */