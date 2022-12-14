#pragma once

// Button definitions used by tool menus
enum class GamePadButton
{
	DPad_Left = 1,
	DPad_Right = 2,
	DPad_Down = 4,
	DPad_Up = 8,
	RT = 0x10,
	RB = 0x20,
	LB = 0x40,
	LT = 0x80,
	A = 0x100,
	B = 0x200,
	X = 0x400,
	Y = 0x800,
	Start = 0x1000,
	Back = 0x2000,
	RS = 0x4000,
	LS = 0x8000,
	LS_Left = 0x10000,
	LS_Right = 0x20000,
	LS_Down = 0x40000,
	LS_Up = 0x80000,
	RS_Left = 0x100000,
	RS_Right = 0x200000,
	RS_Down = 0x400000,
	RS_Up = 0x800000,
};

enum class Flags_DEBUG
{
	DBG_TEST_MODE = 0, // 0x80000000 (@ 0x0)
	DBG_SCR_TEST = 1, // 0x40000000 (@ 0x0)
	DBG_BACK_CLIP = 2, // 0x20000000 (@ 0x0)
	DBG_DBG_CAM = 3, // 0x10000000 (@ 0x0)
	DBG_SAT_DISP = 4, // 0x8000000 (@ 0x0)
	DBG_EAT_DISP = 5, // 0x4000000 (@ 0x0)
	DBG_EVENT_TOOL = 6, // 0x2000000 (@ 0x0)
	DBG_SLOW_ON = 7, // 0x1000000 (@ 0x0)
	DBG_SHADOW_POLYGON = 8, // 0x800000 (@ 0x0)
	DBG_SCE_AT_DISP = 9, // 0x400000 (@ 0x0)
	DBG_SCR2_TEST = 10, // 0x200000 (@ 0x0)
	DBG_SHADOW_FRAME = 11, // 0x100000 (@ 0x0)
	DBG_MIRROR_POLYGON = 12, // 0x80000 (@ 0x0)
	DBG_GROUND_DISP = 13, // 0x40000 (@ 0x0)
	DBG_SKELETON_DISP = 14, // 0x20000 (@ 0x0)
	DBG_ESPTOOL_ONSCR = 15, // 0x10000 (@ 0x0)
	DBG_CINESCO_OFF = 16, // 0x8000 (@ 0x0)
	DBG_RTP_DISP = 17, // 0x4000 (@ 0x0)
	DBG_ROOM_WIRE_DISP = 18, // 0x2000 (@ 0x0)
	DBG_EM_YARARE_DISP = 19, // 0x1000 (@ 0x0)
	DBG_CAM_AREA_OFF = 20, // 0x800 (@ 0x0)
	DBG_CLOTH_AT_DISP = 21, // 0x400 (@ 0x0)
	DBG_WIND_ON = 22, // 0x200 (@ 0x0)
	DBG_ESPTOOL_MEM_USE = 23, // 0x100 (@ 0x0)
	DBG_TEX_RENDER_ALL = 24, // 0x80 (@ 0x0)
	DBG_ESPTOOL_ONEM = 25, // 0x40 (@ 0x0)
	DBG_EMINFO_DISP = 26, // 0x20 (@ 0x0)
	DBG_LIGHT_TOOL = 27, // 0x10 (@ 0x0)
	DBG_EM_COUNT = 28, // 0x8 (@ 0x0)
	// 29, // 0x4 (@ 0x0)
	DBG_EM3F_ADA_SADLER = 30, // 0x2 (@ 0x0)
	DBG_CAM_ANTIGRO_OFF = 31, // 0x1 (@ 0x0)
	DBG_COCKPIT_TOOL = 32, // 0x80000000 (@ 0x4)
	DBG_BOUNDING_DISP = 33, // 0x40000000 (@ 0x4)
	DBG_ADJUST_CAM = 34, // 0x20000000 (@ 0x4)
	DBG_FLAT_FLOOR = 35, // 0x10000000 (@ 0x4)
	DBG_OBJ_SKELETON_ = 36, // 0x8000000 (@ 0x4)
	DBG_DRAW_SH_TEX = 37, // 0x4000000 (@ 0x4)
	DBG_EM_NO_ATK = 38, // 0x2000000 (@ 0x4)
	DBG_NO_EST_CALL = 39, // 0x1000000 (@ 0x4)
	DBG_IN_ESP_TOOL = 40, // 0x800000 (@ 0x4)
	DBG_TERM_TOOL = 41, // 0x400000 (@ 0x4)
	DBG_WARN_LEVEL_LOW = 42, // 0x200000 (@ 0x4)
	DBG_ID_TOOL = 43, // 0x100000 (@ 0x4)
	DBG_TITLE_CHECK = 44, // 0x80000 (@ 0x4)
	DBG_CAST_ERR_NO_DISP = 45, // 0x40000 (@ 0x4)
	DBG_EMW_ERR_NO_DISP = 46, // 0x20000 (@ 0x4)
	DBG_TIMER_STOP = 47, // 0x10000 (@ 0x4)
	DBG_SCREEN_SHOT = 48, // 0x8000 (@ 0x4)
	DBG_SERIES_SHOT = 49, // 0x4000 (@ 0x4)
	DBG_ASHLEY_NO_CATCH = 50, // 0x2000 (@ 0x4)
	DBG_RENSYA = 51, // 0x1000 (@ 0x4)
	DBG_CERO = 52, // 0x800 (@ 0x4)
	// 53, // 0x400 (@ 0x4)
	// 54, // 0x200 (@ 0x4)
	// 55, // 0x100 (@ 0x4)
	DBG_Wii_PAD = 56, // 0x80 (@ 0x4)
	// 57, // 0x40 (@ 0x4)
	// 58, // 0x20 (@ 0x4)
	// 59, // 0x10 (@ 0x4)
	// 60, // 0x8 (@ 0x4)
	// 61, // 0x4 (@ 0x4)
	// 62, // 0x2 (@ 0x4)
	// 63, // 0x1 (@ 0x4)
	DBG_ROOMJMP = 64, // 0x80000000 (@ 0x8)
	DBG_PROC_BAR = 65, // 0x40000000 (@ 0x8)
	DBG_SCA_VIEW = 66, // 0x20000000 (@ 0x8)
	DBG_OBA_VIEW = 67, // 0x10000000 (@ 0x8)
	DBG_SLOW_MODE = 68, // 0x8000000 (@ 0x8)
	DBG_NO_SCE_EXE = 69, // 0x4000000 (@ 0x8)
	DBG_SINGLE_DISK = 70, // 0x2000000 (@ 0x8)
	DBG_BUGCHECK_MODE = 71, // 0x1000000 (@ 0x8)
	DBG_NO_DEATH = 72, // 0x800000 (@ 0x8)
	DBG_INF_BULLET = 73, // 0x400000 (@ 0x8)
	DBG_NO_ENEMY = 74, // 0x200000 (@ 0x8)
	DBG_BGM_STOP = 75, // 0x100000 (@ 0x8)
	DBG_SE_STOP = 76, // 0x80000 (@ 0x8)
	DBG_PL_LOCK_FOLLOW = 77, // 0x40000 (@ 0x8)
	DBG_EM_NO_DEATH = 78, // 0x20000 (@ 0x8)
	DBG_KAIOUKEN = 79, // 0x10000 (@ 0x8)
	DBG_PAD_INFO = 80, // 0x8000 (@ 0x8)
	DBG_UNDER_CONST = 81, // 0x4000 (@ 0x8)
	DBG_EM_WEAK = 82, // 0x2000 (@ 0x8)
	DBG_EM_LIFE_DISP = 83, // 0x1000 (@ 0x8)
	DBG_SHADOW_LIGHT = 84, // 0x800 (@ 0x8)
	DBG_CAPTION_OFF = 85, // 0x400 (@ 0x8)
	DBG_TEST_MODE_CK = 86, // 0x200 (@ 0x8)
	DBG_LIGHT_ERR_CHECK = 87, // 0x100 (@ 0x8)
	DBG_EST_CALL_CHK = 88, // 0x80 (@ 0x8)
	DBG_GX_WARN_ALL = 89, // 0x40 (@ 0x8)
	DBG_GX_WARN_MIDIUM = 90, // 0x20 (@ 0x8)
	DBG_GX_WARN_SEVERE = 91, // 0x10 (@ 0x8)
	DBG_PL_NOHIT = 92, // 0x8 (@ 0x8)
	DBG_SE_ERR_ALL = 93, // 0x4 (@ 0x8)
	DBG_QUICK_EM_STOP = 94, // 0x2 (@ 0x8)
	DBG_AV_TEST = 95, // 0x1 (@ 0x8)
	DBG_INF_BULLET2 = 96, // 0x80000000 (@ 0xc)
	DBG_BATTLE_CAM = 97, // 0x40000000 (@ 0xc)
	DBG_PL_KLAUSER = 98, // 0x20000000 (@ 0xc)
	DBG_MAP_ZOOM_ORG = 99, // 0x10000000 (@ 0xc)
	DBG_SCISSOR_OFF = 100, // 0x8000000 (@ 0xc)
	DBG_LOG_OFF = 101, // 0x4000000 (@ 0xc)
	DBG_SCR_CHECK = 102, // 0x2000000 (@ 0xc)
	DBG_OBJ_SERVER = 103, // 0x1000000 (@ 0xc)
	DBG_START_ST2 = 104, // 0x800000 (@ 0xc)
	DBG_ERRORL_CK = 105, // 0x400000 (@ 0xc)
	DBG_APP_USE_DBMEM = 106, // 0x200000 (@ 0xc)
	DBG_REFRACT_CK = 107, // 0x100000 (@ 0xc)
	DBG_EM_NO_DIE_FLAG = 108, // 0x80000 (@ 0xc)
	DBG_START_ST3 = 109, // 0x40000 (@ 0xc)
	DBG_START_LAST = 110, // 0x20000 (@ 0xc)
	DBG_DOOR_SET_MODE = 111, // 0x10000 (@ 0xc)
	DBG_EFF_NUM_DISP = 112, // 0x8000 (@ 0xc)
	DBG_SET_HITMARK_ALL = 113, // 0x4000 (@ 0xc)
	DBG_FOG_FAR_GREEN = 114, // 0x2000 (@ 0xc)
	DBG_SSCRN_PROC_BAR = 115, // 0x1000 (@ 0xc)
	DBG_NO_ETC_SET = 116, // 0x800 (@ 0xc)
	DBG_NO_DEATH2 = 117, // 0x400 (@ 0xc)
	DBG_NO_PARASITE = 118, // 0x200 (@ 0xc)
	DBG_ESP_CHK = 119, // 0x100 (@ 0xc)
	DBG_NO_EVENT = 120, // 0x80 (@ 0xc)
	DBG_NO_LASER_LINE = 121, // 0x40 (@ 0xc)
	DBG_DATA_113 = 122, // 0x20 (@ 0xc)
	DBG_SHOP_FULL = 123, // 0x10 (@ 0xc)
	DBG_ADA_OMAKE_EV = 124, // 0x8 (@ 0xc)
	DBG_FOG_FAR_COLOR = 125, // 0x4 (@ 0xc)
	DBG_TOOL_EMINFO_DISP = 126, // 0x2 (@ 0xc)
	DBG_CHAR_MACHINE = 127, // 0x1 (@ 0xc)
};

