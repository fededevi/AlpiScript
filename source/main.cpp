#include "ast/expression.h"
#include "ast/program.h"
#include "ast/basetypes.h"
#include "memoryext.h"

#include <iostream>
#include <chrono>
#include <assert.h>

void alpiScriptArithmeticTest01(){
    assert(Expression::evaluateUPtr("(1-.5-7) * .34")->toFloat()->value == ((1-.5-7) * .34));
    assert(Expression::evaluateUPtr("(8*45) * (1-.5-7) * .34")->toFloat()->value == (8*45) * (1-.5-7) * .34);
    assert(Expression::evaluateUPtr("(1-5+7) + 34 + (1 * 45)+ 3- 3* (8*45)+(56/7) + 43 % 99")->toInt()->value == (1-5+7) + 34 + (1 * 45)+ 3- 3* (8*45)+(56/7) + 43 % 99);
    assert(Expression::evaluateUPtr("(1-5-7) % 34")->toInt()->value == (1-5-7) % 34);
    assert(Expression::evaluateUPtr("10 % (1)")->toInt()->value == (10 % 1));
    assert(Expression::evaluateUPtr("10 % 100")->toInt()->value == (10 % 100));
}

void alpiScriptArithmeticTest02(){
    assert(Expression::evaluateUPtr("-1 + -1")->toInt()->value  == -1 + -1);
    assert(Expression::evaluateUPtr("-1 + 0 " )->toInt()->value == -1 + 0);
    assert(Expression::evaluateUPtr("-1 + 1 " )->toInt()->value == -1 + 1);
    assert(Expression::evaluateUPtr(" 0 + -1")->toInt()->value  ==  0 + -1);
    assert(Expression::evaluateUPtr(" 0 + 0 " )->toInt()->value ==  0 + 0);
    assert(Expression::evaluateUPtr(" 0 + 1 " )->toInt()->value ==  0 + 1);
    assert(Expression::evaluateUPtr(" 1 + -1")->toInt()->value  ==  1 + -1);
    assert(Expression::evaluateUPtr(" 1 + 0 " )->toInt()->value ==  1 + 0);
    assert(Expression::evaluateUPtr(" 1 + 1 " )->toInt()->value ==  1 + 1);
    assert(Expression::evaluateUPtr("10 - -6")->toInt()->value == (10 - -6));
    assert(Expression::evaluateUPtr("10 * -6")->toInt()->value == (10 * -6));
    assert(Expression::evaluateUPtr("-10 - -6")->toInt()->value == (-10 - -6));
    assert(Expression::evaluateUPtr("-10 * -6")->toInt()->value == (-10 * -6));
    assert(Expression::evaluateUPtr("10 - -6 + -8")->toInt()->value == (10 - -6 + -8));
    assert(Expression::evaluateUPtr("10 * -6 + -8")->toInt()->value == (10 * -6 + -8));
    assert(Expression::evaluateUPtr("-10 - -6 + -8")->toInt()->value == (-10 - -6 + -8));
    assert(Expression::evaluateUPtr("-10 * -6 + -8")->toInt()->value == (-10 * -6 + -8));

    assert(Expression::evaluateUPtr("-.1 + -.1")->toFloat()->value  == - .1 + -.1);
    assert(Expression::evaluateUPtr("-.1 +  .0 " )->toFloat()->value == -.1 +  .0);
    assert(Expression::evaluateUPtr("-.1 +  .1 " )->toFloat()->value == -.1 +  .1);
    assert(Expression::evaluateUPtr(" .0 + -.1")->toFloat()->value  ==   .0 + -.1);
    assert(Expression::evaluateUPtr(" .0 +  .0 " )->toFloat()->value ==  .0 +  .0);
    assert(Expression::evaluateUPtr(" .0 +  .1 " )->toFloat()->value ==  .0 +  .1);
    assert(Expression::evaluateUPtr(" .1 + -.1")->toFloat()->value  ==   .1 + -.1);
    assert(Expression::evaluateUPtr(" .1 +  .0 " )->toFloat()->value ==  .1 +  .0);
    assert(Expression::evaluateUPtr(" .1 +  .1 " )->toFloat()->value ==  .1 +  .1);
    assert(Expression::evaluateUPtr(" .10 - -.6")->toFloat()->value == (.10 - -.6));
    assert(Expression::evaluateUPtr(" .10 * -.6")->toFloat()->value == (.10 * -.6));
    assert(Expression::evaluateUPtr("-.10 - -.6")->toFloat()->value == (-.10 - -.6));
    assert(Expression::evaluateUPtr("-.10 * -.6")->toFloat()->value == (-.10 * -.6));
    assert(Expression::evaluateUPtr(" .10 - -.6 + -.8")->toFloat()->value == (.10 - -.6 + -.8));
    assert(Expression::evaluateUPtr(" .10 * -.6 + -.8")->toFloat()->value == (.10 * -.6 + -.8));
    assert(Expression::evaluateUPtr("-.10 - -.6 + -.8")->toFloat()->value == (-.10 - -.6 + -.8));
    assert(Expression::evaluateUPtr("-.10 * -.6 + -.8")->toFloat()->value == (-.10 * -.6 + -.8));
}

