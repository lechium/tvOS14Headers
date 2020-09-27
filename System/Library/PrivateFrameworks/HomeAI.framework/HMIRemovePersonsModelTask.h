/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:55 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HMIHomeTask.h>

@class NSUUID;

@interface HMIRemovePersonsModelTask : HMIHomeTask {

	NSUUID* _sourceUUID;

}

@property (readonly) NSUUID * sourceUUID;              //@synthesize sourceUUID=_sourceUUID - In the implementation block
+(id)logCategory;
-(void)main;
-(NSUUID *)sourceUUID;
-(id)logIdentifier;
-(id)initWithTaskID:(int)arg1 homeUUID:(id)arg2 sourceUUID:(id)arg3 ;
@end