extern const char* Flags_DEBUG_Names[];
extern std::unordered_map<int, std::string> Flags_DEBUG_Descriptions;

enum class Flags_STOP
{
	SPF_KEY = 0, // 0x80000000 (@ 0x0)
	SPF_CAMERA = 1, // 0x40000000 (@ 0x0)
	SPF_EM = 2, // 0x20000000 (@ 0x0)
	SPF_PL = 3, // 0x10000000 (@ 0x0)
	SPF_ESP = 4, // 0x8000000 (@ 0x0)
	SPF_OBJ = 5, // 0x4000000 (@ 0x0)
	SPF_CTRL = 6, // 0x2000000 (@ 0x0)
	SPF_LIGHT = 7, // 0x1000000 (@ 0x0)
	SPF_SCE = 8, // 0x800000 (@ 0x0)
	SPF_SCE_AT = 9, // 0x400000 (@ 0x0)
	SPF_CCHG = 10, // 0x200000 (@ 0x0)
	SPF_PL_CCHG = 11, // 0x100000 (@ 0x0)
	SPF_NOTSUBSCR = 12, // 0x80000 (@ 0x0)
	SPF_WATER = 13, // 0x40000 (@ 0x0)
	SPF_SPECULAR = 14, // 0x20000 (@ 0x0)
	SPF_EARTHQUAKE = 15, // 0x10000 (@ 0x0)
	SPF_VIBRATION = 16, // 0x8000 (@ 0x0)
	SPF_CINESCO = 17, // 0x4000 (@ 0x0)
	SPF_MIST = 18, // 0x2000 (@ 0x0)
	SPF_SUBCHAR = 19, // 0x1000 (@ 0x0)
	SPF_SE = 20, // 0x800 (@ 0x0)
	SPF_EVT = 21, // 0x400 (@ 0x0)
	SPF_BLOCK = 22, // 0x200 (@ 0x0)
	SPF_ACTBTN = 23, // 0x100 (@ 0x0)
	SPF_DATAREAD_AT = 24, // 0x80 (@ 0x0)
	SPF_ID_SYSTEM = 25, // 0x40 (@ 0x0)
	SPF_ESP_AREA = 26, // 0x20 (@ 0x0)
};

extern const char* Flags_STOP_Names[];
extern std::unordered_map<int, std::string> Flags_STOP_Descriptions;

enum class Flags_STATUS
{
	STA_BG_OFF = 0, // 0x80000000 (@ 0x0)
	STA_PL_CHECK = 1, // 0x40000000 (@ 0x0)
	STA_PL_CHECK2 = 2, // 0x20000000 (@ 0x0)
	STA_MOVIE_ON = 3, // 0x10000000 (@ 0x0)
	STA_CUTCHG = 4, // 0x8000000 (@ 0x0)
	STA_MOVIE2_ON = 5, // 0x4000000 (@ 0x0)
	STA_SSCRN_ENABLE = 6, // 0x2000000 (@ 0x0)
	STA_CINESCO = 7, // 0x1000000 (@ 0x0)
	STA_PL_FIRE = 8, // 0x800000 (@ 0x0)
	STA_09 = 9, // 0x400000 (@ 0x0)
	STA_ACT_DONT_FIRE = 10, // 0x200000 (@ 0x0)
	STA_DIEDEMO = 11, // 0x100000 (@ 0x0)
	STA_BLUR = 12, // 0x80000 (@ 0x0)
	STA_SUB_SCRN = 13, // 0x40000 (@ 0x0)
	STA_SHOOTING = 14, // 0x20000 (@ 0x0)
	STA_PAD_SENSITIVE = 15, // 0x10000 (@ 0x0)
	STA_LOOK_THROUGH = 16, // 0x8000 (@ 0x0)
	STA_PL_ACTION = 17, // 0x4000 (@ 0x0)
	STA_PL_INVISIBLE = 18, // 0x2000 (@ 0x0)
	STA_EVENT = 19, // 0x1000 (@ 0x0)
	STA_ASHLEY_HIDE = 20, // 0x800 (@ 0x0)
	STA_CAM_SHOULDER = 21, // 0x400 (@ 0x0)
	STA_WATER_ALIVE = 22, // 0x200 (@ 0x0)
	STA_CAMERA = 23, // 0x100 (@ 0x0)
	STA_BLACKOUT = 24, // 0x80 (@ 0x0)
	STA_SCOPE_CAMERA = 25, // 0x40 (@ 0x0)
	STA_RIDE_GONDOLA = 26, // 0x20 (@ 0x0)
	STA_WIND_ON = 27, // 0x10 (@ 0x0)
	STA_PL_JUMP_OFF = 28, // 0x8 (@ 0x0)
	STA_MIRROR = 29, // 0x4 (@ 0x0)
	STA_SAND_ALIVE = 30, // 0x2 (@ 0x0)
	STA_SELF_SHADOW = 31, // 0x1 (@ 0x0)
	STA_PL_SE_FOOT = 32, // 0x80000000 (@ 0x4)
	STA_PL_SE_WHISTLE = 33, // 0x40000000 (@ 0x4)
	STA_SE_BURST = 34, // 0x20000000 (@ 0x4)
	STA_SUSPEND = 35, // 0x10000000 (@ 0x4)
	STA_TEX_RENDER = 36, // 0x8000000 (@ 0x4)
	STA_THERMO_GRAPH = 37, // 0x4000000 (@ 0x4)
	STA_CAMERA_IN_ROOM = 38, // 0x2000000 (@ 0x4)
	STA_NO_LIGHTMASK = 39, // 0x1000000 (@ 0x4)
	STA_PL_SPEAR_SET = 40, // 0x800000 (@ 0x4)
	STA_PL_SWIM = 41, // 0x400000 (@ 0x4)
	STA_PL_BOAT = 42, // 0x200000 (@ 0x4)
	STA_WATER_CAMERA = 43, // 0x100000 (@ 0x4)
	STA_PL_SWIM_CAMERA = 44, // 0x80000 (@ 0x4)
	STA_PL_LADDER = 45, // 0x40000 (@ 0x4)
	STA_CRITICAL = 46, // 0x20000 (@ 0x4)
	STA_TAKEAWAY = 47, // 0x10000 (@ 0x4)
	STA_PL_CATCHED = 48, // 0x8000 (@ 0x4)
	STA_SHADOW_EQCOL = 49, // 0x4000 (@ 0x4)
	STA_PL_CATCHHOLD = 50, // 0x2000 (@ 0x4)
	STA_NEARCLIP_TOUCH = 51, // 0x1000 (@ 0x4)
	STA_CAMERA_SET_ROOM = 52, // 0x800 (@ 0x4)
	STA_ROOM_RAIN = 53, // 0x400 (@ 0x4)
	STA_USE_CAST_SHADOW = 54, // 0x200 (@ 0x4)
	STA_PROC_SHD_TEX = 55, // 0x100 (@ 0x4)
	STA_ALPHA_DRAW2 = 56, // 0x80 (@ 0x4)
	STA_SET_BG_COLOR = 57, // 0x40 (@ 0x4)
	STA_ESPGEN45_SET = 58, // 0x20 (@ 0x4)
	STA_EFFEM2D_TEXRND = 59, // 0x10 (@ 0x4)
	STA_SUB_LADDER = 60, // 0x8 (@ 0x4)
	STA_SUBCHAR_CTRL = 61, // 0x4 (@ 0x4)
	STA_ITEM_GET = 62, // 0x2 (@ 0x4)
	STA_LASERSITE_NOADD = 63, // 0x1 (@ 0x4)
	STA_PL_DONT_FIRE = 64, // 0x80000000 (@ 0x8)
	STA_PL_EM_ACTION = 65, // 0x40000000 (@ 0x8)
	STA_SUB_CATCHED = 66, // 0x20000000 (@ 0x8)
	STA_CUT_CHANGE = 67, // 0x10000000 (@ 0x8)
	STA_NO_FENCE = 68, // 0x8000000 (@ 0x8)
	STA_SSCRN_REQUEST = 69, // 0x4000000 (@ 0x8)
	STA_ESP_COMPULSION_NOSUSPEND = 70, // 0x2000000 (@ 0x8)
	STA_PL_MISS_SHOT = 71, // 0x1000000 (@ 0x8)
	STA_SUB_BULLDOZER = 72, // 0x800000 (@ 0x8)
	STA_LIT_NO_UPDATE = 73, // 0x400000 (@ 0x8)
	STA_MAP_DISABLE = 74, // 0x200000 (@ 0x8)
	STA_USE_SHADOW_LIGHT = 75, // 0x100000 (@ 0x8)
	STA_EVENT_SYSYTEM = 76, // 0x80000 (@ 0x8)
	STA_INTO_SHOP = 77, // 0x40000 (@ 0x8)
	STA_TIMER_NO_PAUSE = 78, // 0x20000 (@ 0x8)
	STA_EFFAREA_USE_CAM = 79, // 0x10000 (@ 0x8)
	STA_TITLE = 80, // 0x8000 (@ 0x8)
	STA_MAP_CK_UNLIMIT = 81, // 0x4000 (@ 0x8)
	STA_RIFLE_READY = 82, // 0x2000 (@ 0x8)
	STA_LOWPOLY_USE = 83, // 0x1000 (@ 0x8)
	STA_TERMINAL = 84, // 0x800 (@ 0x8)
	STA_HIGH_TEMPERATURE_THERMO = 85, // 0x400 (@ 0x8)
	// 86, // 0x200 (@ 0x8)
	// 87, // 0x100 (@ 0x8)
	// 88, // 0x80 (@ 0x8)
	// 89, // 0x40 (@ 0x8)
	// 90, // 0x20 (@ 0x8)
	// 91, // 0x10 (@ 0x8)
	// 92, // 0x8 (@ 0x8)
	// 93, // 0x4 (@ 0x8)
	// 94, // 0x2 (@ 0x8)
	// 95, // 0x1 (@ 0x8)
	STA_SAVEDATA_NO_UPDATE = 96, // 0x80000000 (@ 0xc)
	STA_BEHIND_CAM = 97, // 0x40000000 (@ 0xc)
	STA_62 = 98, // 0x20000000 (@ 0xc)
	STA_SCISSOR = 99, // 0x10000000 (@ 0xc)
	STA_SLOW = 100, // 0x8000000 (@ 0xc)
	STA_SUB_ASHLEY = 101, // 0x4000000 (@ 0xc)
	STA_BIG_MARKER = 102, // 0x2000000 (@ 0xc)
	STA_EVENT_CANCEL = 103, // 0x1000000 (@ 0xc)
	STA_KLAUSER_TRANSFORM = 104, // 0x800000 (@ 0xc)
	STA_ELEVATOR = 105, // 0x400000 (@ 0xc)
	// 106, // 0x200000 (@ 0xc)
	// 107, // 0x100000 (@ 0xc)
	// 108, // 0x80000 (@ 0xc)
	// 109, // 0x40000 (@ 0xc)
	// 110, // 0x20000 (@ 0xc)
	// 111, // 0x10000 (@ 0xc)
	STA_DIV_EVENT_SET = 112, // 0x8000 (@ 0xc)
	STA_DIV_EVENT_ING = 113, // 0x4000 (@ 0xc)
	STA_NOW_LOADING = 114, // 0x2000 (@ 0xc)
	STA_SCREEN_STOP_RESERVE = 115, // 0x1000 (@ 0xc)
	STA_TYPEWRITER = 116, // 0x800 (@ 0xc)
	// 117, // 0x400 (@ 0xc)
	// 118, // 0x200 (@ 0xc)
	// 119, // 0x100 (@ 0xc)
	// 120, // 0x80 (@ 0xc)
	// 121, // 0x40 (@ 0xc)
	// 122, // 0x20 (@ 0xc)
	// 123, // 0x10 (@ 0xc)
	// 124, // 0x8 (@ 0xc)
	// 125, // 0x4 (@ 0xc)
	// 126, // 0x2 (@ 0xc)
	// 127, // 0x1 (@ 0xc)
};

