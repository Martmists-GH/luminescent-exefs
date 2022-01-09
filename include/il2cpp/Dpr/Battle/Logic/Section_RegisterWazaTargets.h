#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_RegisterWazaTargets___ctor (Dpr_Battle_Logic_Section_RegisterWazaTargets_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_RegisterWazaTargets__Execute (Dpr_Battle_Logic_Section_RegisterWazaTargets_o* __this, Dpr_Battle_Logic_Section_RegisterWazaTargets_Result_o* pResult, Dpr_Battle_Logic_Section_RegisterWazaTargets_Description_o** description, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_RegisterWazaTargets__canAimTarget (Dpr_Battle_Logic_Section_RegisterWazaTargets_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, uint8_t aimTargetID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_RegisterWazaTargets__checkTemptEnable (Dpr_Battle_Logic_Section_RegisterWazaTargets_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, bool enable, const MethodInfo* method_info);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_Section_RegisterWazaTargets__checkTemptPokemon (Dpr_Battle_Logic_Section_RegisterWazaTargets_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, bool* isInterrupted, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_Section_RegisterWazaTargets__checkTemptPokeID (Dpr_Battle_Logic_Section_RegisterWazaTargets_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, uint8_t targetPokeID, bool* isInterrupted, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_RegisterWazaTargets__increaseTarget (Dpr_Battle_Logic_Section_RegisterWazaTargets_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_PokeSet_o* targets, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_RegisterWazaTargets__correctTargetDead (Dpr_Battle_Logic_Section_RegisterWazaTargets_o* __this, int32_t rule, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, uint8_t targetPos, Dpr_Battle_Logic_PokeSet_o* rec, const MethodInfo* method_info);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_Section_RegisterWazaTargets__correctTargetDeadSub_decideTarget (Dpr_Battle_Logic_Section_RegisterWazaTargets_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, uint8_t defaultTargetPos, uint8_t targetListCount, Dpr_Battle_Logic_BTL_POKEPARAM_array* targets, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_Section_RegisterWazaTargets__correctTargetDeadSub_storeNextTargets (Dpr_Battle_Logic_Section_RegisterWazaTargets_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_array* dstNextTarget, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_RegisterWazaTargets__selectWazaTargets (Dpr_Battle_Logic_Section_RegisterWazaTargets_o* __this, Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BattleEnv_o* battleEnv, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, uint8_t targetPos, Dpr_Battle_Logic_WazaParam_o* wazaParam, uint8_t intrPokeID, Dpr_Battle_Logic_PokeSet_o* rec, bool* isTargetTemptEnable, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_RegisterWazaTargets__selectWazaTargets_Single (Dpr_Battle_Logic_Section_RegisterWazaTargets_o* __this, Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BattleEnv_o* battleEnv, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, uint8_t targetPos, Dpr_Battle_Logic_WazaParam_o* wazaParam, uint8_t intrPokeID, Dpr_Battle_Logic_PokeSet_o* rec, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_RegisterWazaTargets__selectWazaTargets_Double (Dpr_Battle_Logic_Section_RegisterWazaTargets_o* __this, Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BattleEnv_o* battleEnv, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, uint8_t targetPos, Dpr_Battle_Logic_WazaParam_o* wazaParam, uint8_t intrPokeID, Dpr_Battle_Logic_PokeSet_o* rec, bool* isTargetTemptEnable, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_RegisterWazaTargets__selectWazaTargets_Raid (Dpr_Battle_Logic_Section_RegisterWazaTargets_o* __this, Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BattleEnv_o* battleEnv, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, uint8_t targetPos, Dpr_Battle_Logic_WazaParam_o* wazaParam, uint8_t intrPokeID, Dpr_Battle_Logic_PokeSet_o* rec, bool* isTargetTemptEnable, const MethodInfo* method_info);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_Section_RegisterWazaTargets__getOpponentPokemon (Dpr_Battle_Logic_Section_RegisterWazaTargets_o* __this, Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_POKECON_o* pokecon, uint8_t myPoso, uint8_t opponentPokeIndex, const MethodInfo* method_info);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_Section_RegisterWazaTargets__getNextPokemon (Dpr_Battle_Logic_Section_RegisterWazaTargets_o* __this, Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_POKECON_o* pokecon, uint8_t myPoso, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_Section_RegisterWazaTargets__correctNoroiTarget (Dpr_Battle_Logic_Section_RegisterWazaTargets_o* __this, Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_POKECON_o* pokecon, Dpr_Battle_Logic_WazaParam_o* wazaParam, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, uint8_t targetPos, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_RegisterWazaTargets__removeNotExistTargets (Dpr_Battle_Logic_Section_RegisterWazaTargets_o* __this, Dpr_Battle_Logic_PokeSet_o* targets, const MethodInfo* method_info);