void alpiScriptBooleanTest01(){
    assert( Expression::evaluateUPtr(" 1 < 1")->toBool()->value ==  (1  < 1) );
    assert( Expression::evaluateUPtr(" 1 < 1")->toBool()->value ==  (1  < 1) );
    assert( Expression::evaluateUPtr(".1 < 1")->toBool()->value ==  (.1 < 1) );
    assert( Expression::evaluateUPtr(".1 < 1")->toBool()->value ==  (.1 < 1) );
    assert( Expression::evaluateUPtr(".1 < .1")->toBool()->value == (.1 < .1) );
    assert( Expression::evaluateUPtr(".1 < .1")->toBool()->value == (.1 < .1) );
    assert( Expression::evaluateUPtr(" 1 < .1")->toBool()->value == (1  < .1) );
    assert( Expression::evaluateUPtr(" 1 < .1")->toBool()->value == (1  < .1) );
    assert( Expression::evaluateUPtr(" 1 < 2")->toBool()->value ==  (1  < 2) );
    assert( Expression::evaluateUPtr(" 2 < 1")->toBool()->value ==  (2  < 1) );
    assert( Expression::evaluateUPtr(".1 < 2")->toBool()->value ==  (.1 < 2) );
    assert( Expression::evaluateUPtr(".2 < 1")->toBool()->value ==  (.2 < 1) );
    assert( Expression::evaluateUPtr(".1 < .2")->toBool()->value == (.1 < .2) );
    assert( Expression::evaluateUPtr(".2 < .1")->toBool()->value == (.2 < .1) );
    assert( Expression::evaluateUPtr(" 1 < .2")->toBool()->value == (1  < .2) );
    assert( Expression::evaluateUPtr(" 2 < .1")->toBool()->value == (2  < .1) );

    assert( Expression::evaluateUPtr(" 1 <= 1")->toBool()->value ==  (1  <= 1) );
    assert( Expression::evaluateUPtr(" 1 <= 1")->toBool()->value ==  (1  <= 1) );
    assert( Expression::evaluateUPtr(".1 <= 1")->toBool()->value ==  (.1 <= 1) );
    assert( Expression::evaluateUPtr(".1 <= 1")->toBool()->value ==  (.1 <= 1) );
    assert( Expression::evaluateUPtr(".1 <= .1")->toBool()->value == (.1 <= .1) );
    assert( Expression::evaluateUPtr(".1 <= .1")->toBool()->value == (.1 <= .1) );
    assert( Expression::evaluateUPtr(" 1 <= .1")->toBool()->value == (1  <= .1) );
    assert( Expression::evaluateUPtr(" 1 <= .1")->toBool()->value == (1  <= .1) );
    assert( Expression::evaluateUPtr(" 1 <= 2")->toBool()->value ==  (1  <= 2) );
    assert( Expression::evaluateUPtr(" 2 <= 1")->toBool()->value ==  (2  <= 1) );
    assert( Expression::evaluateUPtr(".1 <= 2")->toBool()->value ==  (.1 <= 2) );
    assert( Expression::evaluateUPtr(".2 <= 1")->toBool()->value ==  (.2 <= 1) );
    assert( Expression::evaluateUPtr(".1 <= .2")->toBool()->value == (.1 <= .2) );
    assert( Expression::evaluateUPtr(".2 <= .1")->toBool()->value == (.2 <= .1) );
    assert( Expression::evaluateUPtr(" 1 <= .2")->toBool()->value == (1  <= .2) );
    assert( Expression::evaluateUPtr(" 2 <= .1")->toBool()->value == (2  <= .1) );

    assert( Expression::evaluateUPtr(" 1 >= 1")->toBool()->value ==  (1  >= 1) );
    assert( Expression::evaluateUPtr(" 1 >= 1")->toBool()->value ==  (1  >= 1) );
    assert( Expression::evaluateUPtr(".1 >= 1")->toBool()->value ==  (.1 >= 1) );
    assert( Expression::evaluateUPtr(".1 >= 1")->toBool()->value ==  (.1 >= 1) );
    assert( Expression::evaluateUPtr(".1 >= .1")->toBool()->value == (.1 >= .1) );
    assert( Expression::evaluateUPtr(".1 >= .1")->toBool()->value == (.1 >= .1) );
    assert( Expression::evaluateUPtr(" 1 >= .1")->toBool()->value == (1  >= .1) );
    assert( Expression::evaluateUPtr(" 1 >= .1")->toBool()->value == (1  >= .1) );
    assert( Expression::evaluateUPtr(" 1 >= 2")->toBool()->value ==  (1  >= 2) );
    assert( Expression::evaluateUPtr(" 2 >= 1")->toBool()->value ==  (2  >= 1) );
    assert( Expression::evaluateUPtr(".1 >= 2")->toBool()->value ==  (.1 >= 2) );
    assert( Expression::evaluateUPtr(".2 >= 1")->toBool()->value ==  (.2 >= 1) );
    assert( Expression::evaluateUPtr(".1 >= .2")->toBool()->value == (.1 >= .2) );
    assert( Expression::evaluateUPtr(".2 >= .1")->toBool()->value == (.2 >= .1) );
    assert( Expression::evaluateUPtr(" 1 >= .2")->toBool()->value == (1  >= .2) );
    assert( Expression::evaluateUPtr(" 2 >= .1")->toBool()->value == (2  >= .1) );

    assert( Expression::evaluateUPtr(" 1 > 1")->toBool()->value ==  (1  > 1) );
    assert( Expression::evaluateUPtr(" 1 > 1")->toBool()->value ==  (1  > 1) );
    assert( Expression::evaluateUPtr(".1 > 1")->toBool()->value ==  (.1 > 1) );
    assert( Expression::evaluateUPtr(".1 > 1")->toBool()->value ==  (.1 > 1) );
    assert( Expression::evaluateUPtr(".1 > .1")->toBool()->value == (.1 > .1) );
    assert( Expression::evaluateUPtr(".1 > .1")->toBool()->value == (.1 > .1) );
    assert( Expression::evaluateUPtr(" 1 > .1")->toBool()->value == (1  > .1) );
    assert( Expression::evaluateUPtr(" 1 > .1")->toBool()->value == (1  > .1) );
    assert( Expression::evaluateUPtr(" 1 > 2")->toBool()->value ==  (1  > 2) );
    assert( Expression::evaluateUPtr(" 2 > 1")->toBool()->value ==  (2  > 1) );
    assert( Expression::evaluateUPtr(".1 > 2")->toBool()->value ==  (.1 > 2) );
    assert( Expression::evaluateUPtr(".2 > 1")->toBool()->value ==  (.2 > 1) );
    assert( Expression::evaluateUPtr(".1 > .2")->toBool()->value == (.1 > .2) );
    assert( Expression::evaluateUPtr(".2 > .1")->toBool()->value == (.2 > .1) );
    assert( Expression::evaluateUPtr(" 1 > .2")->toBool()->value == (1  > .2) );
    assert( Expression::evaluateUPtr(" 2 > .1")->toBool()->value == (2  > .1) );

    assert( Expression::evaluateUPtr(" 1 == 1")->toBool()->value ==  (1  == 1) );
    assert( Expression::evaluateUPtr(" 1 == 1")->toBool()->value ==  (1  == 1) );
    assert( Expression::evaluateUPtr(".1 == 1")->toBool()->value ==  (.1 == 1) );
    assert( Expression::evaluateUPtr(".1 == 1")->toBool()->value ==  (.1 == 1) );
    assert( Expression::evaluateUPtr(".1 == .1")->toBool()->value == (.1 == .1) );
    assert( Expression::evaluateUPtr(".1 == .1")->toBool()->value == (.1 == .1) );
    assert( Expression::evaluateUPtr(" 1 == .1")->toBool()->value == (1  == .1) );
    assert( Expression::evaluateUPtr(" 1 == .1")->toBool()->value == (1  == .1) );
    assert( Expression::evaluateUPtr(" 1 == 2")->toBool()->value ==  (1  == 2) );
    assert( Expression::evaluateUPtr(" 2 == 1")->toBool()->value ==  (2  == 1) );
    assert( Expression::evaluateUPtr(".1 == 2")->toBool()->value ==  (.1 == 2) );
    assert( Expression::evaluateUPtr(".2 == 1")->toBool()->value ==  (.2 == 1) );
    assert( Expression::evaluateUPtr(".1 == .2")->toBool()->value == (.1 == .2) );
    assert( Expression::evaluateUPtr(".2 == .1")->toBool()->value == (.2 == .1) );
    assert( Expression::evaluateUPtr(" 1 == .2")->toBool()->value == (1  == .2) );
    assert( Expression::evaluateUPtr(" 2 == .1")->toBool()->value == (2  == .1) );

    assert( Expression::evaluateUPtr(" 1 != 1")->toBool()->value ==  (1  != 1) );
    assert( Expression::evaluateUPtr(" 1 != 1")->toBool()->value ==  (1  != 1) );
    assert( Expression::evaluateUPtr(".1 != 1")->toBool()->value ==  (.1 != 1) );
    assert( Expression::evaluateUPtr(".1 != 1")->toBool()->value ==  (.1 != 1) );
    assert( Expression::evaluateUPtr(".1 != .1")->toBool()->value == (.1 != .1) );
    assert( Expression::evaluateUPtr(".1 != .1")->toBool()->value == (.1 != .1) );
    assert( Expression::evaluateUPtr(" 1 != .1")->toBool()->value == (1  != .1) );
    assert( Expression::evaluateUPtr(" 1 != .1")->toBool()->value == (1  != .1) );
    assert( Expression::evaluateUPtr(" 1 != 2")->toBool()->value ==  (1  != 2) );
    assert( Expression::evaluateUPtr(" 2 != 1")->toBool()->value ==  (2  != 1) );
    assert( Expression::evaluateUPtr(".1 != 2")->toBool()->value ==  (.1 != 2) );
    assert( Expression::evaluateUPtr(".2 != 1")->toBool()->value ==  (.2 != 1) );
    assert( Expression::evaluateUPtr(".1 != .2")->toBool()->value == (.1 != .2) );
    assert( Expression::evaluateUPtr(".2 != .1")->toBool()->value == (.2 != .1) );
    assert( Expression::evaluateUPtr(" 1 != .2")->toBool()->value == (1  != .2) );
    assert( Expression::evaluateUPtr(" 2 != .1")->toBool()->value == (2  != .1) );

    assert( Expression::evaluateUPtr("!( 1 !=  1)")->toBool()->value ==  !(1  != 1) );
    assert( Expression::evaluateUPtr("!( 1 !=  1)")->toBool()->value ==  !(1  != 1) );
    assert( Expression::evaluateUPtr("!(.1 !=  1)")->toBool()->value ==  !(.1 != 1) );
    assert( Expression::evaluateUPtr("!(.1 !=  1)")->toBool()->value ==  !(.1 != 1) );
    assert( Expression::evaluateUPtr("!(.1 != .1)")->toBool()->value ==  !(.1 != .1) );
    assert( Expression::evaluateUPtr("!(.1 != .1)")->toBool()->value ==  !(.1 != .1) );
    assert( Expression::evaluateUPtr("!( 1 != .1)")->toBool()->value ==  !(1  != .1) );
    assert( Expression::evaluateUPtr("!( 1 != .1)")->toBool()->value ==  !(1  != .1) );
    assert( Expression::evaluateUPtr("!( 1 !=  2)")->toBool()->value ==  !(1  != 2) );
    assert( Expression::evaluateUPtr("!( 2 !=  1)")->toBool()->value ==  !(2  != 1) );
    assert( Expression::evaluateUPtr("!(.1 !=  2)")->toBool()->value ==  !(.1 != 2) );
    assert( Expression::evaluateUPtr("!(.2 !=  1)")->toBool()->value ==  !(.2 != 1) );
    assert( Expression::evaluateUPtr("!(.1 != .2)")->toBool()->value ==  !(.1 != .2) );
    assert( Expression::evaluateUPtr("!(.2 != .1)")->toBool()->value ==  !(.2 != .1) );
    assert( Expression::evaluateUPtr("!( 1 != .2)")->toBool()->value ==  !(1  != .2) );
    assert( Expression::evaluateUPtr("!( 2 != .1)")->toBool()->value ==  !(2  != .1) );
}