extern const char* Flags_STATUS_Names[];
extern std::unordered_map<int, std::string> Flags_STATUS_Descriptions;

enum class Flags_SYSTEM
{
	SYS_OMAKE_ADA_GAME = 0, // 0x80000000 (@ 0x0)
	SYS_OMAKE_ETC_GAME = 1, // 0x40000000 (@ 0x0)
	SYS_EXCEPTION = 2, // 0x20000000 (@ 0x0)
	SYS_RENDER_END = 3, // 0x10000000 (@ 0x0)
	SYS_SP_USED = 4, // 0x8000000 (@ 0x0)
	SYS_SOFT_RESET = 5, // 0x4000000 (@ 0x0)
	SYS_DATA_READ = 6, // 0x2000000 (@ 0x0)
	SYS_ROOMJUMP = 7, // 0x1000000 (@ 0x0)
	SYS_INVISIBLE = 8, // 0x800000 (@ 0x0)
	SYS_DOOR_AFTER = 9, // 0x400000 (@ 0x0)
	SYS_DOORDEMO = 10, // 0x200000 (@ 0x0)
	SYS_TRANS_STOP = 11, // 0x100000 (@ 0x0)
	SYS_CONTINUE = 12, // 0x80000 (@ 0x0)
	SYS_SET_BLACK = 13, // 0x40000 (@ 0x0)
	SYS_SN_PC_READ = 14, // 0x20000 (@ 0x0)
	SYS_SN_PC_READ_TOOL = 15, // 0x10000 (@ 0x0)
	SYS_SSCRN_EXEC = 16, // 0x8000 (@ 0x0)
	SYS_SCREEN_SHOT = 17, // 0x4000 (@ 0x0)
	SYS_NEW_GAME = 18, // 0x2000 (@ 0x0)
	SYS_PS2_ADA_GAME = 19, // 0x1000 (@ 0x0)
	SYS_SCISSOR_ON = 20, // 0x800 (@ 0x0)
	SYS_SCREEN_STOP = 21, // 0x400 (@ 0x0)
	SYS_CARD_ACCESS = 22, // 0x200 (@ 0x0)
	SYS_LOAD_GAME = 23, // 0x100 (@ 0x0)
	SYS_CONTINUE_AFTER = 24, // 0x80 (@ 0x0)
	SYS_START_EVT_SKIP = 25, // 0x40 (@ 0x0)
	SYS_HARD_MODE = 26, // 0x20 (@ 0x0)
	SYS_MESSAGE_INIT = 27, // 0x10 (@ 0x0)
	SYS_PUBLICITY_VER = 28, // 0x8 (@ 0x0)
	SYS_SAVEDATA_EXIST = 29, // 0x4 (@ 0x0)
	SYS_PAL = 30, // 0x2 (@ 0x0)
	SYS_DTV480P = 31, // 0x1 (@ 0x0)
};

extern const char* Flags_SYSTEM_Names[];
extern std::unordered_map<int, std::string> Flags_SYSTEM_Descriptions;

