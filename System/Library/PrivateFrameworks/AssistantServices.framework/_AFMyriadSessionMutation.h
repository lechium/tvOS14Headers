/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFMyriadSessionMutating.h>

@class AFMyriadSession, NSUUID, NSData, NSDictionary, NSString;

@interface _AFMyriadSessionMutation : NSObject <AFMyriadSessionMutating> {

	AFMyriadSession* _baseModel;
	unsigned long long _generation;
	NSUUID* _sessionId;
	NSUUID* _currentElectionAdvertisementId;
	NSData* _currentElectionAdvertisementData;
	NSDictionary* _electionAdvertisementDataByIds;
	struct {
		unsigned isDirty : 1;
		unsigned hasGeneration : 1;
		unsigned hasSessionId : 1;
		unsigned hasCurrentElectionAdvertisementId : 1;
		unsigned hasCurrentElectionAdvertisementData : 1;
		unsigned hasElectionAdvertisementDataByIds : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setSessionId:(id)arg1 ;
-(id)generate;
-(void)setGeneration:(unsigned long long)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setCurrentElectionAdvertisementId:(id)arg1 ;
-(void)setCurrentElectionAdvertisementData:(id)arg1 ;
-(void)setElectionAdvertisementDataByIds:(id)arg1 ;
@end
