#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_FightDamage_Ichigeki___ctor (Dpr_Battle_Logic_Section_FightDamage_Ichigeki_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FightDamage_Ichigeki__Execute (Dpr_Battle_Logic_Section_FightDamage_Ichigeki_o* __this, Dpr_Battle_Logic_Section_FightDamage_Ichigeki_Result_o* pResult, Dpr_Battle_Logic_Section_FightDamage_Ichigeki_Description_o** description, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_Section_FightDamage_Ichigeki__addDamage (Dpr_Battle_Logic_Section_FightDamage_Ichigeki_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pAttacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* pTarget, Dpr_Battle_Logic_WazaParam_o* pWazaParam, Dpr_Battle_Logic_PokeSet_o* pTargetPokeSet, Dpr_Battle_Logic_PokeSet_o* pDamagedPokeSet, int32_t affinity, bool isMigawariHit, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_FightDamage_Ichigeki__checkMigawariHit (Dpr_Battle_Logic_Section_FightDamage_Ichigeki_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* defender, Dpr_Battle_Logic_WazaParam_o* wazaParam, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_Section_FightDamage_Ichigeki__damageWithMigawari (Dpr_Battle_Logic_Section_FightDamage_Ichigeki_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, Dpr_Battle_Logic_WazaParam_o* wazaParam, int32_t affinityAbout, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FightDamage_Ichigeki__deleteMigawari (Dpr_Battle_Logic_Section_FightDamage_Ichigeki_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_FightDamage_Ichigeki__checkGuardEnable (Dpr_Battle_Logic_Section_FightDamage_Ichigeki_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* defender, Dpr_Battle_Logic_WazaParam_o* wazaParam, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_Section_FightDamage_Ichigeki__checkKoraeruEnable (Dpr_Battle_Logic_Section_FightDamage_Ichigeki_o* __this, uint16_t* pDamage, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* defender, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FightDamage_Ichigeki__onSucceeded (Dpr_Battle_Logic_Section_FightDamage_Ichigeki_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, int32_t affAbout, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FightDamage_Ichigeki__onKoraeru (Dpr_Battle_Logic_Section_FightDamage_Ichigeki_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, int32_t affAbout, uint8_t koraeruCause, uint16_t damage, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FightDamage_Ichigeki__section_Koraeru (Dpr_Battle_Logic_Section_FightDamage_Ichigeki_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pPoke, uint8_t cause, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FightDamage_Ichigeki__addWazaDamageRecord (Dpr_Battle_Logic_Section_FightDamage_Ichigeki_o* __this, uint8_t attackerPos, Dpr_Battle_Logic_BTL_POKEPARAM_o* pAttacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* pDefender, Dpr_Battle_Logic_WazaParam_o* pWazaParam, uint16_t damage, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FightDamage_Ichigeki__damageReaction (Dpr_Battle_Logic_Section_FightDamage_Ichigeki_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* defender, Dpr_Battle_Logic_WazaParam_o* wazaParam, int32_t affinity, uint32_t damage, bool isHitMigawari, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FightDamage_Ichigeki__checkPokeDead (Dpr_Battle_Logic_Section_FightDamage_Ichigeki_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pPoke, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, const MethodInfo* method_info);
Dpr_Battle_Logic_SectionUtil_GWallUpdateResult_o* Dpr_Battle_Logic_Section_FightDamage_Ichigeki__updateGWallGauge (Dpr_Battle_Logic_Section_FightDamage_Ichigeki_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pAttacker, Dpr_Battle_Logic_PokeSet_o* pDamagedPokeSet, Dpr_Battle_Logic_WazaParam_o* wazaParam, const MethodInfo* method_info);