enum class Flags_ITEM_SET
{
	ITF_DUMMY = 0, // 0x80000000 (@ 0x0)
	ITF_R108_ITEM = 1, // 0x40000000 (@ 0x0)
	ITF_R105_ITEM = 2, // 0x20000000 (@ 0x0)
	ITF_FN57 = 3, // 0x10000000 (@ 0x0)
	ITF_R10A_ITEM06 = 4, // 0x8000000 (@ 0x0)
	ITF_R102_ITEM = 5, // 0x4000000 (@ 0x0)
	ITF_R103_ITEM00 = 6, // 0x2000000 (@ 0x0)
	ITF_R103_ITEM01 = 7, // 0x1000000 (@ 0x0)
	ITF_R10B_ITEM = 8, // 0x800000 (@ 0x0)
	ITF_R11C_ITEM = 9, // 0x400000 (@ 0x0)
	ITF_R216_ITEM = 10, // 0x200000 (@ 0x0)
	ITF_R207_GOLDEN_SWORD = 11, // 0x100000 (@ 0x0)
	ITF_R207_SILVER_SWORD = 12, // 0x80000 (@ 0x0)
	ITF_ITEM_5F = 13, // 0x40000 (@ 0x0)
	ITF_ITEM_59 = 14, // 0x20000 (@ 0x0)
	ITF_ITEM_5D = 15, // 0x10000 (@ 0x0)
	ITF_ITEM_61 = 16, // 0x8000 (@ 0x0)
	ITF_R20E_SALAZAR_CREST = 17, // 0x4000 (@ 0x0)
	ITF_R209_KEY = 18, // 0x2000 (@ 0x0)
	ITF_R21A_ITEM = 19, // 0x1000 (@ 0x0)
	ITF_R103_FILE = 20, // 0x800 (@ 0x0)
	ITF_R11D_ITEM = 21, // 0x400 (@ 0x0)
	ITF_R11E_ITEM = 22, // 0x200 (@ 0x0)
	ITF_R117_ITEM = 23, // 0x100 (@ 0x0)
	ITF_R10D_ITEM = 24, // 0x80 (@ 0x0)
	ITF_R309_KEY = 25, // 0x40 (@ 0x0)
	ITF_R308_THERMO_RIFLE = 26, // 0x20 (@ 0x0)
	ITF_R40E_SAMPLE00 = 27, // 0x10 (@ 0x0)
	ITF_R40B_SAMPLE00 = 28, // 0x8 (@ 0x0)
	ITF_R40C_SAMPLE00 = 29, // 0x4 (@ 0x0)
	ITF_R31C_CREST_A = 30, // 0x2 (@ 0x0)
	ITF_FILE_07 = 31, // 0x1 (@ 0x0)
	ITF_FILE_08 = 32, // 0x80000000 (@ 0x4)
	ITF_R410_SAMPLE00 = 33, // 0x40000000 (@ 0x4)
	ITF_22 = 34, // 0x20000000 (@ 0x4)
	ITF_R40D_SAMPLE00 = 35, // 0x10000000 (@ 0x4)
	ITF_R332_ADA_ROCKET = 36, // 0x8000000 (@ 0x4)
	ITF_ST2A_00 = 37, // 0x4000000 (@ 0x4)
	ITF_ST2A_01 = 38, // 0x2000000 (@ 0x4)
	ITF_ST2A_02 = 39, // 0x1000000 (@ 0x4)
	ITF_ST2A_03 = 40, // 0x800000 (@ 0x4)
	ITF_ST2A_04 = 41, // 0x400000 (@ 0x4)
	ITF_ST2A_05 = 42, // 0x200000 (@ 0x4)
	ITF_ST2A_06 = 43, // 0x100000 (@ 0x4)
	ITF_ST2A_07 = 44, // 0x80000 (@ 0x4)
	ITF_ST2A_08 = 45, // 0x40000 (@ 0x4)
	ITF_ST2A_09 = 46, // 0x20000 (@ 0x4)
	ITF_ST2A_10 = 47, // 0x10000 (@ 0x4)
	ITF_ST2A_11 = 48, // 0x8000 (@ 0x4)
	ITF_ST2B_00 = 49, // 0x4000 (@ 0x4)
	ITF_ST2B_01 = 50, // 0x2000 (@ 0x4)
	ITF_ST2B_02 = 51, // 0x1000 (@ 0x4)
	ITF_ST2C_00 = 52, // 0x800 (@ 0x4)
	ITF_ST3B_00 = 53, // 0x400 (@ 0x4)
	ITF_ST3B_01 = 54, // 0x200 (@ 0x4)
	ITF_ST3B_02 = 55, // 0x100 (@ 0x4)
	ITF_ST3D_00 = 56, // 0x80 (@ 0x4)
	ITF_ST3D_01 = 57, // 0x40 (@ 0x4)
	ITF_ST3D_02 = 58, // 0x20 (@ 0x4)
	ITF_ST3D_03 = 59, // 0x10 (@ 0x4)
	ITF_R400_00 = 60, // 0x8 (@ 0x4)
	ITF_R400_01 = 61, // 0x4 (@ 0x4)
	ITF_R400_02 = 62, // 0x2 (@ 0x4)
	ITF_R400_03 = 63, // 0x1 (@ 0x4)
	ITF_R400_04 = 64, // 0x80000000 (@ 0x8)
	ITF_R402_00 = 65, // 0x40000000 (@ 0x8)
	ITF_R402_01 = 66, // 0x20000000 (@ 0x8)
	ITF_R402_02 = 67, // 0x10000000 (@ 0x8)
	ITF_R402_03 = 68, // 0x8000000 (@ 0x8)
	ITF_R402_04 = 69, // 0x4000000 (@ 0x8)
	ITF_R402_05 = 70, // 0x2000000 (@ 0x8)
	ITF_R403_00 = 71, // 0x1000000 (@ 0x8)
	ITF_R403_01 = 72, // 0x800000 (@ 0x8)
	ITF_R403_02 = 73, // 0x400000 (@ 0x8)
	ITF_R403_03 = 74, // 0x200000 (@ 0x8)
	ITF_R403_04 = 75, // 0x100000 (@ 0x8)
	ITF_R403_05 = 76, // 0x80000 (@ 0x8)
	ITF_R403_06 = 77, // 0x40000 (@ 0x8)
	ITF_R403_07 = 78, // 0x20000 (@ 0x8)
	ITF_R403_08 = 79, // 0x10000 (@ 0x8)
	ITF_R403_09 = 80, // 0x8000 (@ 0x8)
	ITF_R403_10 = 81, // 0x4000 (@ 0x8)
	ITF_R403_11 = 82, // 0x2000 (@ 0x8)
	ITF_R404_00 = 83, // 0x1000 (@ 0x8)
	ITF_R404_01 = 84, // 0x800 (@ 0x8)
	ITF_R404_02 = 85, // 0x400 (@ 0x8)
	ITF_R404_03 = 86, // 0x200 (@ 0x8)
	ITF_R404_04 = 87, // 0x100 (@ 0x8)
	ITF_R404_05 = 88, // 0x80 (@ 0x8)
	ITF_R404_06 = 89, // 0x40 (@ 0x8)
	ITF_R404_07 = 90, // 0x20 (@ 0x8)
	ITF_R404_08 = 91, // 0x10 (@ 0x8)
	ITF_R404_09 = 92, // 0x8 (@ 0x8)
	ITF_R404_10 = 93, // 0x4 (@ 0x8)
	ITF_R404_11 = 94, // 0x2 (@ 0x8)
	ITF_ST2A_12 = 95, // 0x1 (@ 0x8)
	ITF_R119_ITEM0 = 96, // 0x80000000 (@ 0xC)
	ITF_R119_ITEM1 = 97, // 0x40000000 (@ 0xC)
	ITF_R119_ITEM2 = 98, // 0x20000000 (@ 0xC)
	ITF_R119_ITEM3 = 99, // 0x10000000 (@ 0xC)
	ITF_R119_ITEM4 = 100, // 0x8000000 (@ 0xC)
	ITF_R119_ITEM5 = 101, // 0x4000000 (@ 0xC)
	ITF_R11E_ITEM0 = 102, // 0x2000000 (@ 0xC)
	ITF_R11E_ITEM1 = 103, // 0x1000000 (@ 0xC)
	ITF_R11E_ITEM2 = 104, // 0x800000 (@ 0xC)
	ITF_R11E_ITEM3 = 105, // 0x400000 (@ 0xC)
	ITF_R11E_ITEM4 = 106, // 0x200000 (@ 0xC)
	ITF_R11E_ITEM5 = 107, // 0x100000 (@ 0xC)
	ITF_R11E_ITEM6 = 108, // 0x80000 (@ 0xC)
	ITF_R11E_ITEM7 = 109, // 0x40000 (@ 0xC)
	ITF_R11E_ITEM8 = 110, // 0x20000 (@ 0xC)
	ITF_R11E_ITEM9 = 111, // 0x10000 (@ 0xC)
	ITF_R11E_ITEM10 = 112, // 0x8000 (@ 0xC)
	ITF_R11E_ITEM11 = 113, // 0x4000 (@ 0xC)
	ITF_R502_KEY = 114, // 0x2000 (@ 0xC)
	ITF_R502_EMB = 115, // 0x1000 (@ 0xC)
	ITF_R502_KEY_DUMMY = 116, // 0x800 (@ 0xC)
	ITF_R502_EMB2 = 117, // 0x400 (@ 0xC)
	ITF_R50E_ITEM0 = 118, // 0x200 (@ 0xC)
	ITF_R50E_ITEM1 = 119, // 0x100 (@ 0xC)
	ITF_R50E_ITEM2 = 120, // 0x80 (@ 0xC)
	ITF_R50E_ITEM3 = 121, // 0x40 (@ 0xC)
	ITF_R508_STEEL_KEY = 122, // 0x20 (@ 0xC)
	ITF_ADA_01_TRES_00 = 123, // 0x10 (@ 0xC)
	ITF_ADA_01_TRES_01 = 124, // 0x8 (@ 0xC)
	ITF_ADA_01_TRES_02 = 125, // 0x4 (@ 0xC)
	ITF_ADA_01_TRES_03 = 126, // 0x2 (@ 0xC)
	ITF_ADA_01_TRES_04 = 127, // 0x1 (@ 0xC)
	ITF_ADA_02_TRES_00 = 128, // 0x80000000 (@ 0x10)
	ITF_ADA_02_TRES_01 = 129, // 0x40000000 (@ 0x10)
	ITF_ADA_02_TRES_02 = 130, // 0x20000000 (@ 0x10)
	ITF_ADA_02_TRES_03 = 131, // 0x10000000 (@ 0x10)
	ITF_ADA_02_TRES_04 = 132, // 0x8000000 (@ 0x10)
	ITF_ADA_03_TRES_00 = 133, // 0x4000000 (@ 0x10)
	ITF_ADA_03_TRES_01 = 134, // 0x2000000 (@ 0x10)
	ITF_ADA_03_TRES_02 = 135, // 0x1000000 (@ 0x10)
	ITF_ADA_03_TRES_03 = 136, // 0x800000 (@ 0x10)
	ITF_ADA_03_TRES_04 = 137, // 0x400000 (@ 0x10)
	ITF_ADA_04_TRES_00 = 138, // 0x200000 (@ 0x10)
	ITF_ADA_04_TRES_01 = 139, // 0x100000 (@ 0x10)
	ITF_ADA_04_TRES_02 = 140, // 0x80000 (@ 0x10)
	ITF_ADA_04_TRES_03 = 141, // 0x40000 (@ 0x10)
	ITF_ADA_04_TRES_04 = 142, // 0x20000 (@ 0x10)
	ITF_ADA_05_TRES_00 = 143, // 0x10000 (@ 0x10)
	ITF_ADA_05_TRES_01 = 144, // 0x8000 (@ 0x10)
	ITF_ADA_05_TRES_02 = 145, // 0x4000 (@ 0x10)
	ITF_ADA_05_TRES_03 = 146, // 0x2000 (@ 0x10)
	ITF_ADA_05_TRES_04 = 147, // 0x1000 (@ 0x10)
	ITF_R51E_ROCKET = 148, // 0x800 (@ 0x10)
	ITF_R50B_KEY = 149, // 0x400 (@ 0x10)
};

