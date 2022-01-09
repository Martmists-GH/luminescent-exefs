#pragma once

#include "il2cpp.h"

System_Runtime_Remoting_Contexts_CrossContextChannel_o* System_Runtime_Remoting_Channels_ChannelServices__get_CrossContextChannel (const MethodInfo* method_info);
System_Runtime_Remoting_Messaging_IMessageSink_o* System_Runtime_Remoting_Channels_ChannelServices__CreateClientChannelSinkChain (System_String_o* url, Il2CppObject* remoteChannelData, System_String_o** objectUri, const MethodInfo* method_info);
System_Runtime_Remoting_Messaging_IMessageSink_o* System_Runtime_Remoting_Channels_ChannelServices__CreateClientChannelSinkChain (System_Runtime_Remoting_Channels_IChannelSender_o* sender, System_String_o* url, System_Object_array* channelDataArray, System_String_o** objectUri, const MethodInfo* method_info);
void System_Runtime_Remoting_Channels_ChannelServices__RegisterChannel (System_Runtime_Remoting_Channels_IChannel_o* chnl, const MethodInfo* method_info);
void System_Runtime_Remoting_Channels_ChannelServices__RegisterChannel (System_Runtime_Remoting_Channels_IChannel_o* chnl, bool ensureSecurity, const MethodInfo* method_info);
void System_Runtime_Remoting_Channels_ChannelServices__RegisterChannelConfig (System_Runtime_Remoting_ChannelData_o* channel, const MethodInfo* method_info);
Il2CppObject* System_Runtime_Remoting_Channels_ChannelServices__CreateProvider (System_Runtime_Remoting_ProviderData_o* prov, const MethodInfo* method_info);
System_Runtime_Remoting_Messaging_IMessage_o* System_Runtime_Remoting_Channels_ChannelServices__SyncDispatchMessage (System_Runtime_Remoting_Messaging_IMessage_o* msg, const MethodInfo* method_info);
System_Runtime_Remoting_Messaging_ReturnMessage_o* System_Runtime_Remoting_Channels_ChannelServices__CheckIncomingMessage (System_Runtime_Remoting_Messaging_IMessage_o* msg, const MethodInfo* method_info);
System_Runtime_Remoting_Messaging_IMessage_o* System_Runtime_Remoting_Channels_ChannelServices__CheckReturnMessage (System_Runtime_Remoting_Messaging_IMessage_o* callMsg, System_Runtime_Remoting_Messaging_IMessage_o* retMsg, const MethodInfo* method_info);
bool System_Runtime_Remoting_Channels_ChannelServices__IsLocalCall (System_Runtime_Remoting_Messaging_IMessage_o* callMsg, const MethodInfo* method_info);
System_Object_array* System_Runtime_Remoting_Channels_ChannelServices__GetCurrentChannelInfo (const MethodInfo* method_info);
void System_Runtime_Remoting_Channels_ChannelServices___cctor (const MethodInfo* method_info);
