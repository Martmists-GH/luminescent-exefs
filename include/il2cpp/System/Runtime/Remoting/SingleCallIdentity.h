#pragma once

#include "il2cpp.h"

void System_Runtime_Remoting_SingleCallIdentity___ctor (System_Runtime_Remoting_SingleCallIdentity_o* __this, System_String_o* objectUri, System_Runtime_Remoting_Contexts_Context_o* context, System_Type_o* objectType, const MethodInfo* method_info);
System_Runtime_Remoting_Messaging_IMessage_o* System_Runtime_Remoting_SingleCallIdentity__SyncObjectProcessMessage (System_Runtime_Remoting_SingleCallIdentity_o* __this, System_Runtime_Remoting_Messaging_IMessage_o* msg, const MethodInfo* method_info);
System_Runtime_Remoting_Messaging_IMessageCtrl_o* System_Runtime_Remoting_SingleCallIdentity__AsyncObjectProcessMessage (System_Runtime_Remoting_SingleCallIdentity_o* __this, System_Runtime_Remoting_Messaging_IMessage_o* msg, System_Runtime_Remoting_Messaging_IMessageSink_o* replySink, const MethodInfo* method_info);
