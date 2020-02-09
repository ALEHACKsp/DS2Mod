typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined3;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined6;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct PlayerCtrl PlayerCtrl, *PPlayerCtrl;

typedef struct PlayerCtrl_vftable PlayerCtrl_vftable, *PPlayerCtrl_vftable;

typedef struct Transform Transform, *PTransform;

typedef struct Vec4 Vec4, *PVec4;

typedef wchar_t WCHAR;

typedef struct StatInt StatInt, *PStatInt;

typedef struct StatFloat StatFloat, *PStatFloat;

typedef struct SpEffectOwner SpEffectOwner, *PSpEffectOwner;

struct SpEffectOwner {
    pointer Vftable_SpEffectOwner;
    struct PlayerCtrl * m_pPlayerCtrl;
    pointer m_pChrStatusAbnormalities;
    longlong unknown;
};

struct Vec4 {
    float x;
    float y;
    float z;
    float w;
};

struct StatInt {
    int value;
    int min;
    int max;
};

struct StatFloat {
    float value;
    float min;
    float max;
};

struct Transform {
    struct Vec4 rotation_x;
    struct Vec4 rotation_y;
    struct Vec4 rotation_z;
    struct Vec4 location;
};

struct PlayerCtrl {
    struct PlayerCtrl_vftable * vftable;
    uint refcount;
    char field_0xc[4];
    pointer field_0x10;
    pointer field_0x18;
    pointer Heap_Multithreaded;
    longlong field_0x28;
    int field_0x30;
    int field_0x34;
    pointer field_0x38;
    pointer field_0x40;
    pointer field_0x48;
    int flags;
    byte cam1;
    byte cam2;
    char field_0x56[2];
    pointer field_0x58;
    struct Transform coordinates;
    struct Vec4 pos2;
    pointer field_0xb0;
    pointer field_0xb8;
    pointer field_0xc0;
    pointer field_0xc8;
    pointer field_0xd0;
    pointer field_0xd8;
    pointer m_pPlayerActionControl;
    pointer m_pPlayerOperator;
    pointer m_pCharacterModelCtrl;
    pointer m_pChrMotionControl;
    pointer m_pChrPhysicsCtrl;
    int unused_;
    int unused_2;
    int field_0x110;
    int field_0x114;
    WCHAR * m_pObjectName;
    longlong field_0x120;
    longlong field_0x128;
    longlong field_0x130;
    pointer m_pHeapObject1;
    undefined8 field_0x140;
    undefined8 field_0x148;
    undefined8 field_0x150;
    undefined8 field_0x158;
    float m_PlayerSpeedMax;
    float m_PlayerSpeedMin;
    struct StatInt m_Health;
    int m_HealthUndead;
    undefined2 field_0x178;
    undefined field_0x17a;
    undefined field_0x17b;
    undefined8 field_0x17c;
    undefined8 field_0x184;
    undefined8 field_0x18c;
    undefined8 field_0x194;
    undefined8 field_0x19c;
    undefined8 field_0x1a4;
    struct StatFloat m_Stamina;
    struct StatFloat m_UnknownStat;
    struct StatFloat m_Poison;
    struct StatFloat m_Bleed;
    struct StatFloat m_UnknownStat0;
    struct StatFloat m_Curse;
    struct StatFloat m_UnknwonStat1;
    struct StatFloat m_Toxic;
    struct StatFloat m_Petrify;
    struct StatFloat m_UnknownStat2;
    int field_0x224;
    pointer field_0x228;
    pointer m_pChrAttackDamageCtrl;
    pointer m_pChrFootEffectCtrl;
    pointer m_pChrCullingGroupCtrl;
    pointer m_pCharacterSfxSlotCtrl;
    pointer m_pCharacterHorizontalSfxSlotCtrl;
    pointer m_pChrFullBodySfxCtrl;
    pointer m_pChrWepSfxCtrl;
    pointer field_0x268;
    undefined8 field_0x270;
    undefined4 field_0x278;
    undefined field_0x27c;
    undefined field_0x27d;
    undefined field_0x27e;
    undefined field_0x27f;
    undefined field_0x280[16];
    undefined field_0x290[16];
    float field_0x2a0;
    float field_0x2a4;
    float m_TickSpeed;
    float field_0x2ac;
    struct Vec4 field_0x2b0;
    struct Vec4 field_0x2c0;
    struct Vec4 field_0x2d0;
    struct Vec4 field_0x2e0;
    struct Vec4 field_0x2f0;
    struct Vec4 field_0x300;
    struct Vec4 field_0x310;
    struct Vec4 field_0x320;
    struct Vec4 field_0x330;
    struct Vec4 field_0x340;
    struct Vec4 field_0x350;
    struct Vec4 field_0x360;
    int field_0x370;
    int field_0x374;
    pointer m_pChrAsmCtrl;
    pointer m_pChrCollideReactionCtrl; /* indirect */
    pointer m_pChrCollideReactionCtrl2; /* indirect+20 */
    pointer m_pChrEventTriggerCtrl;
    pointer m_pPlayerGameParamCalculator;
    pointer m_pPlayerLockTargetCtrl;
    pointer m_pChrCollideReactionCtr3;
    pointer m_pChrNaviGraphLocationComponent;
    struct SpEffectOwner m_SpEffectOwner;
    pointer m_pChrStatusAbnormalities;
    pointer m_pChrSpEffectCtrl;
    pointer m_pChrSpEffectSlotWatcher;
    pointer field_0x3f0;
    pointer field_0x3f8;
    pointer m_pChrMorphemeTimeActTrackSoundCtrlCharacterInterface;
    pointer field_0x408;
    pointer m_pCharacterSoundSlotCtrl;
    pointer field_0x418;
    pointer field_0x420;
    undefined field_0x428;
    undefined2 field_0x429;
    undefined field_0x42b;
    int field_0x42c[6];
    int field_0x444[6];
    int field_0x45c;
    pointer m_pTextureCube;
    pointer m_pMapEntity;
    longlong field_0x470;
    longlong field_0x478;
    pointer m_pPlayerActionCtrl;
    pointer field_0x488;
    pointer m_PlayerStats; /* #Todo Create Struct */
    pointer field_0x498;
};

