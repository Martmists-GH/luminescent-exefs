#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st___ctor (Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st__Execute (Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_o* __this, Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_Result_o* pResult, Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_Description_o** description, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st__checkFail (Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, bool isWazaLock, Dpr_Battle_Logic_ActionDesc_o* actionDesc, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st__cureNemuriCheck (Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st__cureKooriCheck (Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st__isWazaFailByKodawariLock (Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, int32_t waza, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st__checkSabotageType (Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st__isSabotageEnable (Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st__checkSabotageType_ByLevel (Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st__konranCheck (Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, uint8_t sabotageType, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st__cureSick_KONRAN (Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st__cureSick_NEMURI (Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st__cureSick_KOORI (Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st__cureSick_KOORI_ByWaza (Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, int32_t wazano, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st__meromeroCheck (Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st__wazaExecFailed (Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, uint8_t failCause, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st__wazaExecSucceeded (Dpr_Battle_Logic_Section_WazaExec_CheckFail_1st_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, const MethodInfo* method_info);