extern const char* Flags_ITEM_SET_Names[];
extern std::unordered_map<int, std::string> Flags_ITEM_SET_Descriptions;

enum class Flags_SCENARIO
{
	SCF_NULL = 0, // 0x80000000 (@ 0x0)
	SCF_R104_EVENT_4 = 1, // 0x40000000 (@ 0x0)
	SCF_R110_FLOOR_MOVE = 2, // 0x20000000 (@ 0x0)
	SCF_ACTIVATOR_SP_MES = 3, // 0x10000000 (@ 0x0)
	SCF_BLUE_HERB_MES = 4, // 0x8000000 (@ 0x0)
	SCF_R102_VIRUS_OCCUR = 5, // 0x4000000 (@ 0x0)
	SCF_R01E_TEST = 6, // 0x2000000 (@ 0x0)
	SCF_R100_TEST00 = 7, // 0x1000000 (@ 0x0)
	SCF_R100_TEST01 = 8, // 0x800000 (@ 0x0)
	SCF_R100_TEST02 = 9, // 0x400000 (@ 0x0)
	SCF_R106_EVENT = 10, // 0x200000 (@ 0x0)
	SCF_R117_FIND_ASHLEY = 11, // 0x100000 (@ 0x0)
	SCF_R100_DOG_RUN = 12, // 0x80000 (@ 0x0)
	SCF_ST1_SUB_MISSION = 13, // 0x40000 (@ 0x0)
	SCF_R11C_BESIEGED_EVENT = 14, // 0x20000 (@ 0x0)
	SCF_R201_EVENT00 = 15, // 0x10000 (@ 0x0)
	SCF_R108_PUZZLE_CLEAR = 16, // 0x8000 (@ 0x0)
	SCF_R100_KILL_GANADE_1ST = 17, // 0x4000 (@ 0x0)
	SCF_R101_ENTER = 18, // 0x2000 (@ 0x0)
	SCF_R103_ENTER = 19, // 0x1000 (@ 0x0)
	SCF_R106_ENTER = 20, // 0x800 (@ 0x0)
	SCF_R106_CONFINEED_WITH_LUIS = 21, // 0x400 (@ 0x0)
	SCF_R108_CHECK_DOOR = 22, // 0x200 (@ 0x0)
	SCF_R10C_GET_CREST = 23, // 0x100 (@ 0x0)
	SCF_NO_ASHLEY_DIST_CK = 24, // 0x80 (@ 0x0)
	SCF_R11C_BESIEGED_END_EVENT = 25, // 0x40 (@ 0x0)
	SCF_R103_CLOSE_COVER = 26, // 0x20 (@ 0x0)
	SCF_R103_ITEM_IN_CESSPIT = 27, // 0x10 (@ 0x0)
	SCF_R11B_END_SALAMANDER = 28, // 0x8 (@ 0x0)
	SCF_ST1_MAP_DAY = 29, // 0x4 (@ 0x0)
	SCF_ST1_MAP_NIGHT = 30, // 0x2 (@ 0x0)
	SCF_ST2_MAP = 31, // 0x1 (@ 0x0)
	SCF_ST3_MAP = 32, // 0x80000000 (@ 0x4)
	SCF_R217_PUZZLE_CLEAR = 33, // 0x40000000 (@ 0x4)
	SCF_R104_MEET_MERCHANT = 34, // 0x20000000 (@ 0x4)
	SCF_R206_ASHLEY_RESCUE = 35, // 0x10000000 (@ 0x4)
	SCF_R101_IMPRISON = 36, // 0x8000000 (@ 0x4)
	SCF_R103_OPEN_COVER = 37, // 0x4000000 (@ 0x4)
	SCF_R20D_END_OF_ASHLEY_PLAY = 38, // 0x2000000 (@ 0x4)
	SCF_ST1_NIGHT = 39, // 0x1000000 (@ 0x4)
	SCF_ST2_IN = 40, // 0x800000 (@ 0x4)
	SCF_CONTACT_MERCHANT = 41, // 0x400000 (@ 0x4)
	SCF_R10E_STOCK_DAY = 42, // 0x200000 (@ 0x4)
	SCF_R10E_STOCK_NIGHT = 43, // 0x100000 (@ 0x4)
	SCF_R108_OPERATOR = 44, // 0x80000 (@ 0x4)
	SCF_R204_ASHLEY_SPLIT = 45, // 0x40000 (@ 0x4)
	SCF_R11C_OPERATOR = 46, // 0x20000 (@ 0x4)
	SCF_ST3_IN = 47, // 0x10000 (@ 0x4)
	SCF_ST1_SUB_PERFECT = 48, // 0x8000 (@ 0x4)
	SCF_R104_MERCHANT_MARK = 49, // 0x4000 (@ 0x4)
	SCF_ST1_NIGHT_LV_ADD = 50, // 0x2000 (@ 0x4)
	SCF_R307_REGENERATER_APPEAR = 51, // 0x1000 (@ 0x4)
	SCF_R316_TO_R30A_CUTBACK_EVENT = 52, // 0x800 (@ 0x4)
	SCF_R30D_ENTER = 53, // 0x400 (@ 0x4)
	SCF_R332_BOSS_DIE = 54, // 0x200 (@ 0x4)
	SCF_ADA_COUNT_DOWN_START = 55, // 0x100 (@ 0x4)
	SCF_ST3_COUNT_DOWN_START = 56, // 0x80 (@ 0x4)
	SCF_R213_ASHLEY_LOST = 57, // 0x40 (@ 0x4)
	SCF_R317_LEON_WOUND = 58, // 0x20 (@ 0x4)
	SCF_R120_EVENT_CANCEL = 59, // 0x10 (@ 0x4)
	SCF_R22C_BONUS_1 = 60, // 0x8 (@ 0x4)
	SCF_R22C_BONUS_2 = 61, // 0x4 (@ 0x4)
	SCF_R22C_BONUS_3 = 62, // 0x2 (@ 0x4)
	SCF_R22C_BONUS_4 = 63, // 0x1 (@ 0x4)
	SCF_R321_HERI_DOWN = 64, // 0x80000000 (@ 0x8)
	SCF_R329_ASHLEY_HELP = 65, // 0x40000000 (@ 0x8)
	SCF_R405_ADA_GAME_INIT = 66, // 0x20000000 (@ 0x8)
	SCF_R31C_TOWER_EXPLODE = 67, // 0x10000000 (@ 0x8)
	SCF_R206_ASHLEY_GAME = 68, // 0x8000000 (@ 0x8)
	SCF_R201_SET_3OBJ = 69, // 0x4000000 (@ 0x8)
	SCF_R229_IN = 70, // 0x2000000 (@ 0x8)
	SCF_R225_IN = 71, // 0x1000000 (@ 0x8)
	SCF_R226_IN = 72, // 0x800000 (@ 0x8)
	SCF_R300_00 = 73, // 0x400000 (@ 0x8)
	SCF_R303_IN = 74, // 0x200000 (@ 0x8)
	SCF_R304_00 = 75, // 0x100000 (@ 0x8)
	SCF_R30C_ASHLEY_SCREAM = 76, // 0x80000 (@ 0x8)
	SCF_R309_GET_KEY = 77, // 0x40000 (@ 0x8)
	SCF_R30C_SAVE_ASHLEY = 78, // 0x20000 (@ 0x8)
	SCF_R317_KNIFE_BATTLE = 79, // 0x10000 (@ 0x8)
	SCF_R31A_IN = 80, // 0x8000 (@ 0x8)
	SCF_R31B_U3 = 81, // 0x4000 (@ 0x8)
	SCF_R31C_IN = 82, // 0x2000 (@ 0x8)
	SCF_R31C_OPEN_DOOR = 83, // 0x1000 (@ 0x8)
	SCF_R330_END_OPE = 84, // 0x800 (@ 0x8)
	SCF_R332_KEY_GET = 85, // 0x400 (@ 0x8)
	SCF_ST3_COUNT_DOWN_DIE = 86, // 0x200 (@ 0x8)
	SCF_KEY_LOCK = 87, // 0x100 (@ 0x8)
	SCF_R204_MERCHANT_MOVE = 88, // 0x80 (@ 0x8)
	SCF_OMAKE_MAP = 89, // 0x40 (@ 0x8)
	SCF_R100_OFFICERS_FOUND = 90, // 0x20 (@ 0x8)
	SCF_R21A_R21B_IN = 91, // 0x10 (@ 0x8)
	SCF_ADA_SHOP_1ST = 92, // 0x8 (@ 0x8)
	SCF_ADA_SHOP_2ND = 93, // 0x4 (@ 0x8)
	SCF_ASHLEY_PARA_OFF = 94, // 0x2 (@ 0x8)
	SCF_UNK_5F = 95, // 0x1 (@ 0x8)
	SCF_UNK_60 = 96, // 0x80000000 (@ 0xC)
	SCF_UNK_61 = 97, // 0x40000000 (@ 0xC)
	SCF_UNK_62 = 98, // 0x20000000 (@ 0xC)
	SCF_UNK_63 = 99, // 0x10000000 (@ 0xC)
	SCF_UNK_64 = 100, // 0x8000000 (@ 0xC)
	SCF_UNK_65 = 101, // 0x4000000 (@ 0xC)
	SCF_UNK_66 = 102, // 0x2000000 (@ 0xC)
	SCF_UNK_67 = 103, // 0x1000000 (@ 0xC)
	SCF_UNK_68 = 104, // 0x800000 (@ 0xC)
	SCF_UNK_69 = 105, // 0x400000 (@ 0xC)
	SCF_UNK_6A = 106, // 0x200000 (@ 0xC)
	SCF_UNK_6B = 107, // 0x100000 (@ 0xC)
	SCF_UNK_6C = 108, // 0x80000 (@ 0xC)
	SCF_UNK_6D = 109, // 0x40000 (@ 0xC)
	SCF_UNK_6E = 110, // 0x20000 (@ 0xC)
	SCF_UNK_6F = 111, // 0x10000 (@ 0xC)
	SCF_UNK_70 = 112, // 0x8000 (@ 0xC)
	SCF_UNK_71 = 113, // 0x4000 (@ 0xC)
	SCF_UNK_72 = 114, // 0x2000 (@ 0xC)
	SCF_UNK_73 = 115, // 0x1000 (@ 0xC)
	SCF_UNK_74 = 116, // 0x800 (@ 0xC)
	SCF_UNK_75 = 117, // 0x400 (@ 0xC)
	SCF_UNK_76 = 118, // 0x200 (@ 0xC)
	SCF_UNK_77 = 119, // 0x100 (@ 0xC)
	SCF_UNK_78 = 120, // 0x80 (@ 0xC)
	SCF_UNK_79 = 121, // 0x40 (@ 0xC)
	SCF_UNK_7A = 122, // 0x20 (@ 0xC)
	SCF_UNK_7B = 123, // 0x10 (@ 0xC)
	SCF_UNK_7C = 124, // 0x8 (@ 0xC)
	SCF_UNK_7D = 125, // 0x4 (@ 0xC)
	SCF_UNK_7E = 126, // 0x2 (@ 0xC)
	SCF_UNK_7F = 127, // 0x1 (@ 0xC)
	SCF_UNK_80 = 128, // 0x80000000 (@ 0x10)
	SCF_UNK_81 = 129, // 0x40000000 (@ 0x10)
	SCF_UNK_82 = 130, // 0x20000000 (@ 0x10)
	SCF_UNK_83 = 131, // 0x10000000 (@ 0x10)
	SCF_UNK_84 = 132, // 0x8000000 (@ 0x10)
	SCF_UNK_85 = 133, // 0x4000000 (@ 0x10)
	SCF_UNK_86 = 134, // 0x2000000 (@ 0x10)
	SCF_UNK_87 = 135, // 0x1000000 (@ 0x10)
	SCF_UNK_88 = 136, // 0x800000 (@ 0x10)
	SCF_UNK_89 = 137, // 0x400000 (@ 0x10)
	SCF_UNK_8A = 138, // 0x200000 (@ 0x10)
	SCF_UNK_8B = 139, // 0x100000 (@ 0x10)
	SCF_UNK_8C = 140, // 0x80000 (@ 0x10)
	SCF_UNK_8D = 141, // 0x40000 (@ 0x10)
	SCF_UNK_8E = 142, // 0x20000 (@ 0x10)
	SCF_UNK_8F = 143, // 0x10000 (@ 0x10)
	SCF_UNK_90 = 144, // 0x8000 (@ 0x10)
	SCF_UNK_91 = 145, // 0x4000 (@ 0x10)
	SCF_UNK_92 = 146, // 0x2000 (@ 0x10)
	SCF_UNK_93 = 147, // 0x1000 (@ 0x10)
	SCF_UNK_94 = 148, // 0x800 (@ 0x10)
	SCF_UNK_95 = 149, // 0x400 (@ 0x10)
	SCF_UNK_96 = 150, // 0x200 (@ 0x10)
	SCF_UNK_97 = 151, // 0x100 (@ 0x10)
	SCF_UNK_98 = 152, // 0x80 (@ 0x10)
	SCF_UNK_99 = 153, // 0x40 (@ 0x10)
	SCF_UNK_9A = 154, // 0x20 (@ 0x10)
	SCF_UNK_9B = 155, // 0x10 (@ 0x10)
	SCF_UNK_9C = 156, // 0x8 (@ 0x10)
	SCF_UNK_9D = 157, // 0x4 (@ 0x10)
	SCF_UNK_9E = 158, // 0x2 (@ 0x10)
	SCF_UNK_9F = 159, // 0x1 (@ 0x10)
	SCF_UNK_A0 = 160, // 0x80000000 (@ 0x14)
	SCF_UNK_A1 = 161, // 0x40000000 (@ 0x14)
	SCF_UNK_A2 = 162, // 0x20000000 (@ 0x14)
	SCF_UNK_A3 = 163, // 0x10000000 (@ 0x14)
	SCF_UNK_A4 = 164, // 0x8000000 (@ 0x14)
	SCF_UNK_A5 = 165, // 0x4000000 (@ 0x14)
	SCF_UNK_A6 = 166, // 0x2000000 (@ 0x14)
	SCF_FILE_07_GET = 167, // 0x1000000 (@ 0x14)
	SCF_FILE_08_GET = 168, // 0x800000 (@ 0x14)
	SCF_UNK_A9 = 169, // 0x400000 (@ 0x14)
	SCF_UNK_AA = 170, // 0x200000 (@ 0x14)
	SCF_UNK_AB = 171, // 0x100000 (@ 0x14)
	SCF_UNK_AC = 172, // 0x80000 (@ 0x14)
	SCF_UNK_AD = 173, // 0x40000 (@ 0x14)
	SCF_UNK_AE = 174, // 0x20000 (@ 0x14)
	SCF_UNK_AF = 175, // 0x10000 (@ 0x14)
	SCF_UNK_B0 = 176, // 0x8000 (@ 0x14)
	SCF_UNK_B1 = 177, // 0x4000 (@ 0x14)
	SCF_UNK_B2 = 178, // 0x2000 (@ 0x14)
	SCF_UNK_B3 = 179, // 0x1000 (@ 0x14)
	SCF_UNK_B4 = 180, // 0x800 (@ 0x14)
	SCF_UNK_B5 = 181, // 0x400 (@ 0x14)
	SCF_UNK_B6 = 182, // 0x200 (@ 0x14)
	SCF_UNK_B7 = 183, // 0x100 (@ 0x14)
	SCF_R316_IN = 184, // 0x80 (@ 0x14)
	SCF_R102_MEET_MERCHANT = 185, // 0x40 (@ 0x14)
	SCF_PS2_ADA_MAP = 186, // 0x20 (@ 0x14)
	SCF_R502_DOOR = 187, // 0x10 (@ 0x14)
	SCF_R502_GREEN_GEMS = 188, // 0x8 (@ 0x14)
	SCF_R502_EMBLEM = 189, // 0x4 (@ 0x14)
	SCF_R508_ENTER = 190, // 0x2 (@ 0x14)
	SCF_R508_STEEL_KEY = 191, // 0x1 (@ 0x14)
	SCF_R508_BOOT_GONDOLA = 192, // 0x80000000 (@ 0x18)
	SCF_R507_EVENT = 193, // 0x40000000 (@ 0x18)
	SCF_R50B_KEY = 194, // 0x20000000 (@ 0x18)
};

