/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol HMDCoreDuetLogEvent <NSObject>
@property (readonly) unsigned long long duetEventType; 
@property (copy,readonly) NSArray * eventDataToLog; 
@required
-(unsigned long long)duetEventType;
-(NSArray *)eventDataToLog;

@end
