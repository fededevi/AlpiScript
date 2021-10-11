/* ParserTokenManager.cc */
#include "ParserTokenManager.h"
#include "TokenMgrError.h"
#include "SimpleNode.h"
namespace AlpiScript {
static const unsigned long long jjbitVec0[] = {
   0x0ULL, 0x0ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL
};
static const int jjnextStates[] = {
   40, 41, 46, 47, 50, 51, 16, 27, 28, 30, 18, 20, 55, 57, 10, 12, 
   13, 16, 27, 28, 32, 30, 42, 43, 16, 50, 51, 16, 14, 15, 21, 22, 
   24, 29, 31, 33, 36, 44, 45, 48, 49, 52, 53, 
};
static JJChar jjstrLiteralChars_0[] = {0};
static JJChar jjstrLiteralChars_1[] = {0};
static JJChar jjstrLiteralChars_2[] = {0};
static JJChar jjstrLiteralChars_3[] = {0};
static JJChar jjstrLiteralChars_4[] = {0};
static JJChar jjstrLiteralChars_5[] = {0};

static JJChar jjstrLiteralChars_6[] = {0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0};
static JJChar jjstrLiteralChars_7[] = {0x76, 0x61, 0x72, 0};

static JJChar jjstrLiteralChars_8[] = {0x69, 0x66, 0};
static JJChar jjstrLiteralChars_9[] = {0x65, 0x6c, 0x73, 0x65, 0};

static JJChar jjstrLiteralChars_10[] = {0x77, 0x68, 0x69, 0x6c, 0x65, 0};

static JJChar jjstrLiteralChars_11[] = {0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0};
static JJChar jjstrLiteralChars_12[] = {0x28, 0};

static JJChar jjstrLiteralChars_13[] = {0x29, 0};
static JJChar jjstrLiteralChars_14[] = {0x7b, 0};

static JJChar jjstrLiteralChars_15[] = {0x7d, 0};
static JJChar jjstrLiteralChars_16[] = {0x5b, 0};

static JJChar jjstrLiteralChars_17[] = {0x5d, 0};
static JJChar jjstrLiteralChars_18[] = {0x2b, 0};

static JJChar jjstrLiteralChars_19[] = {0x2d, 0};
static JJChar jjstrLiteralChars_20[] = {0x2a, 0};

static JJChar jjstrLiteralChars_21[] = {0x2f, 0};
static JJChar jjstrLiteralChars_22[] = {0x25, 0};

static JJChar jjstrLiteralChars_23[] = {0x3c, 0};
static JJChar jjstrLiteralChars_24[] = {0x3c, 0x3d, 0};

static JJChar jjstrLiteralChars_25[] = {0x3e, 0x3d, 0};
static JJChar jjstrLiteralChars_26[] = {0x3e, 0};

static JJChar jjstrLiteralChars_27[] = {0x3d, 0x3d, 0};
static JJChar jjstrLiteralChars_28[] = {0x21, 0x3d, 0};

static JJChar jjstrLiteralChars_29[] = {0x26, 0x26, 0};
static JJChar jjstrLiteralChars_30[] = {0x7c, 0x7c, 0};

static JJChar jjstrLiteralChars_31[] = {0x21, 0};
static JJChar jjstrLiteralChars_32[] = {0};
static JJChar jjstrLiteralChars_33[] = {0};
static JJChar jjstrLiteralChars_34[] = {0};
static JJChar jjstrLiteralChars_35[] = {0};
static JJChar jjstrLiteralChars_36[] = {0};
static JJChar jjstrLiteralChars_37[] = {0};
static JJChar jjstrLiteralChars_38[] = {0};
static JJChar jjstrLiteralChars_39[] = {0};
static JJChar jjstrLiteralChars_40[] = {0};
static JJChar jjstrLiteralChars_41[] = {0};
static JJChar jjstrLiteralChars_42[] = {0};
static JJChar jjstrLiteralChars_43[] = {0};
static const JJString jjstrLiteralImages[] = {
jjstrLiteralChars_0, 
jjstrLiteralChars_1, 
jjstrLiteralChars_2, 
jjstrLiteralChars_3, 
jjstrLiteralChars_4, 
jjstrLiteralChars_5, 
jjstrLiteralChars_6, 
jjstrLiteralChars_7, 
jjstrLiteralChars_8, 
jjstrLiteralChars_9, 
jjstrLiteralChars_10, 
jjstrLiteralChars_11, 
jjstrLiteralChars_12, 
jjstrLiteralChars_13, 
jjstrLiteralChars_14, 
jjstrLiteralChars_15, 
jjstrLiteralChars_16, 
jjstrLiteralChars_17, 
jjstrLiteralChars_18, 
jjstrLiteralChars_19, 
jjstrLiteralChars_20, 
jjstrLiteralChars_21, 
jjstrLiteralChars_22, 
jjstrLiteralChars_23, 
jjstrLiteralChars_24, 
jjstrLiteralChars_25, 
jjstrLiteralChars_26, 
jjstrLiteralChars_27, 
jjstrLiteralChars_28, 
jjstrLiteralChars_29, 
jjstrLiteralChars_30, 
jjstrLiteralChars_31, 
jjstrLiteralChars_32, 
jjstrLiteralChars_33, 
jjstrLiteralChars_34, 
jjstrLiteralChars_35, 
jjstrLiteralChars_36, 
jjstrLiteralChars_37, 
jjstrLiteralChars_38, 
jjstrLiteralChars_39, 
jjstrLiteralChars_40, 
jjstrLiteralChars_41, 
jjstrLiteralChars_42, 
jjstrLiteralChars_43, 
};

/** Lexer state names. */
static const JJChar lexStateNames_arr_0[] = 
{0x44, 0x45, 0x46, 0x41, 0x55, 0x4c, 0x54, 0};
static const JJString lexStateNames[] = {
lexStateNames_arr_0, 
};
static const unsigned long long jjtoToken[] = {
   0xe8cffffffc1ULL, 
};
static const unsigned long long jjtoSkip[] = {
   0x3eULL, 
};