extern const char* Flags_SCENARIO_Names[];
extern std::unordered_map<int, std::string> Flags_SCENARIO_Descriptions;

enum class Flags_KEY_LOCK
{
	KYF_NULL = 0, // 0x80000000 (@ 0x0)
	KYF_R100_IRON_DOOR = 1, // 0x40000000 (@ 0x0)
	KYF_R101_IRON_DOOR = 2, // 0x20000000 (@ 0x0)
	KYF_R118_TO_R117_DOOR = 3, // 0x10000000 (@ 0x0)
	KYF_R113_TO_R11C_DOOR = 4, // 0x8000000 (@ 0x0)
	KYF_R21E_DOOR = 5, // 0x4000000 (@ 0x0)
	KYF_R105_TO_R101_DOOR = 6, // 0x2000000 (@ 0x0)
	KYF_R118_TO_R117_INLOCK = 7, // 0x1000000 (@ 0x0)
	KYF_R10F_TO_R200_DOOR = 8, // 0x800000 (@ 0x0)
	KYF_R104_TO_R107_DOOR = 9, // 0x400000 (@ 0x0)
	KYF_R20D_TO_R206_DOOR = 10, // 0x200000 (@ 0x0)
	KYF_R11D_IRON_DOOR = 11, // 0x100000 (@ 0x0)
	KYF_R11E_TO_R10F_DOOR = 12, // 0x80000 (@ 0x0)
	KYF_R206_TO_R211_DOOR = 13, // 0x40000 (@ 0x0)
	KYF_R203_TO_R201_DOOR = 14, // 0x20000 (@ 0x0)
	KYF_R11D_TO_R10F_DOOR = 15, // 0x10000 (@ 0x0)
	KYF_R201_DOOR = 16, // 0x8000 (@ 0x0)
	KYF_R201_TO_R210_DOOR = 17, // 0x4000 (@ 0x0)
	KYF_R306_TO_R308_DOOR = 18, // 0x2000 (@ 0x0)
	KYF_R30C_DOOR = 19, // 0x1000 (@ 0x0)
	KYF_R306_TO_R303_DOOR = 20, // 0x800 (@ 0x0)
	KYF_R30D_TO_R30F_DOOR = 21, // 0x400 (@ 0x0)
	KYF_R31C_TO_R320_DOOR = 22, // 0x200 (@ 0x0)
	KYF_R306_TO_R30B_DOOR = 23, // 0x100 (@ 0x0)
	KYF_ST1_00 = 24, // 0x80 (@ 0x0)
	KYF_ST1_01 = 25, // 0x40 (@ 0x0)
	KYF_ST1_02 = 26, // 0x20 (@ 0x0)
	KYF_ST1_03 = 27, // 0x10 (@ 0x0)
	KYF_ST1_04 = 28, // 0x8 (@ 0x0)
	KYF_ST1_05 = 29, // 0x4 (@ 0x0)
	KYF_ST1_06 = 30, // 0x2 (@ 0x0)
	KYF_ST1_07 = 31, // 0x1 (@ 0x0)
	KYF_ST1_08 = 32, // 0x80000000 (@ 0x4)
	KYF_ST1_09 = 33, // 0x40000000 (@ 0x4)
	KYF_ST1_10 = 34, // 0x20000000 (@ 0x4)
	KYF_ST1_12 = 35, // 0x10000000 (@ 0x4)
	KYF_ST1_13 = 36, // 0x8000000 (@ 0x4)
	KYF_ST1_14 = 37, // 0x4000000 (@ 0x4)
	KYF_ST1_15 = 38, // 0x2000000 (@ 0x4)
	KYF_ST1_16 = 39, // 0x1000000 (@ 0x4)
	KYF_ST1_17 = 40, // 0x800000 (@ 0x4)
	KYF_ST1_18 = 41, // 0x400000 (@ 0x4)
	KYF_ST1_19 = 42, // 0x200000 (@ 0x4)
	KYF_ST1_20 = 43, // 0x100000 (@ 0x4)
	KYF_ST1_21 = 44, // 0x80000 (@ 0x4)
	KYF_ST1_22 = 45, // 0x40000 (@ 0x4)
	KYF_ST1_23 = 46, // 0x20000 (@ 0x4)
	KYF_ST1_24 = 47, // 0x10000 (@ 0x4)
	KYF_ST1_25 = 48, // 0x8000 (@ 0x4)
	KYF_ST1_26 = 49, // 0x4000 (@ 0x4)
	KYF_ST2_00 = 50, // 0x2000 (@ 0x4)
	KYF_ST2_01 = 51, // 0x1000 (@ 0x4)
	KYF_ST2_02 = 52, // 0x800 (@ 0x4)
	KYF_ST2_03 = 53, // 0x400 (@ 0x4)
	KYF_ST2_04 = 54, // 0x200 (@ 0x4)
	KYF_ST2_05 = 55, // 0x100 (@ 0x4)
	KYF_ST2_06 = 56, // 0x80 (@ 0x4)
	KYF_ST2_07 = 57, // 0x40 (@ 0x4)
	KYF_ST2_08 = 58, // 0x20 (@ 0x4)
	KYF_ST2_09 = 59, // 0x10 (@ 0x4)
	KYF_ST2_10 = 60, // 0x8 (@ 0x4)
	KYF_ST2_11 = 61, // 0x4 (@ 0x4)
	KYF_ST2_12 = 62, // 0x2 (@ 0x4)
	KYF_ST2_13 = 63, // 0x1 (@ 0x4)
	KYF_ST2_14 = 64, // 0x80000000 (@ 0x8)
	KYF_ST2_15 = 65, // 0x40000000 (@ 0x8)
	KYF_ST2_16 = 66, // 0x20000000 (@ 0x8)
	KYF_ST2_17 = 67, // 0x10000000 (@ 0x8)
	KYF_ST2_18 = 68, // 0x8000000 (@ 0x8)
	KYF_ST2_19 = 69, // 0x4000000 (@ 0x8)
	KYF_ST2_20 = 70, // 0x2000000 (@ 0x8)
	KYF_ST2_21 = 71, // 0x1000000 (@ 0x8)
	KYF_ST2_22 = 72, // 0x800000 (@ 0x8)
	KYF_ST2_23 = 73, // 0x400000 (@ 0x8)
	KYF_ST2_24 = 74, // 0x200000 (@ 0x8)
	KYF_ST2_25 = 75, // 0x100000 (@ 0x8)
	KYF_ST2_26 = 76, // 0x80000 (@ 0x8)
	KYF_ST2_27 = 77, // 0x40000 (@ 0x8)
	KYF_ST2_28 = 78, // 0x20000 (@ 0x8)
	KYF_ST2_29 = 79, // 0x10000 (@ 0x8)
	KYF_ST2_30 = 80, // 0x8000 (@ 0x8)
	KYF_ST2_31 = 81, // 0x4000 (@ 0x8)
	KYF_ST2_32 = 82, // 0x2000 (@ 0x8)
	KYF_ST2_33 = 83, // 0x1000 (@ 0x8)
	KYF_ST2_34 = 84, // 0x800 (@ 0x8)
	KYF_ST2_35 = 85, // 0x400 (@ 0x8)
	KYF_ST2_36 = 86, // 0x200 (@ 0x8)
	KYF_ST2_37 = 87, // 0x100 (@ 0x8)
	KYF_ST2_38 = 88, // 0x80 (@ 0x8)
	KYF_ST2_39 = 89, // 0x40 (@ 0x8)
	KYF_ST3_00 = 90, // 0x20 (@ 0x8)
	KYF_ST3_01 = 91, // 0x10 (@ 0x8)
	KYF_ST3_02 = 92, // 0x8 (@ 0x8)
	KYF_ST3_03 = 93, // 0x4 (@ 0x8)
	KYF_ST3_04 = 94, // 0x2 (@ 0x8)
	KYF_ST3_05 = 95, // 0x1 (@ 0x8)
	KYF_ST3_06 = 96, // 0x80000000 (@ 0xC)
	KYF_ST3_07 = 97, // 0x40000000 (@ 0xC)
	KYF_ST3_08 = 98, // 0x20000000 (@ 0xC)
	KYF_ST3_09 = 99, // 0x10000000 (@ 0xC)
	KYF_ST3_10 = 100, // 0x8000000 (@ 0xC)
	KYF_ST3_11 = 101, // 0x4000000 (@ 0xC)
	KYF_ST3_12 = 102, // 0x2000000 (@ 0xC)
	KYF_ST3_13 = 103, // 0x1000000 (@ 0xC)
	KYF_ST3_14 = 104, // 0x800000 (@ 0xC)
	KYF_ST3_15 = 105, // 0x400000 (@ 0xC)
	KYF_ST3_16 = 106, // 0x200000 (@ 0xC)
	KYF_ST3_17 = 107, // 0x100000 (@ 0xC)
	KYF_ST3_18 = 108, // 0x80000 (@ 0xC)
	KYF_ST3_19 = 109, // 0x40000 (@ 0xC)
	KYF_ST3_20 = 110, // 0x20000 (@ 0xC)
	KYF_ST3_21 = 111, // 0x10000 (@ 0xC)
	KYF_ST3_22 = 112, // 0x8000 (@ 0xC)
	KYF_ST3_23 = 113, // 0x4000 (@ 0xC)
	KYF_ST3_24 = 114, // 0x2000 (@ 0xC)
	KYF_ST3_25 = 115, // 0x1000 (@ 0xC)
	KYF_ST3_26 = 116, // 0x800 (@ 0xC)
	KYF_ST3_27 = 117, // 0x400 (@ 0xC)
	KYF_ST3_28 = 118, // 0x200 (@ 0xC)
	KYF_ST3_29 = 119, // 0x100 (@ 0xC)
	KYF_ST3_30 = 120, // 0x80 (@ 0xC)
	KYF_ST3_31 = 121, // 0x40 (@ 0xC)
	KYF_ST3_32 = 122, // 0x20 (@ 0xC)
	KYF_ST3_33 = 123, // 0x10 (@ 0xC)
	KYF_ST3_34 = 124, // 0x8 (@ 0xC)
	KYF_ST4_00 = 125, // 0x4 (@ 0xC)
	KYF_ST4_01 = 126, // 0x2 (@ 0xC)
	KYF_ST4_02 = 127, // 0x1 (@ 0xC)
	KYF_ST4_03 = 128, // 0x80000000 (@ 0x10)
	KYF_ST5_00 = 129, // 0x40000000 (@ 0x10)
	KYF_ST5_01 = 130, // 0x20000000 (@ 0x10)
	KYF_ST5_02 = 131, // 0x10000000 (@ 0x10)
	KYF_ST5_03 = 132, // 0x8000000 (@ 0x10)
	KYF_ST5_04 = 133, // 0x4000000 (@ 0x10)
	KYF_ST5_05 = 134, // 0x2000000 (@ 0x10)
	KYF_ST5_06 = 135, // 0x1000000 (@ 0x10)
	KYF_ST5_07 = 136, // 0x800000 (@ 0x10)
	KYF_ST5_08 = 137, // 0x400000 (@ 0x10)
	KYF_ST5_09 = 138, // 0x200000 (@ 0x10)
	KYF_ST5_10 = 139, // 0x100000 (@ 0x10)
	KYF_ST5_11 = 140, // 0x80000 (@ 0x10)
	KYF_ST5_12 = 141, // 0x40000 (@ 0x10)
	KYF_ST5_13 = 142, // 0x20000 (@ 0x10)
	KYF_ST5_14 = 143, // 0x10000 (@ 0x10)
	KYF_ST5_15 = 144, // 0x8000 (@ 0x10)
	KYF_ST5_16 = 145, // 0x4000 (@ 0x10)
	KYF_ST5_17 = 146, // 0x2000 (@ 0x10)
	KYF_ST5_18 = 147, // 0x1000 (@ 0x10)
	KYF_ST5_19 = 148, // 0x800 (@ 0x10)
	KYF_MAX = 149, // 0x400 (@ 0x10)
};

