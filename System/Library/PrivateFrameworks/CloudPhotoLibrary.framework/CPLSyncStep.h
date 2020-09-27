/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPLEngineSyncTaskDelegate.h>

@class CPLEngineSyncManager, CPLSyncSession, CPLEngineLibrary, CPLEngineStore, NSString, NSError;

@interface CPLSyncStep : NSObject <CPLEngineSyncTaskDelegate> {

	CPLEngineSyncManager* _syncManager;
	CPLSyncSession* _syncSession;

}

@property (nonatomic,readonly) CPLEngineLibrary * engineLibrary; 
@property (nonatomic,readonly) CPLEngineStore * engineStore; 
@property (nonatomic,readonly) CPLEngineSyncManager * syncManager;              //@synthesize syncManager=_syncManager - In the implementation block
@property (nonatomic,readonly) CPLSyncSession * syncSession;                    //@synthesize syncSession=_syncSession - In the implementation block
@property (nonatomic,readonly) NSString * descriptionForTasks; 
@property (nonatomic,readonly) NSError * lastError; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)lastError;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(CPLEngineLibrary *)engineLibrary;
-(void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3 ;
-(CPLEngineSyncManager *)syncManager;
-(id)initWithSyncManager:(id)arg1 syncSession:(id)arg2 ;
-(CPLEngineStore *)engineStore;
-(NSString *)descriptionForTasks;
-(float)progressForTask:(id)arg1 progress:(float)arg2 ;
-(BOOL)launchNecessaryTasks;
-(void)cancelAllTasks:(BOOL)arg1 ;
-(BOOL)didFinishTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(void)moveTasksToBackground;
-(BOOL)prepareAndLaunchSyncTask:(id*)arg1 ;
-(void)setErrorForSyncSession:(id)arg1 ;
-(CPLSyncSession *)syncSession;
@end