  void  ParserTokenManager::setDebugStream(FILE *ds){ debugStream = ds; }

 int ParserTokenManager::jjStopStringLiteralDfa_0(int pos, unsigned long long active0){
   switch (pos)
   {
      case 0:
         if ((active0 & 0x7c0ULL) != 0L)
         {
            jjmatchedKind = 43;
            return 38;
         }
         if ((active0 & 0x800ULL) != 0L)
         {
            jjmatchedKind = 43;
            return 6;
         }
         return -1;
      case 1:
         if ((active0 & 0x100ULL) != 0L)
            return 38;
         if ((active0 & 0xec0ULL) != 0L)
         {
            jjmatchedKind = 43;
            jjmatchedPos = 1;
            return 38;
         }
         return -1;
      case 2:
         if ((active0 & 0x80ULL) != 0L)
            return 38;
         if ((active0 & 0xe40ULL) != 0L)
         {
            jjmatchedKind = 43;
            jjmatchedPos = 2;
            return 38;
         }
         return -1;
      case 3:
         if ((active0 & 0xc40ULL) != 0L)
         {
            jjmatchedKind = 43;
            jjmatchedPos = 3;
            return 38;
         }
         if ((active0 & 0x200ULL) != 0L)
            return 38;
         return -1;
      case 4:
         if ((active0 & 0x400ULL) != 0L)
            return 38;
         if ((active0 & 0x840ULL) != 0L)
         {
            jjmatchedKind = 43;
            jjmatchedPos = 4;
            return 38;
         }
         return -1;
      case 5:
         if ((active0 & 0x40ULL) != 0L)
            return 38;
         if ((active0 & 0x800ULL) != 0L)
         {
            jjmatchedKind = 43;
            jjmatchedPos = 5;
            return 38;
         }
         return -1;
      case 6:
         if ((active0 & 0x800ULL) != 0L)
         {
            jjmatchedKind = 43;
            jjmatchedPos = 6;
            return 38;
         }
         return -1;
      default :
         return -1;
   }
}

int  ParserTokenManager::jjStartNfa_0(int pos, unsigned long long active0){
   return jjMoveNfa_0(jjStopStringLiteralDfa_0(pos, active0), pos + 1);
}