extern const char* Flags_KEY_LOCK_Names[];
extern std::unordered_map<int, std::string> Flags_KEY_LOCK_Descriptions;

enum class Flags_ROOM
{
};

enum class Flags_ROOM_SAVE
{
};

enum class Flags_EXTRA
{
	EXT_COSTUME = 0, // 0x80000000 (@ 0x0)
	EXT_HARD_MODE = 1, // 0x40000000 (@ 0x0)
	EXT_GET_SW500 = 2, // 0x20000000 (@ 0x0)
	EXT_GET_TOMPSON = 3, // 0x10000000 (@ 0x0)
	EXT_GET_ADA = 4, // 0x8000000 (@ 0x0)
	EXT_GET_HUNK = 5, // 0x4000000 (@ 0x0)
	EXT_GET_KLAUSER = 6, // 0x2000000 (@ 0x0)
	EXT_GET_WESKER = 7, // 0x1000000 (@ 0x0)
	EXT_GET_OMAKE_ADA_GAME = 8, // 0x800000 (@ 0x0)
	EXT_GET_OMAKE_ETC_GAME = 9, // 0x400000 (@ 0x0)
	EXT_ASHLEY_ARMOR = 10, // 0x200000 (@ 0x0)
	EXT_GET_PS2_ADA_GAME = 11, // 0x100000 (@ 0x0)
	EXT_COSTUME_MAFIA = 12, // 0x80000 (@ 0x0)
	EXT_GET_LASER = 13, // 0x40000 (@ 0x0)
	EXT_GET_ADA_TOMPSON = 14, // 0x20000 (@ 0x0)
	EXT_GET_ADAS_REPORT = 15, // 0x10000 (@ 0x0)
};

