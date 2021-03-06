//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEPolicySession.h>

@interface NEPolicySession (AlwaysOnVPN)
+ (long long)checkVoiceMailExceptionWithConfiguration:(id)arg1;	// IMP=0x0000000100058050
+ (long long)checkAirPrintExceptionWithConfiguration:(id)arg1;	// IMP=0x0000000100057fa0
+ (long long)checkCellularServicesExceptionWithConfiguration:(id)arg1;	// IMP=0x0000000100057ef0
- (_Bool)addConfigdExceptionWithOrder:(unsigned int *)arg1 policyIDList:(id)arg2;	// IMP=0x0000000100059cec
- (_Bool)evaluateConfigurationEssentialwithOrder:(unsigned int *)arg1;	// IMP=0x0000000100059bf8
- (_Bool)evaluateConfigurationForHighPriority:(id)arg1 startOrder:(unsigned int)arg2 IMSUseIPSec:(_Bool)arg3 dropAllLevel:(long long *)arg4 captiveNetworkPlugins:(id)arg5;	// IMP=0x0000000100059a44
- (_Bool)evaluateConfiguration:(id)arg1 startOrder:(unsigned int)arg2 IMSUseIPSec:(_Bool)arg3 dropAllLevel:(long long *)arg4 captiveNetworkPlugins:(id)arg5;	// IMP=0x00000001000597fc
- (_Bool)addAllowedCaptiveNetworkPlugins:(id)arg1 order:(unsigned int *)arg2 allowCaptiveWebSheet:(_Bool)arg3 allowAllCaptiveNetworkPlugins:(_Bool)arg4 allowedCaptiveNetworkPlugins:(id)arg5;	// IMP=0x0000000100059770
- (_Bool)addAllowedCaptiveNetworkPluginsWithResult:(id)arg1 order:(unsigned int *)arg2 allowCaptiveWebSheet:(_Bool)arg3 allowAllCaptiveNetworkPlugins:(_Bool)arg4 allowedCaptiveNetworkPlugins:(id)arg5 result:(id)arg6 policyIDList:(id)arg7;	// IMP=0x00000001000593c8
- (_Bool)addRegisteredCNP:(id)arg1 order:(unsigned int *)arg2 allowAllCaptiveNetworkPlugins:(_Bool)arg3 allowedCaptiveNetworkPlugins:(id)arg4 result:(id)arg5 policyIDList:(id)arg6;	// IMP=0x0000000100058ed8
- (_Bool)addServiceExceptionsWithOrder:(unsigned int *)arg1 configuration:(id)arg2 IMSUseIPSec:(_Bool)arg3 dropAllLevel:(long long *)arg4;	// IMP=0x0000000100058a94
- (_Bool)addCellularServicesExceptionPoliciesWithOrder:(unsigned int *)arg1 action:(long long)arg2 useIPSec:(_Bool)arg3 priority:(long long)arg4 primaryPhysicalInterface:(id)arg5 policyIDList:(id)arg6;	// IMP=0x000000010005823c
- (_Bool)addCellularServicesExceptionDataWithOrder:(unsigned int *)arg1 action:(long long)arg2 primaryPhysicalInterface:(id)arg3 policyIDList:(id)arg4;	// IMP=0x0000000100058184
- (_Bool)addCellularServicesExceptionControlWithOrder:(unsigned int *)arg1 IMSUseIPSec:(_Bool)arg2 action:(long long)arg3 isHighPriority:(_Bool)arg4;	// IMP=0x0000000100058100
- (_Bool)addPolicyForProcessNoDNSWithOrder:(unsigned int *)arg1 processEUUIDs:(id)arg2 processUUIDs:(id)arg3 includeRealProcess:(_Bool)arg4 pid:(int)arg5 checkEntitlement:(_Bool)arg6 customEntitlement:(id)arg7 checkUID:(_Bool)arg8 uid:(unsigned int)arg9 policyResult:(id)arg10 policyIDList:(id)arg11;	// IMP=0x0000000100057bd8
- (_Bool)addLocalNetworksExceptionWithOrder:(unsigned int *)arg1 skipOrder:(unsigned int)arg2 priority:(long long)arg3 policyIDList:(id)arg4;	// IMP=0x0000000100057734
- (_Bool)addApplicationExceptionWithOrder:(unsigned int *)arg1 applicationExceptions:(id)arg2 delegateInterfaceName:(id)arg3 priority:(long long)arg4 policyIDList:(id)arg5;	// IMP=0x0000000100057050
- (_Bool)addAirPrintExceptionWithOrder:(unsigned int *)arg1 action:(long long)arg2;	// IMP=0x0000000100056e44
- (_Bool)addSharingdExceptionWithOrder:(unsigned int *)arg1 action:(long long)arg2;	// IMP=0x0000000100056bc8
- (_Bool)addAPSDExceptionWithOrder:(unsigned int *)arg1 action:(long long)arg2;	// IMP=0x0000000100056a10
- (_Bool)addVoiceMailExceptionWithOrder:(unsigned int *)arg1 action:(long long)arg2;	// IMP=0x0000000100056858
- (_Bool)addConfigdWithOrder:(unsigned int *)arg1 needConfigdPassAll:(_Bool)arg2 policyIDList:(id)arg3;	// IMP=0x000000010005640c
- (_Bool)addmDNSResponderWithOrder:(unsigned int *)arg1;	// IMP=0x00000001000560d4
- (_Bool)addSessionManagerWithOrder:(unsigned int *)arg1;	// IMP=0x0000000100055f84
- (_Bool)addBonjourWithOrder:(unsigned int *)arg1;	// IMP=0x0000000100055b54
- (_Bool)addPortPoliciesWithOrder:(unsigned int *)arg1 appUUID:(id)arg2 port:(id)arg3 local:(_Bool)arg4;	// IMP=0x00000001000556c0
- (_Bool)addPolicyForProcessDelegatedWithOrder:(unsigned int *)arg1 processEUUIDs:(id)arg2 processUUIDs:(id)arg3 pid:(int)arg4 checkEntitlement:(_Bool)arg5 customEntitlement:(id)arg6 checkUID:(_Bool)arg7 uid:(unsigned int)arg8 policyResult:(id)arg9 policyIDList:(id)arg10;	// IMP=0x00000001000553e4
- (_Bool)addPolicyICMPv6WithOrder:(unsigned int *)arg1 policyResult:(id)arg2 policyIDList:(id)arg3;	// IMP=0x000000010005510c
- (_Bool)addPolicyForDNSWithOrder:(unsigned int *)arg1 processEUUIDs:(id)arg2 scopedInterface:(id)arg3 checkEntitlement:(_Bool)arg4 customEntitlement:(id)arg5 checkUID:(_Bool)arg6 uid:(unsigned int)arg7 policyResult:(id)arg8 policyIDList:(id)arg9;	// IMP=0x0000000100054b40
- (_Bool)addPolicyForProcessWithOrder:(unsigned int *)arg1 incrementOrder:(_Bool)arg2 processEUUIDs:(id)arg3 processUUIDs:(id)arg4 pid:(int)arg5 checkEntitlement:(_Bool)arg6 customEntitlement:(id)arg7 checkUID:(_Bool)arg8 uid:(unsigned int)arg9 scopedInterface:(id)arg10 signingIdentifier:(id)arg11 protocol:(unsigned short)arg12 matchDNS:(_Bool)arg13 skipUnscoped:(_Bool)arg14 policyResult:(id)arg15 policyIDList:(id)arg16;	// IMP=0x0000000100054480
- (_Bool)addOnePolicyWithOrder:(unsigned int *)arg1 processEUUIDs:(id)arg2 processUUID:(id)arg3 pid:(int)arg4 checkEntitlement:(_Bool)arg5 customEntitlement:(id)arg6 checkUID:(_Bool)arg7 uid:(unsigned int)arg8 policyResult:(id)arg9 address:(id)arg10 port:(id)arg11 localAddress:(_Bool)arg12 policyIDList:(id)arg13;	// IMP=0x0000000100053f58
- (_Bool)addOnePolicyWithOrder:(unsigned int *)arg1 processEUUIDs:(id)arg2 processUUID:(id)arg3 pid:(int)arg4 checkEntitlement:(_Bool)arg5 customEntitlement:(id)arg6 checkUID:(_Bool)arg7 uid:(unsigned int)arg8 dnsUUIDs:(id)arg9 scopedInterface:(id)arg10 signingIdentifier:(id)arg11 protocol:(unsigned short)arg12 policyResult:(id)arg13 policyIDList:(id)arg14;	// IMP=0x000000010005359c
@end