 int  ParserTokenManager::jjStopAtPos(int pos, int kind){
   jjmatchedKind = kind;
   jjmatchedPos = pos;
   return pos + 1;
}

 int  ParserTokenManager::jjMoveStringLiteralDfa0_0(){
   switch(curChar)
   {
      case 13:
         jjmatchedKind = 4;
         return jjMoveStringLiteralDfa1_0(0x20ULL);
      case 33:
         jjmatchedKind = 31;
         return jjMoveStringLiteralDfa1_0(0x10000000ULL);
      case 37:
         return jjStopAtPos(0, 22);
      case 38:
         return jjMoveStringLiteralDfa1_0(0x20000000ULL);
      case 40:
         return jjStopAtPos(0, 12);
      case 41:
         return jjStopAtPos(0, 13);
      case 42:
         return jjStopAtPos(0, 20);
      case 43:
         return jjStopAtPos(0, 18);
      case 45:
         return jjStopAtPos(0, 19);
      case 47:
         return jjStopAtPos(0, 21);
      case 60:
         jjmatchedKind = 23;
         return jjMoveStringLiteralDfa1_0(0x1000000ULL);
      case 61:
         return jjMoveStringLiteralDfa1_0(0x8000000ULL);
      case 62:
         jjmatchedKind = 26;
         return jjMoveStringLiteralDfa1_0(0x2000000ULL);
      case 91:
         return jjStopAtPos(0, 16);
      case 93:
         return jjStopAtPos(0, 17);
      case 101:
         return jjMoveStringLiteralDfa1_0(0x200ULL);
      case 102:
         return jjMoveStringLiteralDfa1_0(0x800ULL);
      case 105:
         return jjMoveStringLiteralDfa1_0(0x100ULL);
      case 114:
         return jjMoveStringLiteralDfa1_0(0x40ULL);
      case 118:
         return jjMoveStringLiteralDfa1_0(0x80ULL);
      case 119:
         return jjMoveStringLiteralDfa1_0(0x400ULL);
      case 123:
         return jjStopAtPos(0, 14);
      case 124:
         return jjMoveStringLiteralDfa1_0(0x40000000ULL);
      case 125:
         return jjStopAtPos(0, 15);
      default :
         return jjMoveNfa_0(3, 0);
   }
}

