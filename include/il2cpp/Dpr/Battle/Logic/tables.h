#pragma once

#include "il2cpp.h"

bool Dpr_Battle_Logic_tables__IsInclude (uint16_t value, Dpr_Battle_Logic_ServerCommand_array* table, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__checkTableElems (uint16_t value, System_UInt16_array* table, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsMatchEncoreFail (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsSakidoriFailWaza (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsDelayAttackWaza (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsZWaza (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsZWaza_General (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsZWaza_Special (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsGWaza (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsGWaza_General (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsPressureEffectiveWaza (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsGuardTypeSideEffect (int32_t eff, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsCombiWaza (int32_t waza, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_tables__GetAIItemPriority (uint16_t itemID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__CheckItemCallNoEffect (uint16_t itemID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsNoTargetItem (uint16_t itemID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsRotoponItem (uint16_t itemID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsKodawariItem (uint16_t itemID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__CheckNarikiriFailTokusei (int32_t tokuseiID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__CheckReceiverFailTokusei (int32_t tokuseiID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__CheckNakamaDukuriFailTokusei (int32_t tokuseiID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__CheckTraceFailTokusei (int32_t tokuseiID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__CheckSkillSwapFailTokusei (int32_t tokuseiID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsNeverChangeTokusei (int32_t tokuseiID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsMatchAruseusPlate (uint16_t itemID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsMatchGuripusu2Chip (uint16_t itemID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsMatchInsectaCasette (uint16_t itemID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsMatchKatayaburiTarget (int32_t tokuseiID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__CheckOmmitAfterHensin (int32_t tokuseiID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__CheckOmmitOnG (int32_t tokuseiID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsTypeChangeForbidPoke (uint16_t monsno, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsEffectDisableType (uint16_t effectNo, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsCourtChangeSwapSideEffect (int32_t effectNo, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_tables__GetMentalSickID (uint32_t idx, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsMentalSickID (int32_t sickID, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_tables__GetTurnCheckWazaSickByOrder (uint32_t idx, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__checkHaseiOmmitCommon (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsNegotoOmmit (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsNekoNoteOmmit (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsManekkoOmmit (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsMatchMonomaneFail (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsSaihaiOmmit (int32_t waza, const MethodInfo* method_info);
System_UInt16_array* Dpr_Battle_Logic_tables__GetYubiFuruPermitTable (const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsYubiFuruPermit (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsBoujinGuardWaza (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsAgoBoostWaza (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsBoudanWaza (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsDaiWallGuardDisable (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsOyakoaiOmitWaza (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsNotDisplayUiAffinity (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsTikarazukuEffeciveWaza (int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsKiriBaraiEnable_AttackerSide (int32_t effect, const MethodInfo* method_info);
bool Dpr_Battle_Logic_tables__IsKiriBaraiEnable_DefenderSide (int32_t effect, const MethodInfo* method_info);
void Dpr_Battle_Logic_tables___cctor (const MethodInfo* method_info);
