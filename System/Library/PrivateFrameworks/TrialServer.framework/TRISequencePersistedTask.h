/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIAnyPersistedTask;

@interface TRISequencePersistedTask : TRIPBMessage

@property (nonatomic,retain) TRIAnyPersistedTask * task; 
@property (assign,nonatomic) BOOL hasTask; 
@property (nonatomic,retain) TRIAnyPersistedTask * dependentTask; 
@property (assign,nonatomic) BOOL hasDependentTask; 
+(id)descriptor;
@end

