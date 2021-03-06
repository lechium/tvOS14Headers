/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PSYSyncSession;

@interface PSYSyncSessionUpdate : NSObject {

	PSYSyncSession* _originalSession;
	PSYSyncSession* _updatedSession;

}

@property (nonatomic,readonly) PSYSyncSession * originalSession;              //@synthesize originalSession=_originalSession - In the implementation block
@property (nonatomic,readonly) PSYSyncSession * updatedSession;               //@synthesize updatedSession=_updatedSession - In the implementation block
-(void)enumerateChangedActivitiesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithOriginalSession:(id)arg1 updatedSession:(id)arg2 ;
-(void)enumerateNewlyRunningActivitiesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateNewlyCompletedActivitiesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)didUpdateCompleteSyncSession;
-(PSYSyncSession *)originalSession;
-(PSYSyncSession *)updatedSession;
@end