void alpiScriptBooleanTest02(){
    assert( Expression::evaluateUPtr("true || false")->toBool()->value == (true || false) );
    assert( Expression::evaluateUPtr("false || true")->toBool()->value == (false || true) );
    assert( Expression::evaluateUPtr("false || false")->toBool()->value == (false || false) );
    assert( Expression::evaluateUPtr("true || true")->toBool()->value == (true || true) );

    assert( Expression::evaluateUPtr("false && true")->toBool()->value == (false && true) );
    assert( Expression::evaluateUPtr("true && false")->toBool()->value == (true && false) );
    assert( Expression::evaluateUPtr("false && false")->toBool()->value == (false && false) );
    assert( Expression::evaluateUPtr("true && true")->toBool()->value == (true && true) );

    assert( Expression::evaluateUPtr("(true || false ) && !(true || false)")->toBool()->value == ((true || false ) && !(true || false)) );
    assert( Expression::evaluateUPtr("(false || true ) && !(false || true)")->toBool()->value == ((false || true ) && !(false || true)) );
    assert( Expression::evaluateUPtr("(false || false) && !(false || true)")->toBool()->value == ((false || false) && !(false || true)) );
    assert( Expression::evaluateUPtr("(true || true  ) && !(false || true)")->toBool()->value == ((true || true  ) && !(false || true)) );

    assert( Expression::evaluateUPtr("(false && true ) && !(true || false)")->toBool()->value == ((false && true ) && !(true || false)) );
    assert( Expression::evaluateUPtr("(true && false ) && !(false || true)")->toBool()->value == ((true && false ) && !(false || true)) );
    assert( Expression::evaluateUPtr("(false && false) && !(false || true)")->toBool()->value == ((false && false) && !(false || true)) );
    assert( Expression::evaluateUPtr("(true && true  ) && !(false || true)")->toBool()->value == ((true && true  ) && !(false || true)) );
}

