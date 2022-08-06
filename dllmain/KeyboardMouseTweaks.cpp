#include <iostream>
#include "dllmain.h"
#include "Patches.h"
#include "Settings.h"
#include "input.hpp"
#include "../external/eHooking/Hook.h"
#include "Utils.h"

uintptr_t* ptrRifleMovAddr;
uintptr_t* ptrInvMovAddr;
uintptr_t* ptrFocusAnimFldAddr;
uintptr_t ptrRetryLoadDLGstate;

static uint32_t* ptrMouseDeltaX;
static uint32_t* ptrMouseDeltaY;

int iMinFocusTime;

std::vector<uint32_t> jetSkiTrickCombo;

bool ParseJetSkiTrickCombo(std::string_view in_combo)
{
	jetSkiTrickCombo.clear();
	jetSkiTrickCombo = ParseKeyCombo(in_combo);
	return jetSkiTrickCombo.size() > 0;
}

uint8_t* g_KeyIconData = nullptr;

// Data generated by game for (LANG_ENGLISH, SUBLANG_ENGLISH_US)
uint8_t KeyIconData_US[1024] =
{
		0x00, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x1B, 0x31, 0x21, 0x00, 0x31, 0x32, 0x22, 0x00, 0x32,
		0x33, 0xA3, 0x00, 0x33, 0x34, 0x24, 0x80, 0x34, 0x35, 0x25, 0x00, 0x35, 0x36, 0x5E, 0x00, 0x36,
		0x37, 0x26, 0x00, 0x37, 0x38, 0x2A, 0x00, 0x38, 0x39, 0x28, 0x00, 0x39, 0x30, 0x29, 0x00, 0x30,
		0x2D, 0x5F, 0x00, 0x2D, 0x3D, 0x2B, 0x00, 0x3D, 0x08, 0x08, 0x00, 0x08, 0x09, 0x09, 0x00, 0x09,
		0x71, 0x51, 0x00, 0x51, 0x77, 0x57, 0x00, 0x57, 0x65, 0x45, 0xE9, 0x45, 0x72, 0x52, 0x00, 0x52,
		0x74, 0x54, 0x00, 0x54, 0x79, 0x59, 0x00, 0x59, 0x75, 0x55, 0xFA, 0x55, 0x69, 0x49, 0xED, 0x49,
		0x6F, 0x4F, 0xF3, 0x4F, 0x70, 0x50, 0x00, 0x50, 0x5B, 0x7B, 0x00, 0x5B, 0x5D, 0x7D, 0x00, 0x5D,
		0x0D, 0x0D, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x61, 0x41, 0xE1, 0x41, 0x73, 0x53, 0x00, 0x53,
		0x64, 0x44, 0x00, 0x44, 0x66, 0x46, 0x00, 0x46, 0x67, 0x47, 0x00, 0x47, 0x68, 0x48, 0x00, 0x48,
		0x6A, 0x4A, 0x00, 0x4A, 0x6B, 0x4B, 0x00, 0x4B, 0x6C, 0x4C, 0x00, 0x4C, 0x3B, 0x3A, 0x00, 0x3B,
		0x27, 0x40, 0x00, 0x27, 0x60, 0xAC, 0xA6, 0x60, 0x00, 0x00, 0x00, 0x00, 0x23, 0x7E, 0x5C, 0x23,
		0x7A, 0x5A, 0x00, 0x5A, 0x78, 0x58, 0x00, 0x58, 0x63, 0x43, 0x00, 0x43, 0x76, 0x56, 0x00, 0x56,
		0x62, 0x42, 0x00, 0x42, 0x6E, 0x4E, 0x00, 0x4E, 0x6D, 0x4D, 0x00, 0x4D, 0x2C, 0x3C, 0x00, 0x2C,
		0x2E, 0x3E, 0x00, 0x2E, 0x2F, 0x3F, 0x00, 0x2F, 0x00, 0x00, 0x00, 0x00, 0x2A, 0x2A, 0x00, 0x2A,
		0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2D, 0x2D, 0x00, 0x2D, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2B, 0x2B, 0x00, 0x2B, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x7C, 0x00, 0x5C, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x09, 0x09, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

void (*Init_KeyIconMapping)();
void Init_KeyIconMapping_Hook()
{
	// Run original func
	Init_KeyIconMapping();

	// Check if users keyboard layout is one we know game supports
	auto userLanguage = GetKeyboardLayout(0);
	switch (PRIMARYLANGID(LOWORD(userLanguage)))
	{
	case LANG_CHINESE:
	case LANG_ENGLISH:
	case LANG_FRENCH:
	case LANG_GERMAN:
	case LANG_ITALIAN:
	case LANG_JAPANESE:
	case LANG_SPANISH:
	case LANG_POLISH: // not actually translated, but game seems to support it for keyicons

		return; // Game works with these langs fine, no change needed
	}

	// Lang might not be supported, replace keydata with known-good US data
	memcpy(g_KeyIconData, KeyIconData_US, sizeof(KeyIconData_US));
}

int(WINAPI* ShowCursor_orig)(BOOL bShow);
int WINAPI ShowCursor_hook(BOOL bShow)
{
	// Never hide the cursor. Call it using true instead, to avoid any potential weirdness.
	while (ShowCursor_orig(TRUE) < 0);
	return 0;
}

FARPROC p_ShowCursor = nullptr;
void InstallShowCursor_hook()
{
	if (pConfig->bVerboseLog)
		spd::log()->info("Hooking ShowCursor...");

	HMODULE h_user32 = GetModuleHandle(L"user32.dll");
	InterlockedExchangePointer((PVOID*)&p_ShowCursor, Hook::HotPatch(Hook::GetProcAddress(h_user32, "ShowCursor"), "ShowCursor", ShowCursor_hook));

	ShowCursor_orig = (decltype(ShowCursor_orig))InterlockedCompareExchangePointer((PVOID*)&p_ShowCursor, nullptr, nullptr);
}

HCURSOR(WINAPI* SetCursor_orig)(HCURSOR hCursor);
HCURSOR WINAPI SetCursor_hook(HCURSOR hCursor)
{
	// Simply set it to the regular arrow cursor.
	return SetCursor_orig(LoadCursor(NULL, IDC_ARROW));
}

FARPROC p_SetCursor = nullptr;
void InstallSetCursor_hook()
{
	if (pConfig->bVerboseLog)
		spd::log()->info("Hooking SetCursor...");

	HMODULE h_user32 = GetModuleHandle(L"user32.dll");
	InterlockedExchangePointer((PVOID*)&p_SetCursor, Hook::HotPatch(Hook::GetProcAddress(h_user32, "SetCursor"), "SetCursor", SetCursor_hook));

	SetCursor_orig = (decltype(SetCursor_orig))InterlockedCompareExchangePointer((PVOID*)&p_SetCursor, nullptr, nullptr);
}

void Init_KeyboardMouseTweaks()
{
	Init_MouseTurning();

	// Useful when debugging/breakpointing
	if (pConfig->bNeverHideCursor)
	{
		InstallShowCursor_hook();
		InstallSetCursor_hook();
	}
	auto pattern = hook::pattern("A3 ? ? ? ? E8 ? ? ? ? A3 ? ? ? ? 8B 85 ? ? ? ? EB ? D9 C9");
	// X mouse delta adjustments
	{
		pattern = hook::pattern("A3 ? ? ? ? E8 ? ? ? ? A3 ? ? ? ? 8B 85 ? ? ? ? EB ? D9 C9");
		ptrMouseDeltaX = *pattern.count(1).get(0).get<uint32_t*>(1);
		struct MouseDeltaX
		{
			void operator()(injector::reg_pack& regs)
			{
				double deltaX = 0;
				if (pConfig->bUseRawMouseInput)
					deltaX = (pInput->raw_mouse_delta_x() / 10.0f) * g_MOUSE_SENS();
				else
					deltaX = double(int(regs.eax));

				deltaX = deltaX * 0.5; // halve delta value to make it match the slower 60FPS speed that most people are used to

				*(int32_t*)(ptrMouseDeltaX) = int32_t(deltaX / GlobalPtr()->deltaTime_70);
			}
		}; injector::MakeInline<MouseDeltaX>(pattern.count(1).get(0).get<uint32_t>(0), pattern.count(1).get(0).get<uint32_t>(5));
	}

	// Y mouse delta adjustments
	{
		pattern = hook::pattern("A3 ? ? ? ? E8 ? ? ? ? A3 ? ? ? ? 8B 85 ? ? ? ? EB ? E8");
		ptrMouseDeltaY = *pattern.count(1).get(0).get<uint32_t*>(1);
		struct MouseDeltaY
		{
			void operator()(injector::reg_pack& regs)
			{
				double deltaY = 0;
				if (pConfig->bUseRawMouseInput)
					deltaY = -((pInput->raw_mouse_delta_y() / 6.0f) * g_MOUSE_SENS());
				else
					deltaY = double(int(regs.eax));

				deltaY = deltaY * 0.5; // halve delta value to make it match the slower 60FPS speed that most people are used to

				*(int32_t*)(ptrMouseDeltaY) = int32_t(deltaY / GlobalPtr()->deltaTime_70);
			}
		}; injector::MakeInline<MouseDeltaY>(pattern.count(1).get(0).get<uint32_t>(0), pattern.count(1).get(0).get<uint32_t>(5));

		if (pConfig->bUseRawMouseInput)
			spd::log()->info("{} -> Raw mouse input enabled", __FUNCTION__);
	}

	// Prevent some negative mouse acceleration from being applied
	{
		struct PlWepLockCtrlHook
		{
			void operator()(injector::reg_pack& regs)
			{
				int DeltaX = *(int32_t*)(ptrMouseDeltaX);

				// Mimic what CMP does, since we're overwriting it.
				if (DeltaX > 0)
				{
					// Clear both flags
					regs.ef &= ~(1 << regs.zero_flag);
					regs.ef &= ~(1 << regs.carry_flag);
				}
				else if (DeltaX < 0)
				{
					// ZF = 0, CF = 1
					regs.ef &= ~(1 << regs.zero_flag);
					regs.ef |= (1 << regs.carry_flag);
				}
				else if (DeltaX == 0)
				{
					// ZF = 1, CF = 0
					regs.ef |= (1 << regs.zero_flag);
					regs.ef &= ~(1 << regs.carry_flag);
				}

				if (isKeyboardMouse())
				{
					if (pConfig->bUseRawMouseInput)
					{
						// Force aiming mode to "Modern". Our patch seems to break "Classic" mode somewhat, and that mode is irrelevant anyways.
						if (GetMouseAimingMode() == MouseAimingModes::Classic)
							SetMouseAimingMode(MouseAimingModes::Modern);

						// Clear both flags so we skip the section that does the actual negative acceleration
						regs.ef &= ~(1 << regs.zero_flag);
						regs.ef &= ~(1 << regs.carry_flag);
					}
				}
			}
		};

		auto pattern = hook::pattern("83 3D ? ? ? ? ? 75 ? 83 3D ? ? ? ? 00 75 0E 85 C0 75 ? D9 EE D9");

		injector::MakeInline<PlWepLockCtrlHook>(pattern.count(2).get(0).get<uint32_t>(0), pattern.count(2).get(0).get<uint32_t>(7));
		injector::MakeInline<PlWepLockCtrlHook>(pattern.count(2).get(1).get<uint32_t>(0), pattern.count(2).get(1).get<uint32_t>(7));
	}

	// Disable camera lock on "Modern" mouse setting
	{
		struct CameraLockCmp
		{
			void operator()(injector::reg_pack& regs)
			{
				// Mimic what CMP does, since we're overwriting it.
				if (GetMouseAimingMode() == MouseAimingModes::Modern)
				{
					// Clear both flags
					regs.ef &= ~(1 << regs.zero_flag);
					regs.ef &= ~(1 << regs.carry_flag);
				}
				else if (GetMouseAimingMode() == MouseAimingModes::Classic)
				{
					// ZF = 1, CF = 0
					regs.ef |= (1 << regs.zero_flag);
					regs.ef &= ~(1 << regs.carry_flag);
				}

				if (pConfig->bDetachCameraFromAim && isKeyboardMouse())
				{
					// Make the game think the aiming mode is "Classic"
					regs.ef |= (1 << regs.zero_flag);
					regs.ef &= ~(1 << regs.carry_flag);
				}
			}
		};

		pattern = hook::pattern("80 3D ? ? ? ? ? D9 41 ? D9 5D ? 74");
		injector::MakeInline<CameraLockCmp>(pattern.count(1).get(0).get<uint32_t>(0), pattern.count(1).get(0).get<uint32_t>(7));

		pattern = hook::pattern("80 3D ? ? ? ? ? 0F 84 ? ? ? ? A1 ? ? ? ? 85 C0 74");
		injector::MakeInline<CameraLockCmp>(pattern.count(1).get(0).get<uint32_t>(0), pattern.count(1).get(0).get<uint32_t>(7));

		pattern = hook::pattern("80 3D ? ? ? ? ? 74 ? A1 ? ? ? ? 85 C0 74 ? 83 F8 ? 74 ? D9 05");
		injector::MakeInline<CameraLockCmp>(pattern.count(1).get(0).get<uint32_t>(0), pattern.count(1).get(0).get<uint32_t>(7));

		if (pConfig->bDetachCameraFromAim)
			spd::log()->info("{} -> DetachCameraFromAim applied", __FUNCTION__);
	}

	// Inventory item flip binding
	{
		auto pattern = hook::pattern("A1 ? ? ? ? 75 ? A8 ? 74 ? 6A ? 8B CE E8 ? ? ? ? BB");
		ptrInvMovAddr = *pattern.count(1).get(0).get<uint32_t*>(1);
		struct InvFlip
		{
			void operator()(injector::reg_pack& regs)
			{
				regs.eax = *(int32_t*)ptrInvMovAddr;
				
				// input::is_key_pressed doesn't seem work reliably here. Not sure why, but using GetAsyncKeyState is fine since this code only runs if 
				// the player is moving something in the inventory.
				if ((GetAsyncKeyState(pInput->KeyMap_getVK(pConfig->sFlipItemLeft)) & 1) || (GetAsyncKeyState(pInput->KeyMap_getVK(pConfig->sFlipItemRight)) & 1))
					regs.eax = 0x00300000;

				else if ((GetAsyncKeyState(pInput->KeyMap_getVK(pConfig->sFlipItemUp)) & 1) || (GetAsyncKeyState(pInput->KeyMap_getVK(pConfig->sFlipItemDown)) & 1))
					regs.eax = 0x00C00000;
			}
		}; injector::MakeInline<InvFlip>(pattern.count(1).get(0).get<uint32_t>(0), pattern.count(1).get(0).get<uint32_t>(5));

		spd::log()->info("{} -> Keyboard inventory item flipping enabled", __FUNCTION__);
	}

	// Prevent the game from overriding your selection in the "Retry/Load" screen when moving the mouse before confirming an action.
	{
		// Get pointer for the state. Only reliable way I found to achieve this.
		pattern = hook::pattern("C7 06 ? ? ? ? A1 ? ? ? ? F7 80 ? ? ? ? ? ? ? ? 74"); //0x48C1C0
		struct RLDLGState
		{
			void operator()(injector::reg_pack& regs)
			{
				*(int*)(regs.esi) = 0;
				ptrRetryLoadDLGstate = regs.esi + 0x3;
			}
		}; injector::MakeInline<RLDLGState>(pattern.count(1).get(0).get<uint32_t>(0), pattern.count(1).get(0).get<uint32_t>(6));

		// Check if the "yes/no" prompt is open before sending any index updates
		pattern = hook::pattern("89 8F ? ? ? ? FF 85 ? ? ? ? 83 C6 ? 3B 77");
		struct MouseMenuSelector
		{
			void operator()(injector::reg_pack& regs)
			{
				if (pConfig->bFixRetryLoadMouseSelector)
				{
					if (*(int32_t*)ptrRetryLoadDLGstate != 1)
					{
						*(int32_t*)(regs.edi + 0x160) = regs.ecx;
					}
				}
				else
				{
					*(int32_t*)(regs.edi + 0x160) = regs.ecx;
				}
			}
		}; injector::MakeInline<MouseMenuSelector>(pattern.count(1).get(0).get<uint32_t>(0), pattern.count(1).get(0).get<uint32_t>(6));
	
		if (pConfig->bFixRetryLoadMouseSelector)
			spd::log()->info("{} -> FixRetryLoadMouseSelector applied", __FUNCTION__);
	}

	// Fix camera after zooming with the sniper
	{
		auto pattern = hook::pattern("A2 ? ? ? ? A2 ? ? ? ? EB ? 81 FB ? ? ? ? 75 ? 83");
		ptrRifleMovAddr = *pattern.count(1).get(0).get<uint32_t*>(1);
		struct FixSniperZoom
		{
			void operator()(injector::reg_pack& regs)
			{
				if (!pConfig->bFixSniperZoom)
					*(int32_t*)ptrRifleMovAddr = regs.eax;
			}
		}; injector::MakeInline<FixSniperZoom>(pattern.count(1).get(0).get<uint32_t>(0), pattern.count(1).get(0).get<uint32_t>(5));

		if (pConfig->bFixSniperZoom)
			spd::log()->info("{} -> FixSniperZoom applied", __FUNCTION__);
	}

	// Fix the "focus animation" not looking as strong as when triggered with a controller
	if (pConfig->bFixSniperFocus)
	{
		pattern = hook::pattern("8B F1 8B 4D ? 57 85 C9 74 ? D9 56 ? 88 56");
		struct FixScopeZoomFocus
		{
			void operator()(injector::reg_pack& regs)
			{
				regs.esi = regs.ecx;
				regs.ecx = *(int32_t*)(regs.ebp + 0x8);

				// This makes it so the focus animation has to play for at least X ammount of time
				if (isKeyboardMouse())
				{
					if (regs.ecx == 1)
					{
						iMinFocusTime = 5;
					}
					else if (regs.ecx == 0)
					{
						iMinFocusTime--;
					}

					if (iMinFocusTime > 0)
						regs.ecx = 1;
					else
						regs.ecx = 0;
				}
			}
		}; injector::MakeInline<FixScopeZoomFocus>(pattern.count(1).get(0).get<uint32_t>(0), pattern.count(1).get(0).get<uint32_t>(5));
	
		// This jl instruction makes the focus animation stop almost immediately when using the mouse. Noping it doesn't seem to affect the controller at all.
		pattern = hook::pattern("7C ? C6 06 ? EB ? C7 46 ? ? ? ? ? EB ? DD D8 83 3D");
		injector::MakeNOP(pattern.count(1).get(0).get<uint32_t>(0), 2, true);

		spd::log()->info("{} -> FixSniperFocus applied", __FUNCTION__);
	}

	// Hooks to allow toggling sprint instead of needing to hold it
	{
		// pl_R1_Run first KEY_RUN check
		pattern = hook::pattern("83 E0 01 33 D2 0B C2 74 ? 8B C1 83 E0 40"); // 7639EB
		struct SprintToggleHook1
		{
			void operator()(injector::reg_pack& regs)
			{
				regs.eax &= 1; // Code we overwrote

				if (!pConfig->bUseSprintToggle)
					regs.edx ^= regs.edx;
			}
		}; injector::MakeInline<SprintToggleHook1>(pattern.count(1).get(0).get<uint32_t>(0), pattern.count(1).get(0).get<uint32_t>(5));

		// pl_R1_Run second KEY_RUN check
		pattern = hook::pattern("8B C1 83 E0 ? 33 D2 0B C2 74 ? 8B C1 83 E0 ? 0B C2 74 ? 8B CE"); // 763AE8
		struct SprintToggleHook2
		{
			void operator()(injector::reg_pack& regs)
			{
				regs.eax = regs.ecx; // Code we overwrote

				if (!pConfig->bUseSprintToggle)
					regs.eax &= 0x40;
			}
		}; injector::MakeInline<SprintToggleHook2>(pattern.count(1).get(0).get<uint32_t>(0), pattern.count(1).get(0).get<uint32_t>(5));
	}

	// Hook pl0e_R1_Jump to allow jet-ski tricks to be performed with keyboard+mouse combos
	{
		pattern = hook::pattern("FE 86 0E 05 00 00 33 DB");
		struct JetSkiTrickHook1
		{
			void operator()(injector::reg_pack& regs)
			{
				uint8_t* esiUpdate = ((uint8_t*)regs.esi) + 0x50E;
				*esiUpdate = *esiUpdate + 1; // code we patched over

				if (pInput->is_combo_down(&jetSkiTrickCombo))
				{
					// Jet-ski combo pressed - skip the RT/LT checks when we return
					// TODO: find better method of skipping these checks, changing return addr for MakeInline like this seems hacky

					uint32_t* retAddr = (uint32_t*)(regs.esp - 4);
					*retAddr += 0x28; // seems to always be 0x28 bytes of opcodes in every release
				}
			}
		}; injector::MakeInline<JetSkiTrickHook1>(pattern.count(1).get(0).get<uint32_t>(0), pattern.count(1).get(0).get<uint32_t>(6));
	}

	if (pConfig->bFallbackToEnglishKeyIcons)
	{
		// Get pointer to key icon data buffer
		pattern = hook::pattern("53 56 57 68 00 04 00 00 6A 00 68 ? ? ? ?");
		g_KeyIconData = *pattern.count(1).get(0).get<uint8_t*>(0xB);

		// Hook Init_KeyIconMapping so we can replace key data if needed
		pattern = hook::pattern("53 57 E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? 8B 35 ? ? ? ? 8B 1D ? ? ? ?");

		auto jmp_Init_KeyIconMapping = injector::GetBranchDestination(pattern.count(1).get(0).get<uint32_t>(0x11)).as_int();

		ReadCall(jmp_Init_KeyIconMapping, Init_KeyIconMapping);
		InjectHook(jmp_Init_KeyIconMapping, Init_KeyIconMapping_Hook);

		spd::log()->info("{} -> FallbackToEnglishKeyIcons applied", __FUNCTION__);

		if (pConfig->bVerboseLog)
		{
			// KeyboardLayout
			wchar_t KeyboardLayoutBuff[25];
			HKL userKeyboardLayout = GetKeyboardLayout(GetWindowThreadProcessId(hWindow, NULL));
			int userKeyboardLayoutID = PRIMARYLANGID(LOWORD(userKeyboardLayout));
			LCIDToLocaleName(userKeyboardLayoutID, KeyboardLayoutBuff, ARRAYSIZE(KeyboardLayoutBuff), 0);

			// UserDefaultLCID
			wchar_t UserDefaultLCIDBuff[25];
			LCIDToLocaleName(GetUserDefaultLCID(), UserDefaultLCIDBuff, ARRAYSIZE(UserDefaultLCIDBuff), 0);

			// SystemDefaultLCID
			wchar_t SystemDefaultLCIDBuff[25];
			LCIDToLocaleName(GetSystemDefaultLCID(), SystemDefaultLCIDBuff, ARRAYSIZE(SystemDefaultLCIDBuff), 0);

			// UserDefaultUILanguage
			wchar_t UserDefaultUILanguageBuf[100];
			GetLocaleInfo(GetUserDefaultUILanguage(), LOCALE_SNAME, UserDefaultUILanguageBuf, 100);

			// SystemDefaultUILanguage
			wchar_t SystemDefaultUILanguageBuf[100];
			GetLocaleInfo(GetSystemDefaultUILanguage(), LOCALE_SNAME, SystemDefaultUILanguageBuf, 100);

			// UserDefaultLangID
			wchar_t UserDefaultLangIDBuf[100];
			GetLocaleInfo(GetUserDefaultLangID(), LOCALE_SNAME, UserDefaultLangIDBuf, 100);

			// SystemDefaultLangID
			wchar_t SystemDefaultLangIDBuf[100];
			GetLocaleInfo(GetSystemDefaultLangID(), LOCALE_SNAME, SystemDefaultLangIDBuf, 100);

			// Log
			spd::log()->info("+------------------+------------------+");
			spd::log()->info("| Keyboard/locale info                |");
			spd::log()->info("+------------------+------------------+");
			spd::log()->info("| KeyboardLayout:           | {:>7} |", WstrToStr(KeyboardLayoutBuff));
			spd::log()->info("| UserDefaultLCID:          | {:>7} |", WstrToStr(UserDefaultLCIDBuff));
			spd::log()->info("| SystemDefaultLCID:        | {:>7} |", WstrToStr(SystemDefaultLCIDBuff));
			spd::log()->info("| UserDefaultUILanguage:    | {:>7} |", WstrToStr(UserDefaultUILanguageBuf));
			spd::log()->info("| SystemDefaultUILanguage:  | {:>7} |", WstrToStr(SystemDefaultUILanguageBuf));
			spd::log()->info("| UserDefaultLangID:        | {:>7} |", WstrToStr(UserDefaultLangIDBuf));
			spd::log()->info("| SystemDefaultLangID:      | {:>7} |", WstrToStr(SystemDefaultLangIDBuf));
			spd::log()->info("+------------------+------------------+");
		}
	}
}
