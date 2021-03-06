/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Assistant/Plugins/CorrectionsProfilesSync.assistantBundle/CorrectionsProfilesSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CorrectionsProfilesPersistedState;

@interface CorrectionsProfilesLastState : NSObject {

	CorrectionsProfilesPersistedState* _persistedState;
	unsigned long long _count;

}

@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(id)description;
-(unsigned long long)count;
-(id)_path;
-(id)digest;
-(BOOL)loadLastState;
-(id)profileDataForKey:(id)arg1 ;
-(id)correctionKeys;
-(void)saveNewState:(id)arg1 ;
@end

