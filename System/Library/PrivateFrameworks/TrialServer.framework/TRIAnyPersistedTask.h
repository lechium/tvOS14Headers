/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class NSData;

@interface TRIAnyPersistedTask : TRIPBMessage

@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasType; 
@property (nonatomic,copy) NSData * serialized; 
@property (assign,nonatomic) BOOL hasSerialized; 
+(id)descriptor;
@end