 int  ParserTokenManager::jjMoveStringLiteralDfa1_0(unsigned long long active0){
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(0, active0);
      return 1;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 10:
         if ((active0 & 0x20ULL) != 0L)
            return jjStopAtPos(1, 5);
         break;
      case 38:
         if ((active0 & 0x20000000ULL) != 0L)
            return jjStopAtPos(1, 29);
         break;
      case 61:
         if ((active0 & 0x1000000ULL) != 0L)
            return jjStopAtPos(1, 24);
         else if ((active0 & 0x2000000ULL) != 0L)
            return jjStopAtPos(1, 25);
         else if ((active0 & 0x8000000ULL) != 0L)
            return jjStopAtPos(1, 27);
         else if ((active0 & 0x10000000ULL) != 0L)
            return jjStopAtPos(1, 28);
         break;
      case 97:
         return jjMoveStringLiteralDfa2_0(active0, 0x80ULL);
      case 101:
         return jjMoveStringLiteralDfa2_0(active0, 0x40ULL);
      case 102:
         if ((active0 & 0x100ULL) != 0L)
            return jjStartNfaWithStates_0(1, 8, 38);
         break;
      case 104:
         return jjMoveStringLiteralDfa2_0(active0, 0x400ULL);
      case 108:
         return jjMoveStringLiteralDfa2_0(active0, 0x200ULL);
      case 117:
         return jjMoveStringLiteralDfa2_0(active0, 0x800ULL);
      case 124:
         if ((active0 & 0x40000000ULL) != 0L)
            return jjStopAtPos(1, 30);
         break;
      default :
         break;
   }
   return jjStartNfa_0(0, active0);
}

 int  ParserTokenManager::jjMoveStringLiteralDfa2_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(0, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(1, active0);
      return 2;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 105:
         return jjMoveStringLiteralDfa3_0(active0, 0x400ULL);
      case 110:
         return jjMoveStringLiteralDfa3_0(active0, 0x800ULL);
      case 114:
         if ((active0 & 0x80ULL) != 0L)
            return jjStartNfaWithStates_0(2, 7, 38);
         break;
      case 115:
         return jjMoveStringLiteralDfa3_0(active0, 0x200ULL);
      case 116:
         return jjMoveStringLiteralDfa3_0(active0, 0x40ULL);
      default :
         break;
   }
   return jjStartNfa_0(1, active0);
}

 int  ParserTokenManager::jjMoveStringLiteralDfa3_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(1, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(2, active0);
      return 3;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 99:
         return jjMoveStringLiteralDfa4_0(active0, 0x800ULL);
      case 101:
         if ((active0 & 0x200ULL) != 0L)
            return jjStartNfaWithStates_0(3, 9, 38);
         break;
      case 108:
         return jjMoveStringLiteralDfa4_0(active0, 0x400ULL);
      case 117:
         return jjMoveStringLiteralDfa4_0(active0, 0x40ULL);
      default :
         break;
   }
   return jjStartNfa_0(2, active0);
}

 int  ParserTokenManager::jjMoveStringLiteralDfa4_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(2, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(3, active0);
      return 4;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 101:
         if ((active0 & 0x400ULL) != 0L)
            return jjStartNfaWithStates_0(4, 10, 38);
         break;
      case 114:
         return jjMoveStringLiteralDfa5_0(active0, 0x40ULL);
      case 116:
         return jjMoveStringLiteralDfa5_0(active0, 0x800ULL);
      default :
         break;
   }
   return jjStartNfa_0(3, active0);
}

 int  ParserTokenManager::jjMoveStringLiteralDfa5_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(3, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(4, active0);
      return 5;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 105:
         return jjMoveStringLiteralDfa6_0(active0, 0x800ULL);
      case 110:
         if ((active0 & 0x40ULL) != 0L)
            return jjStartNfaWithStates_0(5, 6, 38);
         break;
      default :
         break;
   }
   return jjStartNfa_0(4, active0);
}

 int  ParserTokenManager::jjMoveStringLiteralDfa6_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(4, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(5, active0);
      return 6;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 111:
         return jjMoveStringLiteralDfa7_0(active0, 0x800ULL);
      default :
         break;
   }
   return jjStartNfa_0(5, active0);
}

 int  ParserTokenManager::jjMoveStringLiteralDfa7_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(5, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(6, active0);
      return 7;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 110:
         if ((active0 & 0x800ULL) != 0L)
            return jjStartNfaWithStates_0(7, 11, 38);
         break;
      default :
         break;
   }
   return jjStartNfa_0(6, active0);
}

int ParserTokenManager::jjStartNfaWithStates_0(int pos, int kind, int state){
   jjmatchedKind = kind;
   jjmatchedPos = pos;
   if (input_stream->endOfInput()) { return pos + 1; }
   curChar = input_stream->readChar();
   return jjMoveNfa_0(state, pos + 1);
}

