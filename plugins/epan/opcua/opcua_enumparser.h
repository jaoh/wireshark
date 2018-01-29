/******************************************************************************
** Copyright (C) 2006-2015 ascolab GmbH. All Rights Reserved.
** Web: http://www.ascolab.com
**
** This program is free software; you can redistribute it and/or
** modify it under the terms of the GNU General Public License
** as published by the Free Software Foundation; either version 2
** of the License, or (at your option) any later version.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** Project: OpcUa Wireshark Plugin
**
** Description: OpcUa Enum Type Parser
**
** This file was autogenerated on 13.10.2015.
** DON'T MODIFY THIS FILE!
** XXX - well, except that you may have to.  See the README.
**
******************************************************************************/

#include <glib.h>
#include <epan/packet.h>

extern gint ett_opcua_array_NodeIdType;
extern gint ett_opcua_array_NamingRuleType;
extern gint ett_opcua_array_OpenFileMode;
extern gint ett_opcua_array_TrustListMasks;
extern gint ett_opcua_array_IdType;
extern gint ett_opcua_array_NodeClass;
extern gint ett_opcua_array_ApplicationType;
extern gint ett_opcua_array_MessageSecurityMode;
extern gint ett_opcua_array_UserTokenType;
extern gint ett_opcua_array_SecurityTokenRequestType;
extern gint ett_opcua_array_NodeAttributesMask;
extern gint ett_opcua_array_AttributeWriteMask;
extern gint ett_opcua_array_BrowseDirection;
extern gint ett_opcua_array_BrowseResultMask;
extern gint ett_opcua_array_ComplianceLevel;
extern gint ett_opcua_array_FilterOperator;
extern gint ett_opcua_array_TimestampsToReturn;
extern gint ett_opcua_array_HistoryUpdateType;
extern gint ett_opcua_array_PerformUpdateType;
extern gint ett_opcua_array_MonitoringMode;
extern gint ett_opcua_array_DataChangeTrigger;
extern gint ett_opcua_array_DeadbandType;
extern gint ett_opcua_array_EnumeratedTestType;
extern gint ett_opcua_array_RedundancySupport;
extern gint ett_opcua_array_ServerState;
extern gint ett_opcua_array_ModelChangeStructureVerbMask;
extern gint ett_opcua_array_AxisScaleEnumeration;
extern gint ett_opcua_array_ExceptionDeviationFormat;
extern gint ett_opcua_array_AttributeId;

void parseNodeIdType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseNamingRuleType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseOpenFileMode(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseTrustListMasks(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseIdType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseNodeClass(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseApplicationType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseMessageSecurityMode(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseUserTokenType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseSecurityTokenRequestType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseNodeAttributesMask(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseAttributeWriteMask(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseBrowseDirection(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseComplianceLevel(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseFilterOperator(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseTimestampsToReturn(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseHistoryUpdateType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parsePerformUpdateType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseMonitoringMode(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseDataChangeTrigger(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseDeadbandType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseEnumeratedTestType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseRedundancySupport(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseServerState(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseModelChangeStructureVerbMask(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseAxisScaleEnumeration(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseExceptionDeviationFormat(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void parseAttributeId(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, gint *pOffset);
void registerEnumTypes(int proto);