void alpiScriptArithmeticTest03(){
    Context ctx;
    int a = 41;
    int b = 85;
    ctx.data["a"] = std::unique_ptr<Literal>(new Int(a));
    ctx.data["b"] = std::unique_ptr<Literal>(new Int(b));

    double c = 5.5;
    double d = 2.7;
    ctx.data["c"] = std::unique_ptr<Literal>(new Float(c));
    ctx.data["d"] = std::unique_ptr<Literal>(new Float(d));

    assert( Expression::evaluateUPtr("a + b", &ctx)->toInt()->value ==  a + b);
    assert( Expression::evaluateUPtr("a * b", &ctx)->toInt()->value ==  a * b);
    assert( Expression::evaluateUPtr("a / b", &ctx)->toInt()->value ==  a / b);
    assert( Expression::evaluateUPtr("a % b", &ctx)->toInt()->value ==  a % b);

    assert( Expression::evaluateUPtr("c + d", &ctx)->toFloat()->value ==  c + d);
    assert( Expression::evaluateUPtr("c * d", &ctx)->toFloat()->value ==  c * d);
    assert( Expression::evaluateUPtr("c / d", &ctx)->toFloat()->value ==  c / d);
    assert( Expression::evaluateUPtr("c * d + (a * b)", &ctx)->toFloat()->value == c * d + (a * b));
    assert( Expression::evaluateUPtr("c * d + (a * b)", &ctx)->toFloat()->value == c * d + (a * b));
}