struct PlayerCtrl_vftable {
    pointer Destructor;
    pointer field_0x8;
    pointer field_0x10;
    pointer field_0x18;
    pointer field_0x20;
    pointer field_0x28;
    pointer field_0x30;
    pointer field_0x38;
    pointer field_0x40;
    pointer field_0x48;
    pointer field_0x50;
    pointer field_0x58;
    pointer field_0x60;
    pointer field_0x68;
    pointer field_0x70;
    pointer field_0x78;
    pointer field_0x80;
    pointer field_0x88;
    pointer PlayerSpeedFunction;
    pointer field_0x98;
    pointer field_0xa0;
    pointer field_0xa8;
    pointer field_0xb0;
    pointer field_0xb8;
    pointer field_0xc0;
    pointer field_0xc8;
    pointer field_0xd0;
    pointer field_0xd8;
    pointer field_0xe0;
    pointer field_0xe8;
    pointer field_0xf0;
    pointer field_0xf8;
    pointer field_0x100;
    pointer GetCharacterModelCtrl;
    pointer field_0x110;
    pointer field_0x118;
    pointer GetChrAsmCtrl;
    pointer field_0x128;
    pointer field_0x130;
    pointer GetPlayerCoordinates2;
    pointer SetPlayerCoordinates;
    pointer GetPlayerPos;
    pointer GetPlayerPos2;
    pointer MovementFunction;
    pointer field_0x160;
    pointer GetCharacterSfxSlotCtrl;
    pointer GetChrFullBodySfxCtrl;
    pointer GetChrCullingGroupCtrl;
    pointer field_0x180;
    pointer GetTextureCube?;
    pointer field_0x190;
    pointer field_0x198;
    pointer field_0x1a0;
    pointer field_0x1a8;
    pointer IsDead;
    pointer GetCurrentHealth;
    pointer GetHealthUndead;
    pointer field_0x1c8;
    pointer field_0x1d0;
    pointer field_0x1d8;
    pointer field_0x1e0;
    pointer field_0x1e8;
    pointer field_0x1f0;
    pointer field_0x1f8;
    pointer field_0x200;
    pointer field_0x208;
    pointer field_0x210;
    pointer field_0x218;
    pointer field_0x220;
    pointer field_0x228;
    pointer field_0x230;
    pointer field_0x238;
    pointer GetRotationZ;
    pointer GetCharacterHorizontalSfxSlotCtrl;
    pointer GetChrWepSfxCtrl;
    pointer field_0x258;
    pointer field_0x260;
    pointer field_0x268;
};
