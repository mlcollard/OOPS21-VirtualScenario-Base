/*
    ScenarioC.cpp

    Investigation of virtual methods and overriding
*/

#include "A.hpp"
#include "AUtilities.hpp"
#include "B.hpp"
#include "BUtilities.hpp"
#include "C.hpp"
#include "CUtilities.hpp"

#include <string>
#include <cassert>

// ensure assert() is not turned off
#ifdef NDEBUG
static_assert(false, "NDEBUG cannot be defined");
#endif

int main() {

    C c;

    assert(c.m0() == "X::m0()");
    assert(c.m1() == "X::m1()");
    assert(c.m2() == "X::m2()");
    assert(c.m3() == "X::m3()");

    assert(AUtilities::m0Value(c) == "X::m0()");
    assert(AUtilities::m1Value(c) == "X::m1()");
    assert(AUtilities::m2Value(c) == "X::m2()");
    assert(AUtilities::m3Value(c) == "X::m3()");

    assert(BUtilities::m0Value(c) == "X::m0()");
    assert(BUtilities::m1Value(c) == "X::m1()");
    assert(BUtilities::m2Value(c) == "X::m2()");
    assert(BUtilities::m3Value(c) == "X::m3()");

    A* pa = &c;

    assert(pa->m0() == "X::m0()");
    assert(pa->m1() == "X::m1()");
    assert(pa->m2() == "X::m2()");
    assert(pa->m3() == "X::m3()");

    assert(AUtilities::m0Ptr(&c) == "X::m0()");
    assert(AUtilities::m1Ptr(&c) == "X::m1()");
    assert(AUtilities::m2Ptr(&c) == "X::m2()");
    assert(AUtilities::m3Ptr(&c) == "X::m3()");

    A& ra = c;

    assert(ra.m0() == "X::m0()");
    assert(ra.m1() == "X::m1()");
    assert(ra.m2() == "X::m2()");
    assert(ra.m3() == "X::m3()");

    assert(AUtilities::m0Ref(c) == "X::m0()");
    assert(AUtilities::m1Ref(c) == "X::m1()");
    assert(AUtilities::m2Ref(c) == "X::m2()");
    assert(AUtilities::m3Ref(c) == "X::m3()");

    B* pb = &c;

    assert(pb->m0() == "X::m0()");
    assert(pb->m1() == "X::m1()");
    assert(pb->m2() == "X::m2()");
    assert(pb->m3() == "X::m3()");

    assert(BUtilities::m0Ptr(&c) == "X::m0()");
    assert(BUtilities::m1Ptr(&c) == "X::m1()");
    assert(BUtilities::m2Ptr(&c) == "X::m2()");
    assert(BUtilities::m3Ptr(&c) == "X::m3()");

    B& rb = c;

    assert(rb.m0() == "X::m0()");
    assert(rb.m1() == "X::m1()");
    assert(rb.m2() == "X::m2()");
    assert(rb.m3() == "X::m3()");

    assert(BUtilities::m0Ref(c) == "X::m0()");
    assert(BUtilities::m1Ref(c) == "X::m1()");
    assert(BUtilities::m2Ref(c) == "X::m2()");
    assert(BUtilities::m3Ref(c) == "X::m3()");

    C* pc = &c;

    assert(pc->m0() == "X::m0()");
    assert(pc->m1() == "X::m1()");
    assert(pc->m2() == "X::m2()");
    assert(pc->m3() == "X::m3()");

    assert(BUtilities::m0Ptr(&c) == "X::m0()");
    assert(BUtilities::m1Ptr(&c) == "X::m1()");
    assert(BUtilities::m2Ptr(&c) == "X::m2()");
    assert(BUtilities::m3Ptr(&c) == "X::m3()");

    C& rc = c;

    assert(rc.m0() == "X::m0()");
    assert(rc.m1() == "X::m1()");
    assert(rc.m2() == "X::m2()");
    assert(rc.m3() == "X::m3()");

    assert(BUtilities::m0Ref(c) == "X::m0()");
    assert(BUtilities::m1Ref(c) == "X::m1()");
    assert(BUtilities::m2Ref(c) == "X::m2()");
    assert(BUtilities::m3Ref(c) == "X::m3()");

    return 0;
}