void declarationAssignment(){
    auto program = std::uPtr<Program>(Program::parse("\
            bool falseBool = false; \
            bool trueBool = true; \
            int x = 10; \
            float y = 30; \
            int z = x * y + y; \
            y = y / 2; \
            bool condition = x > y; \
            "));
    Context ctx;
    program->execute(&ctx);

    assert(ctx.data["x"]->toInt()->value == 10);
    assert(ctx.data["y"]->toFloat()->value == 15.0);
    assert(ctx.data["z"]->toInt()->value == 330);
    assert(ctx.data["condition"]->toBool()->value == false);
    assert(ctx.data["falseBool"]->toBool()->value == false);
    assert(ctx.data["trueBool"]->toBool()->value == true);
}

void benchmark(){
    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::milliseconds;

    auto t1 = high_resolution_clock::now();
    for (int i = 0; i < 1000; i ++)  {
        assert(Expression::evaluateUPtr("(1-5+7) + 34 + (1 * 45)+ 3- 3* (8*45)+(56/7) + 43 % 99")->toInt()->value == (1-5+7) + 34 + (1 * 45)+ 3- 3* (8*45)+(56/7) + 43 % 99);
    }
    auto t2 = high_resolution_clock::now();
    auto ms_int = duration_cast<milliseconds>(t2 - t1);
    std::cout << "Excution time (full-parse) n=1000: " << ms_int.count() << "ms\n";

    Expression * precompiled = Expression::parse("(1-5+7) + 34 + (1 * 45)+ 3- 3* (8*45)+(56/7) + 43 % 99");

    t1 = high_resolution_clock::now();
    for (int i = 0; i < 1000; i ++)  {
        precompiled->evaluate();
    }

    t2 = high_resolution_clock::now();
    ms_int = duration_cast<milliseconds>(t2 - t1);
    std::cout << "Excution time (pre-parsed) n=1000: " << ms_int.count() << "ms\n";
}

int main(int , char** ) {
    using std::cout, std::endl;
    cout << "Exec declarationAssignment test" << endl;
    declarationAssignment();
    cout << "Exec alpiScriptBooleanTest01 test" << endl;
    alpiScriptBooleanTest01();
    cout << "Exec alpiScriptBooleanTest02 test" << endl;
    alpiScriptBooleanTest02();
    cout << "Exec alpiScriptArithmeticTest01 test" << endl;
    alpiScriptArithmeticTest01();
    cout << "Exec alpiScriptArithmeticTest02 test" << endl;
    alpiScriptArithmeticTest02();
    cout << "Exec alpiScriptArithmeticTest03 test" << endl;
    alpiScriptArithmeticTest03();
    cout << "Exec benchmark" << endl;
    benchmark();


    std::cout << std::endl << "All tests succesfull." << std::endl;
    return 0;
}