int ParserTokenManager::jjMoveNfa_0(int startState, int curPos){
   int startsAt = 0;
   jjnewStateCnt = 58;
   int i = 1;
   jjstateSet[0] = startState;
   int kind = 0x7fffffff;
   for (;;)
   {
      if (++jjround == 0x7fffffff)
         ReInitRounds();
      if (curChar < 64)
      {
         unsigned long long l = 1ULL << curChar;
         (void)l;
         do
         {
            switch(jjstateSet[--i])
            {
               case 6:
               case 38:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 43)
                     kind = 43;
                  { jjCheckNAdd(38); }
                  break;
               case 3:
                  if ((0x3ff000000000000ULL & l) != 0L)
                     { jjCheckNAddStates(0, 6); }
                  else if (curChar == 34)
                     { jjCheckNAddStates(7, 9); }
                  else if (curChar == 39)
                     { jjAddStates(10, 11); }
                  else if (curChar == 46)
                     { jjCheckNAdd(12); }
                  if ((0x3fe000000000000ULL & l) != 0L)
                  {
                     if (kind > 35)
                        kind = 35;
                     { jjCheckNAddTwoStates(9, 10); }
                  }
                  else if (curChar == 48)
                  {
                     if (kind > 35)
                        kind = 35;
                     { jjCheckNAddStates(12, 14); }
                  }
                  break;
               case 8:
                  if ((0x3fe000000000000ULL & l) == 0L)
                     break;
                  if (kind > 35)
                     kind = 35;
                  { jjCheckNAddTwoStates(9, 10); }
                  break;
               case 9:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 35)
                     kind = 35;
                  { jjCheckNAddTwoStates(9, 10); }
                  break;
               case 11:
                  if (curChar == 46)
                     { jjCheckNAdd(12); }
                  break;
               case 12:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 39)
                     kind = 39;
                  { jjCheckNAddStates(15, 17); }
                  break;
               case 14:
                  if ((0x280000000000ULL & l) != 0L)
                     { jjCheckNAdd(15); }
                  break;
               case 15:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 39)
                     kind = 39;
                  { jjCheckNAddTwoStates(15, 16); }
                  break;
               case 17:
                  if (curChar == 39)
                     { jjAddStates(10, 11); }
                  break;
               case 18:
                  if ((0xffffff7fffffdbffULL & l) != 0L)
                     { jjCheckNAdd(19); }
                  break;
               case 19:
                  if (curChar == 39 && kind > 41)
                     kind = 41;
                  break;
               case 21:
                  if ((0x8400000000ULL & l) != 0L)
                     { jjCheckNAdd(19); }
                  break;
               case 22:
                  if ((0xff000000000000ULL & l) != 0L)
                     { jjCheckNAddTwoStates(23, 19); }
                  break;
               case 23:
                  if ((0xff000000000000ULL & l) != 0L)
                     { jjCheckNAdd(19); }
                  break;
               case 24:
                  if ((0xf000000000000ULL & l) != 0L)
                     jjstateSet[jjnewStateCnt++] = 25;
                  break;
               case 25:
                  if ((0xff000000000000ULL & l) != 0L)
                     { jjCheckNAdd(23); }
                  break;
               case 26:
                  if (curChar == 34)
                     { jjCheckNAddStates(7, 9); }
                  break;
               case 27:
                  if ((0xfffffffbffffdbffULL & l) != 0L)
                     { jjCheckNAddStates(7, 9); }
                  break;
               case 29:
                  if ((0x8400002400ULL & l) != 0L)
                     { jjCheckNAddStates(7, 9); }
                  break;
               case 30:
                  if (curChar == 34 && kind > 42)
                     kind = 42;
                  break;
               case 31:
                  if ((0xff000000000000ULL & l) != 0L)
                     { jjCheckNAddStates(18, 21); }
                  break;
               case 32:
                  if ((0xff000000000000ULL & l) != 0L)
                     { jjCheckNAddStates(7, 9); }
                  break;
               case 33:
                  if ((0xf000000000000ULL & l) != 0L)
                     jjstateSet[jjnewStateCnt++] = 34;
                  break;
               case 34:
                  if ((0xff000000000000ULL & l) != 0L)
                     { jjCheckNAdd(32); }
                  break;
               case 35:
                  if (curChar == 10)
                     { jjCheckNAddStates(7, 9); }
                  break;
               case 36:
                  if (curChar == 13)
                     jjstateSet[jjnewStateCnt++] = 35;
                  break;
               case 39:
                  if ((0x3ff000000000000ULL & l) != 0L)
                     { jjCheckNAddStates(0, 6); }
                  break;
               case 40:
                  if ((0x3ff000000000000ULL & l) != 0L)
                     { jjCheckNAddTwoStates(40, 41); }
                  break;
               case 41:
                  if (curChar != 46)
                     break;
                  if (kind > 39)
                     kind = 39;
                  { jjCheckNAddStates(22, 24); }
                  break;
               case 42:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 39)
                     kind = 39;
                  { jjCheckNAddStates(22, 24); }
                  break;
               case 44:
                  if ((0x280000000000ULL & l) != 0L)
                     { jjCheckNAdd(45); }
                  break;
               case 45:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 39)
                     kind = 39;
                  { jjCheckNAddTwoStates(45, 16); }
                  break;
               case 46:
                  if ((0x3ff000000000000ULL & l) != 0L)
                     { jjCheckNAddTwoStates(46, 47); }
                  break;
               case 48:
                  if ((0x280000000000ULL & l) != 0L)
                     { jjCheckNAdd(49); }
                  break;
               case 49:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 39)
                     kind = 39;
                  { jjCheckNAddTwoStates(49, 16); }
                  break;
               case 50:
                  if ((0x3ff000000000000ULL & l) != 0L)
                     { jjCheckNAddStates(25, 27); }
                  break;
               case 52:
                  if ((0x280000000000ULL & l) != 0L)
                     { jjCheckNAdd(53); }
                  break;
               case 53:
                  if ((0x3ff000000000000ULL & l) != 0L)
                     { jjCheckNAddTwoStates(53, 16); }
                  break;
               case 54:
                  if (curChar != 48)
                     break;
                  if (kind > 35)
                     kind = 35;
                  { jjCheckNAddStates(12, 14); }
                  break;
               case 56:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 35)
                     kind = 35;
                  { jjCheckNAddTwoStates(56, 10); }
                  break;
               case 57:
                  if ((0xff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 35)
                     kind = 35;
                  { jjCheckNAddTwoStates(57, 10); }
                  break;
               default : break;
            }
         } while(i != startsAt);
      }
      else if (curChar < 128)
      {
         unsigned long long l = 1ULL << (curChar & 077);
         (void)l;
         do
         {
            switch(jjstateSet[--i])
            {
               case 6:
                  if ((0x7fffffe87fffffeULL & l) != 0L)
                  {
                     if (kind > 43)
                        kind = 43;
                     { jjCheckNAdd(38); }
                  }
                  if (curChar == 97)
                     jjstateSet[jjnewStateCnt++] = 5;
                  break;
               case 3:
                  if ((0x7fffffe87fffffeULL & l) != 0L)
                  {
                     if (kind > 43)
                        kind = 43;
                     { jjCheckNAdd(38); }
                  }
                  if (curChar == 102)
                     jjstateSet[jjnewStateCnt++] = 6;
                  else if (curChar == 116)
                     jjstateSet[jjnewStateCnt++] = 2;
                  break;
               case 0:
                  if (curChar == 101 && kind > 34)
                     kind = 34;
                  break;
               case 1:
                  if (curChar == 117)
                     { jjCheckNAdd(0); }
                  break;
               case 2:
                  if (curChar == 114)
                     jjstateSet[jjnewStateCnt++] = 1;
                  break;
               case 4:
                  if (curChar == 115)
                     { jjCheckNAdd(0); }
                  break;
               case 5:
                  if (curChar == 108)
                     jjstateSet[jjnewStateCnt++] = 4;
                  break;
               case 7:
                  if (curChar == 102)
                     jjstateSet[jjnewStateCnt++] = 6;
                  break;
               case 10:
                  if ((0x100000001000ULL & l) != 0L && kind > 35)
                     kind = 35;
                  break;
               case 13:
                  if ((0x2000000020ULL & l) != 0L)
                     { jjAddStates(28, 29); }
                  break;
               case 16:
                  if ((0x5000000050ULL & l) != 0L && kind > 39)
                     kind = 39;
                  break;
               case 18:
                  if ((0xffffffffefffffffULL & l) != 0L)
                     { jjCheckNAdd(19); }
                  break;
               case 20:
                  if (curChar == 92)
                     { jjAddStates(30, 32); }
                  break;
               case 21:
                  if ((0x14404410000000ULL & l) != 0L)
                     { jjCheckNAdd(19); }
                  break;
               case 27:
                  if ((0xffffffffefffffffULL & l) != 0L)
                     { jjCheckNAddStates(7, 9); }
                  break;
               case 28:
                  if (curChar == 92)
                     { jjAddStates(33, 36); }
                  break;
               case 29:
                  if ((0x14404410000000ULL & l) != 0L)
                     { jjCheckNAddStates(7, 9); }
                  break;
               case 37:
                  if ((0x7fffffe87fffffeULL & l) == 0L)
                     break;
                  if (kind > 43)
                     kind = 43;
                  { jjCheckNAdd(38); }
                  break;
               case 38:
                  if ((0x7fffffe87fffffeULL & l) == 0L)
                     break;
                  if (kind > 43)
                     kind = 43;
                  { jjCheckNAdd(38); }
                  break;
               case 43:
                  if ((0x2000000020ULL & l) != 0L)
                     { jjAddStates(37, 38); }
                  break;
               case 47:
                  if ((0x2000000020ULL & l) != 0L)
                     { jjAddStates(39, 40); }
                  break;
               case 51:
                  if ((0x2000000020ULL & l) != 0L)
                     { jjAddStates(41, 42); }
                  break;
               case 55:
                  if ((0x100000001000000ULL & l) != 0L)
                     { jjCheckNAdd(56); }
                  break;
               case 56:
                  if ((0x7e0000007eULL & l) == 0L)
                     break;
                  if (kind > 35)
                     kind = 35;
                  { jjCheckNAddTwoStates(56, 10); }
                  break;
               default : break;
            }
         } while(i != startsAt);
      }
      else
      {
         int i2 = (curChar & 0xff) >> 6;
         unsigned long long l2 = 1ULL << (curChar & 077);
         do
         {
            switch(jjstateSet[--i])
            {
               case 18:
                  if ((jjbitVec0[i2] & l2) != 0L)
                     jjstateSet[jjnewStateCnt++] = 19;
                  break;
               case 27:
                  if ((jjbitVec0[i2] & l2) != 0L)
                     { jjAddStates(7, 9); }
                  break;
               default : break;
            }
         } while(i != startsAt);
      }
      if (kind != 0x7fffffff)
      {
         jjmatchedKind = kind;
         jjmatchedPos = curPos;
         kind = 0x7fffffff;
      }
      ++curPos;
      if ((i = jjnewStateCnt), (jjnewStateCnt = startsAt), (i == (startsAt = 58 - startsAt)))
         return curPos;
      if (input_stream->endOfInput()) { return curPos; }
      curChar = input_stream->readChar();
   }
}

