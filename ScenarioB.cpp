/*
    ScenarioB.cpp

    Investigation of virtual methods and overriding
*/

#include "A.hpp"
#include "AUtilities.hpp"
#include "B.hpp"
#include "BUtilities.hpp"

#include <string>
#include <cassert>

// ensure assert() is not turned off
#ifdef NDEBUG
static_assert(false, "NDEBUG cannot be defined");
#endif

int main() {

    B b;

    assert(b.m0() == "X::m0()");
    assert(b.m1() == "X::m1()");
    assert(b.m2() == "X::m2()");
    assert(b.m3() == "X::m3()");

    assert(AUtilities::m0Value(b) == "X::m0()");
    assert(AUtilities::m1Value(b) == "X::m1()");
    assert(AUtilities::m2Value(b) == "X::m2()");
    assert(AUtilities::m3Value(b) == "X::m3()");

    assert(BUtilities::m0Value(b) == "X::m0()");
    assert(BUtilities::m1Value(b) == "X::m1()");
    assert(BUtilities::m2Value(b) == "X::m2()");
    assert(BUtilities::m3Value(b) == "X::m3()");

    A* pa = &b;

    assert(pa->m0() == "X::m0()");
    assert(pa->m1() == "X::m1()");
    assert(pa->m2() == "X::m2()");
    assert(pa->m3() == "X::m3()");

    assert(AUtilities::m0Ptr(&b) == "X::m0()");
    assert(AUtilities::m1Ptr(&b) == "X::m1()");
    assert(AUtilities::m2Ptr(&b) == "X::m2()");
    assert(AUtilities::m3Ptr(&b) == "X::m3()");

    A& ra = b;

    assert(ra.m0() == "X::m0()");
    assert(ra.m1() == "X::m1()");
    assert(ra.m2() == "X::m2()");
    assert(ra.m3() == "X::m3()");

    assert(AUtilities::m0Ref(b) == "X::m0()");
    assert(AUtilities::m1Ref(b) == "X::m1()");
    assert(AUtilities::m2Ref(b) == "X::m2()");
    assert(AUtilities::m3Ref(b) == "X::m3()");

    B* pb = &b;

    assert(pb->m0() == "X::m0()");
    assert(pb->m1() == "X::m1()");
    assert(pb->m2() == "X::m2()");
    assert(pb->m3() == "X::m3()");

    assert(BUtilities::m0Ptr(&b) == "X::m0()");
    assert(BUtilities::m1Ptr(&b) == "X::m1()");
    assert(BUtilities::m2Ptr(&b) == "X::m2()");
    assert(BUtilities::m3Ptr(&b) == "X::m3()");

    B& rb = b;

    assert(rb.m0() == "X::m0()");
    assert(rb.m1() == "X::m1()");
    assert(rb.m2() == "X::m2()");
    assert(rb.m3() == "X::m3()");

    assert(BUtilities::m0Ref(b) == "X::m0()");
    assert(BUtilities::m1Ref(b) == "X::m1()");
    assert(BUtilities::m2Ref(b) == "X::m2()");
    assert(BUtilities::m3Ref(b) == "X::m3()");

    return 0;
}
