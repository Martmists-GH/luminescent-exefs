#pragma once

#include "il2cpp.h"

Dpr_Battle_Logic_BattleStr_o* Dpr_Battle_Logic_BattleStr__get_Instance (const MethodInfo* method_info);
Dpr_Message_MessageMsgFile_o* Dpr_Battle_Logic_BattleStr__GetMsgFile (Dpr_Battle_Logic_BattleStr_o* __this, int32_t id, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleStr__InitSystem (Dpr_Battle_Logic_MainModule_o* mainModule, uint8_t playerClientID, Dpr_Battle_Logic_POKECON_o* pokeCon, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleStr__QuitSystem (const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleStr___ctor (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Battle_Logic_MainModule_o* mainModule, uint8_t playerClientID, Dpr_Battle_Logic_POKECON_o* pokeCon, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleStr__SetupMsgFiles (Dpr_Battle_Logic_BattleStr_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleStr__UnSetupMsgFiles (Dpr_Battle_Logic_BattleStr_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BattleStr__register_PokeNickname (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, uint8_t pokeID, int32_t bufID, bool isTruth, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleStr__register_PokeName (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, uint8_t pokeID, uint8_t bufID, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleStr__register_TrainerType (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, uint8_t bufIdx, uint8_t clientID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BattleStr__register_TrainerName (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, uint8_t bufIdx, uint8_t clientID, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleStr__register_TrainerTypeAndTrainerName (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, uint8_t typeAndNameBufIdx, uint8_t trainerNameBufIdx, uint8_t clientID, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleStr__register_ItemName (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, uint8_t bufIdx, uint16_t itemNo, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__MakeStringStd (Dpr_Battle_Logic_BattleStr_o* __this, int32_t strID, System_Int32_array* inArgs, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__MakeStringStdWithArgArray (Dpr_Battle_Logic_BattleStr_o* __this, int32_t strID, System_Int32_array* args, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__mkstr_std_simple (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, int32_t strID, System_Int32_array* args, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__mkstr_std_side (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, int32_t strID, System_Int32_array* args, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__mkstr_std_cheer (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, int32_t strID, System_Int32_array* args, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__mkstr_std_useitem (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, int32_t strID, System_Int32_array* args, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__mkstr_std_gshockwave_rank (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, int32_t strID, System_Int32_array* args, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleStr__registerWords (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, Dpr_Message_MessageTextParseDataModel_o* textData, System_Int32_array* args, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__MakeStringSet (Dpr_Battle_Logic_BattleStr_o* __this, int32_t strID, System_Int32_array* args, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__mkstr_set_auto (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, int32_t strID, System_Int32_array* args, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__mkstr_set_default (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, int32_t defaultStrID, System_Int32_array* args, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__mkstr_set_poke2 (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, int32_t strID, System_Int32_array* args, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__mkstr_set_rankup (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, int32_t strID, System_Int32_array* args, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__mkstr_set_rankup_at_once (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, int32_t strID, System_Int32_array* args, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__mkstr_set_rankup_item (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, int32_t strID, System_Int32_array* args, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__mkstr_set_rank_limit (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, int32_t strID, System_Int32_array* args, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BattleStr__get_strFormat (Dpr_Battle_Logic_BattleStr_o* __this, uint8_t pokeID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BattleStr__isIgnoreStrFormat (Dpr_Battle_Logic_BattleStr_o* __this, uint8_t pokeID, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BattleStr__get_setStrID (Dpr_Battle_Logic_BattleStr_o* __this, uint8_t pokeID, int32_t defaultStrID, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BattleStr__get_setStrID_Poke2 (Dpr_Battle_Logic_BattleStr_o* __this, uint8_t pokeID1, uint8_t pokeID2, int32_t defaultStrID, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BattleStr__get_setPtnStrID (Dpr_Battle_Logic_BattleStr_o* __this, uint8_t pokeID, int32_t originStrID, uint8_t ptnNum, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BattleStr__searchPokeTagCount (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, int32_t strID, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__MakeStringWaza (Dpr_Battle_Logic_BattleStr_o* __this, uint8_t pokeID, uint16_t waza, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__makeStringWaza (Dpr_Battle_Logic_BattleStr_o* __this, uint8_t pokeID, uint16_t waza, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__MakeStringTrainer (Dpr_Battle_Logic_BattleStr_o* __this, int32_t trainerID, System_String_o* msgLabel, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BattleStr__GetTrainerMsgSrcFromTrainerID (Dpr_Battle_Logic_BattleStr_o* __this, int32_t trainerID, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__MakeStringTalk (Dpr_Battle_Logic_BattleStr_o* __this, int32_t strID, System_Int32_array* args, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__MakeStringTalk_simple (Dpr_Battle_Logic_BattleStr_o* __this, int32_t strID, const MethodInfo* method_info);
Dpr_Message_MessageTextParseDataModel_o* Dpr_Battle_Logic_BattleStr__formatTextMessage (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, Dpr_Message_MessageTextParseDataModel_o* textData, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleStr__CheckTagSet (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, Dpr_Message_MessageTextParseDataModel_o* textData, int32_t strID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BattleStr__getTextDataModel (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, int32_t strID, Dpr_Message_MessageTextParseDataModel_o** outTextData, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BattleStr__GetMsgSrcID (Dpr_Battle_Logic_BattleStr_o* __this, Dpr_Message_MessageMsgFile_o* msgFile, const MethodInfo* method_info);
System_String_o* Dpr_Battle_Logic_BattleStr__MakeText (Dpr_Message_MessageTextParseDataModel_o* textData, const MethodInfo* method_info);
System_String_o* Dpr_Battle_Logic_BattleStr__GetFormatUIText (Dpr_Battle_Logic_BattleStr_o* __this, System_String_o* label, Dpr_Message_MessageMsgFile_o* msgFile, const MethodInfo* method_info);
System_String_o* Dpr_Battle_Logic_BattleStr__GetFormatUIText (Dpr_Battle_Logic_BattleStr_o* __this, System_String_o* label, int32_t srcId, const MethodInfo* method_info);
System_String_o* Dpr_Battle_Logic_BattleStr__GetFormatUIPokeName (Dpr_Battle_Logic_BattleStr_o* __this, System_String_o* label, uint8_t pokeID, bool isTruth, uint8_t bufID, const MethodInfo* method_info);
System_String_o* Dpr_Battle_Logic_BattleStr__GetFormatUITrainerName (Dpr_Battle_Logic_BattleStr_o* __this, System_String_o* label, uint8_t clientID, uint8_t bufID, const MethodInfo* method_info);
System_String_o* Dpr_Battle_Logic_BattleStr__GetMonsName (int32_t monsNo, const MethodInfo* method_info);
System_String_o* Dpr_Battle_Logic_BattleStr__GetWazaName (int32_t wazaNo, const MethodInfo* method_info);
System_String_o* Dpr_Battle_Logic_BattleStr__GetTokuseiName (int32_t tokuseiNo, const MethodInfo* method_info);
System_String_o* Dpr_Battle_Logic_BattleStr__GetItemName (uint16_t itemNo, const MethodInfo* method_info);
System_String_o* Dpr_Battle_Logic_BattleStr__GetWazaInfo (int32_t wazaNo, const MethodInfo* method_info);
System_String_o* Dpr_Battle_Logic_BattleStr__GetTokuseiInfo (int32_t tokuseiNo, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleStr___cctor (const MethodInfo* method_info);
