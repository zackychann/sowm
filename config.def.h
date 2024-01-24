#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod4Mask
#define TH  90
#define TC  255 + (255<<8) + (255<<16)

static const unsigned int gappx          = 20;       /* gap pixel */
static float splitrat                    = 0.6;     /* split ratio */

const char* menu[]    = {"st", "-e", "fzfcd",      0};
const char* term[]    = {"st",	           0};
const char* scrot[]   = {"scrot",          0};
const char* voldown[] = {"amixer", "sset", "Master", "5%-",         0};
const char* volup[]   = {"amixer", "sset", "Master", "5%+",         0};
const char* volmute[] = {"amixer", "sset", "Master", "toggle",      0};
const char* firefox[] = {"firefox", 0};
const char* killx[]   = {"killall", "xinit",	0};
const char* discord[] = {"discord",	0};

static struct key keys[] = {
    {MOD|ShiftMask,      XK_c,   win_kill,   {0}},
    {MOD,      		 XK_c,   win_center, {0}},
    {MOD,      		 XK_f,   win_fs,     {0}},
    {MOD,                XK_m,                     win_maximize,    {0}},
    {MOD,                XK_k,                     win_snap,        {.i = 1}},
    {MOD,                XK_l,                     win_snap,        {.i = 2}},
    {MOD,                XK_j,                     win_snap,        {.i = 3}},
    {MOD,                XK_h,                     win_snap,        {.i = 4}},
    {MOD|ShiftMask,      XK_i,                     modify_splitr,   {.i = 1}},
    {MOD,                XK_i,                     modify_splitr,   {.i = 2}},

    {Mod1Mask,           XK_Return, win_next,   {0}},
    {Mod1Mask|ShiftMask, XK_Tab, win_prev,   {0}},

    {MOD|ShiftMask, XK_q, run, {.com = killx}},
    {MOD|ShiftMask, XK_d, run, {.com = discord}},    
    {MOD, XK_p,      run, {.com = menu}},
    {MOD, XK_w,      run, {.com = firefox}},
    {MOD, XK_d,      run, {.com = scrot}},
    {MOD|ShiftMask,	XK_Return, run, {.com = term}},

    {0,   XF86XK_AudioLowerVolume,  run, {.com = voldown}},
    {0,   XF86XK_AudioRaiseVolume,  run, {.com = volup}},
    {0,   XF86XK_AudioMute,         run, {.com = volmute}},

    {MOD,           XK_1, ws_go,     {.i = 1}},
    {MOD|ShiftMask, XK_1, win_to_ws, {.i = 1}},
    {MOD,           XK_2, ws_go,     {.i = 2}},
    {MOD|ShiftMask, XK_2, win_to_ws, {.i = 2}},
    {MOD,           XK_3, ws_go,     {.i = 3}},
    {MOD|ShiftMask, XK_3, win_to_ws, {.i = 3}},
    {MOD,           XK_4, ws_go,     {.i = 4}},
    {MOD|ShiftMask, XK_4, win_to_ws, {.i = 4}},
    {MOD,           XK_5, ws_go,     {.i = 5}},
    {MOD|ShiftMask, XK_5, win_to_ws, {.i = 5}},
    {MOD,           XK_6, ws_go,     {.i = 6}},
    {MOD|ShiftMask, XK_6, win_to_ws, {.i = 6}},
};

#endif