/** Token literal values. */

Token * ParserTokenManager::jjFillToken(){
   Token *t;
   JJString curTokenImage;
   int beginLine   = -1;
   int endLine     = -1;
   int beginColumn = -1;
   int endColumn   = -1;
   JJString im = jjstrLiteralImages[jjmatchedKind];
   curTokenImage = (im.length() == 0) ? input_stream->GetImage() : im;
   if (input_stream->getTrackLineColumn()) {
     beginLine = input_stream->getBeginLine();
     beginColumn = input_stream->getBeginColumn();
     endLine = input_stream->getEndLine();
     endColumn = input_stream->getEndColumn();
   }
   t = Token::newToken(jjmatchedKind, curTokenImage);
   t->specialToken = nullptr;
   t->next = nullptr;

   if (input_stream->getTrackLineColumn()) {
   t->beginLine = beginLine;
   t->endLine = endLine;
   t->beginColumn = beginColumn;
   t->endColumn = endColumn;
   }

   return t;
}
const int defaultLexState = 0;
/** Get the next Token. */

Token * ParserTokenManager::getNextToken(){
  Token *matchedToken = nullptr;
  int curPos = 0;

  for (;;)
  {
   EOFLoop: 
   if (input_stream->endOfInput())
   {
      jjmatchedKind = 0;
      jjmatchedPos = -1;
      matchedToken = jjFillToken();
      return matchedToken;
   }
   curChar = input_stream->BeginToken();

   { input_stream->backup(0);
      while (curChar <= 32 && (0x100000600ULL & (1ULL << curChar)) != 0L)
   {
   if (input_stream->endOfInput()) { goto EOFLoop; }
   curChar = input_stream->BeginToken();
   }
   }
   jjmatchedKind = 0x7fffffff;
   jjmatchedPos = 0;
   curPos = jjMoveStringLiteralDfa0_0();
   if (jjmatchedKind != 0x7fffffff)
   {
      if (jjmatchedPos + 1 < curPos)
         input_stream->backup(curPos - jjmatchedPos - 1);
      if ((jjtoToken[jjmatchedKind >> 6] & (1ULL << (jjmatchedKind & 077))) != 0L)
      {
         matchedToken = jjFillToken();
         return matchedToken;
      }
      else
      {
         goto EOFLoop;
      }
   }
   int error_line = input_stream->getEndLine();
   int error_column = input_stream->getEndColumn();
   JJString error_after;
   bool EOFSeen = false;
   if (input_stream->endOfInput()) {
      EOFSeen = true;
      error_after = curPos <= 1 ? EMPTY : input_stream->GetImage();
      if (curChar == '\n' || curChar == '\r') {
         error_line++;
         error_column = 0;
      }
      else
         error_column++;
   }
   if (!EOFSeen) {
      error_after = curPos <= 1 ? EMPTY : input_stream->GetImage();
   }
   errorHandler->lexicalError(EOFSeen, curLexState, error_line, error_column, error_after, curChar, this);
  }
}

  /** Reinitialise parser. */
  void ParserTokenManager::ReInit(JAVACC_CHARSTREAM *stream, int lexState) {
    clear();
    jjmatchedPos = jjnewStateCnt = 0;
    curLexState = lexState;
    input_stream = stream;
    ReInitRounds();
    debugStream = stdout; // init
    SwitchTo(lexState);
    errorHandler = new TokenManagerErrorHandler();
  }

  void ParserTokenManager::ReInitRounds() {
    int i;
    jjround = 0x80000001;
    for (i = 58; i-- > 0;)
      jjrounds[i] = 0x80000000;
  }

  /** Switch to specified lex state. */
  void ParserTokenManager::SwitchTo(int lexState) {
    if (lexState >= 1 || lexState < 0) {
      JJString message;
#ifdef WIDE_CHAR
      message += L"Error: Ignoring invalid lexical state : ";
      message += lexState; message += L". State unchanged.";
#else
      message += "Error: Ignoring invalid lexical state : ";
      message += lexState; message += ". State unchanged.";
#endif
      throw new TokenMgrError(message, INVALID_LEXICAL_STATE);
    } else
      curLexState = lexState;
  }

  /** Constructor. */
  ParserTokenManager::ParserTokenManager (JAVACC_CHARSTREAM *stream, int lexState)
  {
    input_stream = nullptr;
    ReInit(stream, lexState);
  }

  // Destructor
  ParserTokenManager::~ParserTokenManager () {
    clear();
  }

  // clear
  void ParserTokenManager::clear() {
    //Since input_stream was generated outside of TokenManager
    //TokenManager should not take care of deleting it
    //if (input_stream) delete input_stream;
    if (errorHandler) delete errorHandler, errorHandler = nullptr;    
  }


}