extern const char* Flags_EXTRA_Names[];
extern std::unordered_map<int, std::string> Flags_EXTRA_Descriptions;

enum class Flags_CONFIG
{
	CFG_AIM_REVERSE = 0, // 0x80000000 (@ 0x0)
	CFG_WIDE_MODE = 1, // 0x40000000 (@ 0x0)
	CFG_LOCK_ON = 2, // 0x20000000 (@ 0x0)
	CFG_BONUS_GET = 3, // 0x10000000 (@ 0x0)
	CFG_VIBRATION = 4, // 0x8000000 (@ 0x0)
	CFG_KNIFE_MODE = 5, // 0x4000000 (@ 0x0)
};

extern const char* Flags_CONFIG_Names[];
extern std::unordered_map<int, std::string> Flags_CONFIG_Descriptions;

enum class Flags_DISP
{
	DPF_EM = 0, // 0x80000000 (@ 0x0)
	DPF_PL = 1, // 0x40000000 (@ 0x0)
	DPF_SUBCHAR = 2, // 0x20000000 (@ 0x0)
	DPF_OBJ = 3, // 0x10000000 (@ 0x0)
	DPF_SCR = 4, // 0x8000000 (@ 0x0)
	DPF_ESP = 5, // 0x4000000 (@ 0x0)
	DPF_SHADOW = 6, // 0x2000000 (@ 0x0)
	DPF_WATER = 7, // 0x1000000 (@ 0x0)
	DPF_MIRROR = 8, // 0x800000 (@ 0x0)
	DPF_CTRL = 9, // 0x400000 (@ 0x0)
	DPF_CINESCO = 10, // 0x200000 (@ 0x0)
	DPF_FILTER = 11, // 0x100000 (@ 0x0)
	DPF_GLB_ILM = 12, // 0x80000 (@ 0x0)
	DPF_CAST_SHADOW = 13, // 0x40000 (@ 0x0)
	DPF_CLOTH = 14, // 0x20000 (@ 0x0)
	DPF_COCKPIT = 15, // 0x10000 (@ 0x0)
	DPF_SELF_SHADOW = 16, // 0x8000 (@ 0x0)
	DPF_FOG = 17, // 0x4000 (@ 0x0)
	DPF_ID_SYSTEM = 18, // 0x2000 (@ 0x0)
	DPF_ACTBTN = 19, // 0x1000 (@ 0x0)
	DPF_MESSAGE = 20, // 0x800 (@ 0x0)
	DPF_TEX_RENDER = 21, // 0x400 (@ 0x0)
	DPF_EFFECT_VU1 = 22, // 0x200 (@ 0x0)
};

extern const char* Flags_DISP_Names[];
extern std::unordered_map<int, std::string> Flags_DISP_Descriptions;

// r226 is sadly the only detailed ROOM_FLAG/ROOM_SAVE_FLAG enum contained in PS2 symbols...
enum class ROOM_FLAG_r226
{
	RMF_BOBO_SWITCH_EXEC_FRONT,
	RMF_BOBO_SWITCH_EXEC_BACK,
	RMF_PILLAR_ESCAPE_ON,
	RMF_PILLAR_ESCAPE_ING,
	RMF_PILLAR_ESCAPE_LAST,
	RMF_PILLAR_SET_6,
	RMF_PILLAR_SET_7,
	RMF_PILLAR_SET_8,
	RMF_PILLAR_SET_9,
	RMF_PILLAR_SET_10,
	RMF_PILLAR_SET_11,
	RMF_PILLAR_SET_12,
	RMF_PILLAR_SET_13,
	RMF_BOBO_DOOR_PUNCH = 15,
	RMF_BOBO_SWITCH_FRONT,
	RMF_BOBO_SWITCH_BACK,
	RMF_BRIDGE_ST_00,
	RMF_BRIDGE_ST_01,
	RMF_BRIDGE_ST_02,
	RMF_BRIDGE_ST_03,
	RMF_BRIDGE_ST_04,
	RMF_BRIDGE_ST_05,
	RMF_BRIDGE_DIE_00,
	RMF_BRIDGE_DIE_01,
	RMF_BRIDGE_DIE_02,
	RMF_BRIDGE_DIE_03,
	RMF_BRIDGE_DIE_04,
	RMF_BRIDGE_DIE_05,
	RMF_BRIDGE_ON_AVOID,
	RMF_BRIDGE_ON_SAFE,
	RMF_PLAYER_DIE_PASSAGE_SET,
	RMF_PLAYER_DIE_BRIDGE_SET,
	RMF_PLAYER_DIE_ING,
	RMF_BGM_ON,
	RMF_ROBO_DOOR_BREAK,
	RMF_FLAG_EMRESET00 = 64,
	RMF_BRIDGE_ON_00,
	RMF_BRIDGE_ON_01,
	RMF_BRIDGE_ON_02,
	RMF_BRIDGE_ON_03,
	RMF_BRIDGE_ON_04,
	RMF_BRIDGE_ON_05,
	RMF_EMSET_00,
	RMF_EMSET_01
};

enum class ROOM_SAVE_FLAG_r226
{
	RSF_EVENT_ROBO_WALK_PASSAGE_START = 2,
	RSF_EVENT_ROBO_WALK_PASSAGE_END,
	RSF_EVENT_DOOR_OPEN,
	RSF_EVENT_ROBO_WALK_BRIDGE_START,
	RSF_EVENT_ROBO_WALK_BRIDGE_END,
	RSF_EVENT_PASSAGE_SWITCH00,
	RSF_EVENT_PASSAGE_SWITCH01,
	RSF_EVENT_ROBO_START,
	RSF_EVENT_ROBO_WATCH,
	RSF_EMRESET00,
	RSF_BRIDGE_DW,
	RSF_ROBO_FALL,
	RSF_EVENT_TOWER_LOOK,
	RSF_EMRESET_3F,
	RSF_EMRESET_1F,
	RSF_CONTINUE_POINT_SET,
	RSF_EMSET_179,
	RSF_EMSET_181,
	RSF_EMSET_END
};

extern const char* Flags_ROOM_SAVE_Names[];
extern const char* Flags_ROOM_SAVE_r226_Names[];
extern std::unordered_map<int, std::string> Flags_ROOM_SAVE_Descriptions;

extern const char* Flags_ROOM_Names[];
extern const char* Flags_ROOM_r226_Names[];
extern std::unordered_map<int, std::string> Flags_ROOM_Descriptions;

struct FlagCategoryInfo
{
	const char* CategoryName;
	uint32_t* FlagValues;
	uint16_t Length;
	uint16_t UnkA;
	char** FlagNames;
	uint32_t NumFlagNames;
};

#define NUM_FLAG_CATEGORIES 12

// flag algo from NieR Automata, seems to work exactly the same as RE4's flag system
constexpr uint32_t GetFlagValue(uint32_t flagIndex, uint32_t& offset)
{
	offset = (flagIndex / 32) * 4;
	return 0x80000000 >> (flagIndex & 31);
}

// Only use this on flags with less than 32 values
constexpr uint32_t GetFlagValue(uint32_t flagIndex)
{
	return 0x80000000 >> (flagIndex & 31);
}

inline bool FlagIsSet(uint32_t* flagValues, uint32_t flagIndex)
{
	return flagValues[(flagIndex / 32)] & (0x80000000 >> (flagIndex & 31));
}

inline void FlagSet(uint32_t* flagValues, uint32_t flagIndex, bool state)
{
	uint32_t flag = (0x80000000 >> (flagIndex & 31));
	if (state)
		flagValues[(flagIndex / 32)] |= flag;
	else
		flagValues[(flagIndex / 32)] &= ~flag;
}
