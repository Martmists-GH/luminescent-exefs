#pragma once

#include "il2cpp.h"

void System_Runtime_Remoting_Messaging_MonoMethodMessage__InitMessage (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, System_Reflection_MonoMethod_o* method, System_Object_array* out_args, const MethodInfo* method_info);
void System_Runtime_Remoting_Messaging_MonoMethodMessage___ctor (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, System_Reflection_MethodBase_o* method, System_Object_array* out_args, const MethodInfo* method_info);
void System_Runtime_Remoting_Messaging_MonoMethodMessage___ctor (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, System_Reflection_MethodInfo_o* minfo, System_Object_array* in_args, System_Object_array* out_args, const MethodInfo* method_info);
System_Reflection_MethodInfo_o* System_Runtime_Remoting_Messaging_MonoMethodMessage__GetMethodInfo (System_Type_o* type, System_String_o* methodName, const MethodInfo* method_info);
void System_Runtime_Remoting_Messaging_MonoMethodMessage___ctor (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, System_Type_o* type, System_String_o* methodName, System_Object_array* in_args, const MethodInfo* method_info);
System_Collections_IDictionary_o* System_Runtime_Remoting_Messaging_MonoMethodMessage__get_Properties (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, const MethodInfo* method_info);
int32_t System_Runtime_Remoting_Messaging_MonoMethodMessage__get_ArgCount (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, const MethodInfo* method_info);
System_Object_array* System_Runtime_Remoting_Messaging_MonoMethodMessage__get_Args (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, const MethodInfo* method_info);
System_Runtime_Remoting_Messaging_LogicalCallContext_o* System_Runtime_Remoting_Messaging_MonoMethodMessage__get_LogicalCallContext (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, const MethodInfo* method_info);
void System_Runtime_Remoting_Messaging_MonoMethodMessage__set_LogicalCallContext (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, System_Runtime_Remoting_Messaging_LogicalCallContext_o* value, const MethodInfo* method_info);
System_Reflection_MethodBase_o* System_Runtime_Remoting_Messaging_MonoMethodMessage__get_MethodBase (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, const MethodInfo* method_info);
System_String_o* System_Runtime_Remoting_Messaging_MonoMethodMessage__get_MethodName (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, const MethodInfo* method_info);
Il2CppObject* System_Runtime_Remoting_Messaging_MonoMethodMessage__get_MethodSignature (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, const MethodInfo* method_info);
System_String_o* System_Runtime_Remoting_Messaging_MonoMethodMessage__get_TypeName (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, const MethodInfo* method_info);
System_String_o* System_Runtime_Remoting_Messaging_MonoMethodMessage__get_Uri (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, const MethodInfo* method_info);
void System_Runtime_Remoting_Messaging_MonoMethodMessage__set_Uri (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, System_String_o* value, const MethodInfo* method_info);
Il2CppObject* System_Runtime_Remoting_Messaging_MonoMethodMessage__GetArg (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, int32_t arg_num, const MethodInfo* method_info);
System_Exception_o* System_Runtime_Remoting_Messaging_MonoMethodMessage__get_Exception (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, const MethodInfo* method_info);
int32_t System_Runtime_Remoting_Messaging_MonoMethodMessage__get_OutArgCount (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, const MethodInfo* method_info);
System_Object_array* System_Runtime_Remoting_Messaging_MonoMethodMessage__get_OutArgs (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, const MethodInfo* method_info);
Il2CppObject* System_Runtime_Remoting_Messaging_MonoMethodMessage__get_ReturnValue (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, const MethodInfo* method_info);
System_Runtime_Remoting_Identity_o* System_Runtime_Remoting_Messaging_MonoMethodMessage__System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, const MethodInfo* method_info);
void System_Runtime_Remoting_Messaging_MonoMethodMessage__System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, System_Runtime_Remoting_Identity_o* value, const MethodInfo* method_info);
System_Runtime_Remoting_Messaging_AsyncResult_o* System_Runtime_Remoting_Messaging_MonoMethodMessage__get_AsyncResult (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, const MethodInfo* method_info);
int32_t System_Runtime_Remoting_Messaging_MonoMethodMessage__get_CallType (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, const MethodInfo* method_info);
bool System_Runtime_Remoting_Messaging_MonoMethodMessage__NeedsOutProcessing (System_Runtime_Remoting_Messaging_MonoMethodMessage_o* __this, int32_t* outCount, const MethodInfo* method_info);
void System_Runtime_Remoting_Messaging_MonoMethodMessage___cctor (const MethodInfo* method_info);
