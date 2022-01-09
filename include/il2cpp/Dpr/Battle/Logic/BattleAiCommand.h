#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_BattleAiCommand__SetCommandHandler (uint8_t clientID, Dpr_Battle_Logic_AiScriptCommandHandler_o* pCommandHandler, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleAiCommand__ClearCommandHandlers (const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__AI_CMD (uint8_t clientID, int32_t cmd, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_RND_UNDER (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_RND_OVER (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_RND_EQUAL (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IFN_RND_EQUAL (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_HP_UNDER (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_HP_OVER (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_HP_EQUAL (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IFN_HP_EQUAL (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_POKESICK (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IFN_POKESICK (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_WAZASICK (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IFN_WAZASICK (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_DOKUDOKU (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IFN_DOKUDOKU (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_GET_HOROBINOUTA_TURN_MAX (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_GET_HOROBINOUTA_TURN_NOW (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_GET_KODAWARI_WAZA (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_CONTFLG (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IFN_CONTFLG (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_WEATHER (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_SIDEEFF (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IFN_SIDEEFF (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BattleAiCommand__check_have_damage_waza (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, Dpr_Battle_Logic_BTL_POKEPARAM_o* bpp, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_HAVE_DAMAGE_WAZA (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IFN_HAVE_DAMAGE_WAZA (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_TURN (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_TYPE (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_WAZA_USABLE (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BattleAiCommand__IsWazaUsable (Dpr_Battle_Logic_BTL_CLIENT_o* attackClient, Dpr_Battle_Logic_BTL_POKEPARAM_o* attackPoke, int32_t wazano, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_DAMAGE_WAZA (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_IRYOKU (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_COMP_POWER (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_GET_CURRENT_WAZANO (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_WAZASEQNO (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_WAZA_AISYOU (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_GET_WAZA_AISYOU (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_HAVE_WAZA_AISYOU_OVER (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_HAVE_WAZA_AISYOU_EQUAL (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BattleAiCommand__CalcTypeAffinity (Dpr_Battle_Logic_BattleEnv_o** battleEnv, Dpr_Battle_Logic_BattleSimulator_o* pSimulator, Dpr_Battle_Logic_BTL_POKEPARAM_o* attackPoke, Dpr_Battle_Logic_BTL_POKEPARAM_o* defensePoke, int32_t wazano, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BattleAiCommand__CalcTypeAffinityCanBench (Dpr_Battle_Logic_BattleEnv_o** battleEnv, Dpr_Battle_Logic_BattleSimulator_o* pSimulator, Dpr_Battle_Logic_BTL_POKEPARAM_o* attackPoke, Dpr_Battle_Logic_BTL_POKEPARAM_o* defensePoke, int32_t wazano, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_WAZA_NO_EFFECT_BY_TOKUSEI (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BattleAiCommand__CheckPokeTokusei (Dpr_Battle_Logic_MainModule_o** mainModule, uint8_t myClientId, Dpr_Battle_Logic_BTL_POKEPARAM_o* targetPoke, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BattleAiCommand__check_current_waza_hinsi (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, int32_t loss_flag, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_WAZA_HINSHI (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IFN_WAZA_HINSHI (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_LAST_WAZA (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_TOKUSEI (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BattleAiCommand__check_have_waza (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, int32_t ai_side, int32_t waza_no, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_HAVE_WAZA (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IFN_HAVE_WAZA (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_GET_LAST_DAMAGED_WAZA_AT_PREV_TURN (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_FIRST (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_BENCH_COUNT (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BattleAiCommand__check_pokesick_in_bench (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, int32_t ai_side, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_BENCH_COND (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IFN_BENCH_COND (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BattleAiCommand__get_poke_param (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, int32_t ai_side, int32_t valueID, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_PARA_UNDER (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_PARA_OVER (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_PARA_EQUAL (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IFN_PARA_EQUAL (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BattleAiCommand__check_have_waza_seqno (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, int32_t ai_side, int32_t seq_no, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_HAVE_WAZA_SEQNO (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IFN_HAVE_WAZA_SEQNO (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_ESCAPE (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_SOUBI_ITEM (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_SOUBI_EQUIP (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_POKESEX (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_NEKODAMASI (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_TAKUWAERU (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_BTL_RULE (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_BTL_COMPETITOR (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_RECYCLE_ITEM (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_WORKWAZA_TYPE (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_WORKWAZA_POW (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_WORKWAZA_SEQNO (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_MAMORU_COUNT (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_LEVEL (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_CHOUHATSU (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IFN_CHOUHATSU (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_MIKATA_ATTACK (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_HAVE_TYPE (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_HAVE_TOKUSEI (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_ALREADY_MORAIBI (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_HAVE_ITEM (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_FLDEFF_CHECK (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_SIDEEFF_COUNT (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_BENCH_HPDEC (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_BENCH_PPDEC (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_NAGETSUKERU_IRYOKU (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_PP_REMAIN (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_TOTTEOKI (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_WAZA_KIND (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_LAST_WAZA_KIND (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_AGI_RANK (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_SLOWSTART_TURN (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_BENCH_DAMAGE_MAX (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_HAVE_BATSUGUN (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_LAST_WAZA_DAMAGE_CHECK (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_STATUS_UP (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_STATUS_DIFF (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_STATUS (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_COMP_POWER_WITH_PARTNER (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_HINSHI (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IFN_HINSHI (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_GET_TOKUSEI (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_MIGAWARI (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_MONSNO (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_CHECK_FORMNO (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_COMMONRND_UNDER (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_COMMONRND_OVER (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_COMMONRND_EQUAL (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IFN_COMMONRND_EQUAL (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_MIRAIYOCHI (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_DMG_PHYSIC_UNDER (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_DMG_PHYSIC_OVER (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_DMG_PHYSIC_EQUAL (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_ATE_KINOMI (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_HAVE_KINOMI (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_TYPE_EX (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_EXIST_GROUND (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_GET_WEIGHT (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_MULTI (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_MEGAEVOLVED (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_CAN_MEGAEVOLVE (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_WAZAHIDE (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_GET_MEZAPA_TYPE (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_I_AM_SENARIO_TRAINER (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_GET_MAX_WAZA_POWER_INCLUDE_AFFINITY (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_BattleAiCommand__GetMaxWazaPowerIncludeAffinity (Dpr_Battle_Logic_BattleEnv_o** battleEnv, Dpr_Battle_Logic_BattleSimulator_o* pSimulator, Dpr_Battle_Logic_BTL_POKEPARAM_o* attackPoke, Dpr_Battle_Logic_BTL_POKEPARAM_o* defensePoke, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_GET_CURRENT_ITEMNO (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_ZIDANDA_POWERUP (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_GET_CLIENT_KILL_COUNT (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_GET_WAZA_TARGET (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_HAVE_BATSUGUN_CAN_BENCH (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_G (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_GWALL_EXIST (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_JK3_LEGEND (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_CAN_G (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_GWAZA_USE_TURN (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
int64_t Dpr_Battle_Logic_BattleAiCommand__CMDFUNC_IF_CAN_CHANGE_POKE (Dpr_Battle_Logic_AiScriptCommandHandler_o* handle, System_Int64_array* args, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleAiCommand___cctor (const MethodInfo* method_info);
