#include "pch.h"
#include "TestGameObject.h"

using namespace std::literals::string_literals;

namespace LibraryDesktopTests {
    RTTI_DEFINITIONS(TestGameObject);

    TestGameObject::TestGameObject() : TestGameObject{"Test"s} {}
}
