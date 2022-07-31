#pragma once
#include "Controller.h"
#include <string>

namespace Ship {
    class WiiUGamepad : public Controller {
        public:
            WiiUGamepad();

            bool Open();
            void Close();

            void ReadFromSource(int32_t slot) override;
            void WriteToSource(int32_t slot, ControllerCallback* controller) override;
            bool Connected() const override { return connected; };
            bool CanGyro() const override { return true; }
            bool CanRumble() const override { return true; };

            void ClearRawPress() override {}
            int32_t ReadRawPress() override;

            const char* GetButtonName(int slot, int n64Button) override;
            const char* GetControllerName() override;

        protected:
            void CreateDefaultBinding(int32_t slot) override;

        private:
            bool connected = true;
            float rumblePatternStrength;
            uint8_t rumblePattern[15];
    };
}
