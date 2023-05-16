#pragma once
#include "GameObject.h"

namespace LibraryDesktopTests {
    class TestGameObject final : public FieaGameEngine::GameObject {
        RTTI_DECLARATIONS(TestGameObject, FieaGameEngine::GameObject);

    public:
        TestGameObject();
        inline explicit TestGameObject(String name) : GameObject{name}, _updateCount{0} {}

        inline void UpdateSelf(const FieaGameEngine::GameTime&) override { ++_updateCount; }

        [[nodiscard]] inline int UpdateCount() const { return _updateCount; }

        [[nodiscard]] inline FieaGameEngine::Datum& PublicChildren() { return Children(); }
        [[nodiscard]] inline const FieaGameEngine::Datum& PublicChildren() const { return GetChildren(); }

    private:
        int _updateCount{0};

    };

    FACTORY(TestGameObject, FieaGameEngine::Scope);
}
