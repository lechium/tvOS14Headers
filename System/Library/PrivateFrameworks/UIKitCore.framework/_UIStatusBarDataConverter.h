/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIStatusBarDataConverter : NSObject
+(id)_cellularEntryWithData:(const SCD_Struct_UI112*)arg1 signalStrengthEnabled:(BOOL)arg2 serviceEnabled:(BOOL)arg3 dataNetworkEnabled:(BOOL)arg4 serviceString:(const char*)arg5 serviceCrossfadeString:(const char*)arg6 serviceBadgeString:(const char*)arg7 serviceContentType:(unsigned)arg8 dataNetworkType:(unsigned)arg9 gsmSignalStrengthRaw:(int)arg10 gsmSignalStrengthBars:(int)arg11 callForwardingType:(int)arg12 lowDataModeActive:(BOOL)arg13 ;
+(id)convertData:(const SCD_Struct_UI112*)arg1 fromReferenceData:(id)arg2 ;
@end
