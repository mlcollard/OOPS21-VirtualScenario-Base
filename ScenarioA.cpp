/*
    ScenarioA.cpp

    Investigation of virtual methods and overriding
*/

#include "A.hpp"
#include "AUtilities.hpp"

#include <cassert>

// ensure assert() is not turned off
#ifdef NDEBUG
static_assert(false, "NDEBUG cannot be defined");
#endif

int main() {

    A a;

    assert(a.m0() == "X::m0()");
    assert(a.m1() == "X::m1()");
    assert(a.m2() == "X::m2()");
    assert(a.m3() == "X::m3()");

    assert(AUtilities::m0Value(a) == "X::m0()");
    assert(AUtilities::m1Value(a) == "X::m1()");
    assert(AUtilities::m2Value(a) == "X::m2()");
    assert(AUtilities::m3Value(a) == "X::m3()");

    A* pa = &a;

    assert(pa->m0() == "X::m0()");
    assert(pa->m1() == "X::m1()");
    assert(pa->m2() == "X::m2()");
    assert(pa->m3() == "X::m3()");

    assert(AUtilities::m0Ptr(&a) == "X::m0()");
    assert(AUtilities::m1Ptr(&a) == "X::m1()");
    assert(AUtilities::m2Ptr(&a) == "X::m2()");
    assert(AUtilities::m3Ptr(&a) == "X::m3()");

    A& ra = a;

    assert(ra.m0() == "X::m0()");
    assert(ra.m1() == "X::m1()");
    assert(ra.m2() == "X::m2()");
    assert(ra.m3() == "X::m3()");

    assert(AUtilities::m0Ref(a) == "X::m0()");
    assert(AUtilities::m1Ref(a) == "X::m1()");
    assert(AUtilities::m2Ref(a) == "X::m2()");
    assert(AUtilities::m3Ref(a) == "X::m3()");

    return 0;
}
