#pragma once
const char* defaultSettingsTrainer = R""""(
[TRAINER]
; Enables usage of the "Trainer" tab
Enable = False

; Allows overriding player speed value.
; (value can be set via the PlayerSpeedOverride value below)
EnablePlayerSpeedOverride = False

; Value to override player speed with
; Only takes effect if EnablePlayerSpeedOverride is enabled
PlayerSpeedOverride = 1.0

; Allows moving character via numpad when using noclip / "Disable Player Collision" patch
UseNumpadMovement = True

; Allows using mouse-wheel to move character up/down when using noclip / "Disable Player Collision" patch
UseMouseWheelUpDown = True

; Allows overriding the HP of enemies.
; The new HP will be whatever their original HP was, multiplied by the value set here.
; Min 0.1, max 15.
EnableEnemyHPMultiplier = False
EnemyHPMultiplier = 1.0

; Randomly pick the HP multiplier of each enemy. You can also set the minimum and maximum values that can be generated.
; Min 0.1, max 15.
UseRandomHPMultiplier = False
RandomHPMultiplierMin = 0.3
RandomHPMultiplierMax = 7.0

; Make it so enemies don't spawn.
; May cause crashes during events/cutscenes that expect enemies to be present! Use with caution!
DisableEnemySpawn = False

; Make it so enemies never disappear/despawn when killed.
DeadBodiesNeverDisappear = False

; Allows the player to go through doors even if Ashley is far away.
AllowEnterDoorsWithoutAshley = False

[WEAPON_HOTKEYS]
; Enables usage of weapon hotkeys, to quickly switch weapons without needing to open inventory
Enable = false

; Per-slot key bindings, set to number keys by default
WeaponHotkeySlot1 = 1
WeaponHotkeySlot2 = 2
WeaponHotkeySlot3 = 3
WeaponHotkeySlot4 = 4
WeaponHotkeySlot5 = 5

; Siwtch to the last used weapon
LastWeaponHotkey = C

; User-chosen per-slot weapon IDs, for each weapon hotkey to switch to
; 0 (default) will make the slot cycle through a list of available weapons (see WeaponCycle values below)
; These can be changed in-game by highlighting a weapon in inventory and pressing the hotkey binding for the slot
WeaponIdSlot1 = 0
WeaponIdSlot2 = 0
WeaponIdSlot3 = 0
WeaponIdSlot4 = 0
WeaponIdSlot5 = 0

; List of weapons to cycle through for each hotkey-slot (when slot is set to 0)
; slot 1 cycles through different pistols
; slot 2 cycles through shotguns
; slot 3 cycles through rifles
; slot 4 cycles through rocket/mine launchers
; slot 5 cycles through throwables
WeaponCycleSlot1 = 35, 37, 33, 39, 3, 41, 42, 55
WeaponCycleSlot2 = 44, 45, 71, 148
WeaponCycleSlot3 = 16, 46, 47, 48, 52, 83
WeaponCycleSlot4 = 53, 109, 54
WeaponCycleSlot5 = 1, 2, 14, 8, 9, 10

[TRAINER_HOTKEYS]
; Key combination to set mouse focus on trainer related UIs (EmManager/Globals)
FocusUI = F5

; Key combination to toggle the "Disable Player Collision" / no-clip patch.
NoclipToggle = 

; Key combination to toggle the "Player Speed Override" patch
SpeedOverrideToggle = 

; Key combination to move Ashley to the player's position
MoveAshleyToPlayer = 
)"""";
