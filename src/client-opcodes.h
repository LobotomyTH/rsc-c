#ifndef _H_CLIENT_OPCODES
#define _H_CLIENT_OPCODES

/* client -> server opcodes */

typedef enum {
#ifdef REVISION_177
    CLIENT_APPEARANCE = 236,
    CLIENT_APPEARANCE_FRIEND = 65,
    CLIENT_BANK_CLOSE = 207,
    CLIENT_BANK_CLOSE_FRIEND = 886,
    CLIENT_BANK_DEPOSIT = 205,
    CLIENT_BANK_DEPOSIT_FRIEND = 523,
    CLIENT_BANK_WITHDRAW = 206,
    CLIENT_BANK_WITHDRAW_FRIEND = 655,
    CLIENT_CAST_GROUND = 221,
    CLIENT_CAST_GROUND_FRIEND = 545,
    CLIENT_CAST_GROUNDITEM = 224,
    CLIENT_CAST_GROUNDITEM_FRIEND = 821,
    CLIENT_CAST_INVITEM = 220,
    CLIENT_CAST_INVITEM_FRIEND = 567,
    CLIENT_CAST_NPC = 225,
    CLIENT_CAST_NPC_FRIEND = 824,
    CLIENT_CAST_OBJECT = 222,
    CLIENT_CAST_OBJECT_FRIEND = 555,
    CLIENT_CAST_PLAYER = 226,
    CLIENT_CAST_PLAYER_FRIEND = 117,
    CLIENT_CAST_SELF = 227,
    CLIENT_CAST_SELF_FRIEND = 411,
    CLIENT_CAST_WALLOBJECT = 223,
    CLIENT_CAST_WALLOBJECT_FRIEND = 596,
    CLIENT_CHANGE_PASSWORD = 25,
    CLIENT_CHANGE_PASSWORD_FRIEND = 551,
    CLIENT_CHAT = 3,
    CLIENT_CHAT_FRIEND = 643,
    CLIENT_CHOOSE_OPTION = 237,
    CLIENT_CHOOSE_OPTION_FRIEND = 3,
    CLIENT_CLOSE_CONNECTION = 1,
    CLIENT_CLOSE_CONNECTION_FRIEND = 325,
    CLIENT_COMBAT_STYLE = 231,
    CLIENT_COMBAT_STYLE_FRIEND = 700,
    CLIENT_COMMAND = 7,
    CLIENT_COMMAND_FRIEND = 293,
    CLIENT_DUEL_ACCEPT = 199,
    CLIENT_DUEL_ACCEPT_FRIEND = 564,
    CLIENT_DUEL_CONFIRM_ACCEPT = 198,
    CLIENT_DUEL_CONFIRM_ACCEPT_FRIEND = 198,
    CLIENT_DUEL_DECLINE = 203,
    CLIENT_DUEL_DECLINE_FRIEND = 266,
    CLIENT_DUEL_ITEM_UPDATE = 201,
    CLIENT_DUEL_ITEM_UPDATE_FRIEND = 53,
    CLIENT_DUEL_OPTIONS = 200,
    CLIENT_DUEL_OPTIONS_FRIEND = 285,
    CLIENT_FRIEND_ADD = 26,
    CLIENT_FRIEND_ADD_FRIEND = 622,
    CLIENT_FRIEND_REMOVE = 27,
    CLIENT_FRIEND_REMOVE_FRIEND = 707,
    CLIENT_GROUNDITEM_TAKE = 252,
    CLIENT_GROUNDITEM_TAKE_FRIEND = 634,
    CLIENT_IGNORE_ADD = 29,
    CLIENT_IGNORE_ADD_FRIEND = 101,
    CLIENT_IGNORE_REMOVE = 30,
    CLIENT_IGNORE_REMOVE_FRIEND = 511,
    CLIENT_INVENTORY_COMMAND = 246,
    CLIENT_INVENTORY_COMMAND_FRIEND = 237,
    CLIENT_INVENTORY_DROP = 251,
    CLIENT_INVENTORY_DROP_FRIEND = 664,
    CLIENT_INVENTORY_UNEQUIP = 248,
    CLIENT_INVENTORY_UNEQUIP_FRIEND = 466,
    CLIENT_INVENTORY_WEAR = 249,
    CLIENT_INVENTORY_WEAR_FRIEND = 267,
    CLIENT_KNOWN_PLAYERS = 254,
    CLIENT_KNOWN_PLAYERS_FRIEND = 254,
    CLIENT_LOGIN = 0,
    CLIENT_LOGIN_FRIEND = 625,
    CLIENT_RECONNECT = 19,
    CLIENT_RECONNECT_FRIEND = 712,
    CLIENT_LOGOUT = 6,
    CLIENT_LOGOUT_FRIEND = 156,
    CLIENT_NPC_ATTACK = 244,
    CLIENT_NPC_ATTACK_FRIEND = 754,
    CLIENT_NPC_COMMAND = 195,
    CLIENT_NPC_COMMAND_FRIEND = 543,
    CLIENT_NPC_TALK = 245,
    CLIENT_NPC_TALK_FRIEND = 586,
    CLIENT_OBJECT_COMMAND1 = 242,
    CLIENT_OBJECT_COMMAND1_FRIEND = 863,
    CLIENT_OBJECT_COMMAND2 = 230,
    CLIENT_OBJECT_COMMAND2_FRIEND = 67,
    CLIENT_PACKET_EXCEPTION = 3,
    CLIENT_PING = 5,
    CLIENT_PING_FRIEND = 348,
    CLIENT_PLAYER_ATTACK = 228,
    CLIENT_PLAYER_ATTACK_FRIEND = 414,
    CLIENT_PLAYER_DUEL = 204,
    CLIENT_PLAYER_DUEL_FRIEND = 273,
    CLIENT_PLAYER_FOLLOW = 214,
    CLIENT_PLAYER_FOLLOW_FRIEND = 596,
    CLIENT_PLAYER_TRADE = 235,
    CLIENT_PLAYER_TRADE_FRIEND = 636,
    CLIENT_PM = 28,
    CLIENT_PM_FRIEND = 185,
    CLIENT_PRAYER_OFF = 211,
    CLIENT_PRAYER_ON = 212,
    /*CLIENT_RECOVER_CANCEL = 196,
    CLIENT_RECOVER_GET_QUESTIONS = 233,
    CLIENT_RECOVER_REQUEST = 220,
    CLIENT_RECOVER_SET = 208,
    CLIENT_RECOVER_SET_REQUEST = 213,
    CLIENT_RECOVER_SET_REQUEST_FRIEND = 892,*/
    CLIENT_REGISTER = 2,
    CLIENT_REGISTER_FRIEND = 129,
    CLIENT_REPORT_ABUSE = 206,
    CLIENT_SETTINGS_GAME = 213,
    CLIENT_SETTINGS_GAME_FRIEND = 892,
    CLIENT_SETTINGS_PRIVACY = 31,
    CLIENT_SETTINGS_PRIVACY_FRIEND = 777,
    CLIENT_SHOP_BUY = 217,
    CLIENT_SHOP_BUY_FRIEND = 666,
    CLIENT_SHOP_CLOSE = 218,
    CLIENT_SHOP_CLOSE_FRIEND = 312,
    CLIENT_SHOP_SELL = 216,
    CLIENT_SHOP_SELL_FRIEND = 665,
    CLIENT_SLEEP_WORD = 193,
    CLIENT_SLEEP_WORD_FRIEND = 127,
    CLIENT_TRADE_ACCEPT = 232,
    CLIENT_TRADE_ACCEPT_FRIEND = 277,
    CLIENT_TRADE_CONFIRM_ACCEPT = 202,
    CLIENT_TRADE_CONFIRM_ACCEPT_FRIEND = 96,
    CLIENT_TRADE_DECLINE = 233,
    CLIENT_TRADE_DECLINE_FRIEND = 235,
    CLIENT_TRADE_ITEM_UPDATE = 234,
    CLIENT_TRADE_ITEM_UPDATE_FRIEND = 500,
    CLIENT_USEWITH_GROUNDITEM = 250,
    CLIENT_USEWITH_GROUNDITEM_FRIEND = 346,
    CLIENT_USEWITH_INVITEM = 240,
    CLIENT_USEWITH_INVITEM_FRIEND = 377,
    CLIENT_USEWITH_NPC = 243,
    CLIENT_USEWITH_NPC_FRIEND = 876,
    CLIENT_USEWITH_OBJECT = 241,
    CLIENT_USEWITH_OBJECT_FRIEND = 772,
    CLIENT_USEWITH_PLAYER = 219,
    CLIENT_USEWITH_PLAYER_FRIEND = 145,
    CLIENT_USEWITH_WALLOBJECT = 239,
    CLIENT_USEWITH_WALLOBJECT_FRIEND = 792,
    CLIENT_WALK = 194,
    CLIENT_WALK_FRIEND = 770,
    CLIENT_WALK_ACTION = 215,
    CLIENT_WALK_ACTION_FRIEND = 592,
    CLIENT_WALL_OBJECT_COMMAND1 = 238,
    CLIENT_WALL_OBJECT_COMMAND1_FRIEND = 212,
    CLIENT_WALL_OBJECT_COMMAND2 = 229,
    CLIENT_WALL_OBJECT_COMMAND2_FRIEND = 726
#else
    CLIENT_APPEARANCE = 235,
    CLIENT_BANK_CLOSE = 212,
    CLIENT_BANK_DEPOSIT = 23,
    CLIENT_BANK_WITHDRAW = 22,
    CLIENT_CAST_GROUND = 158,
    CLIENT_CAST_GROUNDITEM = 249,
    CLIENT_CAST_INVITEM = 4,
    CLIENT_CAST_NPC = 50,
    CLIENT_CAST_OBJECT = 99,
    CLIENT_CAST_PLAYER = 229,
    CLIENT_CAST_SELF = 137,
    CLIENT_CAST_WALLOBJECT = 180,
    CLIENT_CHANGE_PASSWORD = 25,
    CLIENT_CHAT = 216,
    CLIENT_CHOOSE_OPTION = 116,
    CLIENT_CLOSE_CONNECTION = 31,
    CLIENT_COMBAT_STYLE = 29,
    CLIENT_COMMAND = 38,
    CLIENT_DUEL_ACCEPT = 176,
    CLIENT_DUEL_CONFIRM_ACCEPT = 77,
    CLIENT_DUEL_DECLINE = 197,
    CLIENT_DUEL_ITEM_UPDATE = 33,
    CLIENT_DUEL_OPTIONS = 8,
    CLIENT_FRIEND_ADD = 195,
    CLIENT_FRIEND_REMOVE = 167,
    CLIENT_GROUNDITEM_TAKE = 247,
    CLIENT_IGNORE_ADD = 132,
    CLIENT_IGNORE_REMOVE = 241,
    CLIENT_INVENTORY_COMMAND = 90,
    CLIENT_INVENTORY_DROP = 246,
    CLIENT_INVENTORY_UNEQUIP = 170,
    CLIENT_INVENTORY_WEAR = 169,
    CLIENT_KNOWN_PLAYERS = 163,
    CLIENT_LOGIN = 0,
    CLIENT_LOGOUT = 102,
    CLIENT_NPC_ATTACK = 190,
    CLIENT_NPC_COMMAND = 202,
    CLIENT_NPC_TALK = 153,
    CLIENT_OBJECT_COMMAND1 = 136,
    CLIENT_OBJECT_COMMAND2 = 79,
    CLIENT_PACKET_EXCEPTION = 3,
    CLIENT_PING = 67,
    CLIENT_PLAYER_ATTACK = 171,
    CLIENT_PLAYER_DUEL = 103,
    CLIENT_PLAYER_FOLLOW = 165,
    CLIENT_PLAYER_TRADE = 142,
    CLIENT_PM = 218,
    CLIENT_PRAYER_OFF = 254,
    CLIENT_PRAYER_ON = 60,
    CLIENT_RECOVER_CANCEL = 196,
    CLIENT_RECOVER_GET_QUESTIONS = 233,
    CLIENT_RECOVER_REQUEST = 220,
    CLIENT_RECOVER_SET = 208,
    CLIENT_RECOVER_SET_REQUEST = 203,
    CLIENT_REGISTER = 2,
    CLIENT_REPORT_ABUSE = 206,
    CLIENT_SESSION = 32,
    CLIENT_SETTINGS_GAME = 111,
    CLIENT_SETTINGS_PRIVACY = 64,
    CLIENT_SHOP_BUY = 236,
    CLIENT_SHOP_CLOSE = 166,
    CLIENT_SHOP_SELL = 221,
    CLIENT_SLEEP_WORD = 45,
    CLIENT_TRADE_ACCEPT = 55,
    CLIENT_TRADE_CONFIRM_ACCEPT = 104,
    CLIENT_TRADE_DECLINE = 230,
    CLIENT_TRADE_ITEM_UPDATE = 46,
    CLIENT_USEWITH_GROUNDITEM = 53,
    CLIENT_USEWITH_INVITEM = 91,
    CLIENT_USEWITH_NPC = 135,
    CLIENT_USEWITH_OBJECT = 115,
    CLIENT_USEWITH_PLAYER = 113,
    CLIENT_USEWITH_WALLOBJECT = 161,
    CLIENT_WALK = 187,
    CLIENT_WALK_ACTION = 16,
    CLIENT_WALL_OBJECT_COMMAND1 = 14,
    CLIENT_WALL_OBJECT_COMMAND2 = 127
#endif
} ClientOpcode;

#endif
