/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>
#import <libobjc.A.dylib/SSDownloadHandlerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, SSDownloadHandler, NSMapTable, NSMutableArray, NSString;

@interface MPStorePlayWhileDownloadController : NSObject <MPStoreDownloadManagerObserver, SSDownloadHandlerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	SSDownloadHandler* _downloadHandler;
	NSMapTable* _downloadToActiveSessions;
	NSMapTable* _downloadToDownloadTokenPendingCompletionHandlers;
	NSMapTable* _downloadToProcessingDownloadHandlerSessions;
	NSMapTable* _downloadToObservationTransactionCount;
	NSMapTable* _downloadToValidStatePendingCompletionHandlers;
	NSMutableArray* _pausedDownloads;
	NSMutableArray* _prioritizedDownloads;

}

@property (nonatomic,readonly) long long downloadHandlerIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(id)init;
-(void)dealloc;
-(void)downloadHandler:(id)arg1 handleSession:(id)arg2 ;
-(void)downloadHandler:(id)arg1 cancelSession:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2 ;
-(long long)downloadHandlerIdentifier;
-(void)acquirePlayWhileDownloadSessionForDownload:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)beginPrioritizingDownloadSession:(id)arg1 ;
-(void)endPrioritizingDownloadSession:(id)arg1 ;
-(void)releasePlayWhileDownloadSession:(id)arg1 ;
-(void)_beginDownloadObservationForDownload:(id)arg1 ;
-(void)_beginPrioritizingDownload:(id)arg1 ;
-(void)_beginPrioritizingDownloadSession:(id)arg1 ;
-(void)_endDownloadObservationForDownload:(id)arg1 ;
-(void)_endPrioritizingDownload:(id)arg1 ;
-(void)_endPrioritizingDownloadSession:(id)arg1 ;
-(void)_getDownloadPropertiesForStoreDownload:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_getDownloadTokenForStoreDownload:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_handleDownloadPrioritization;
-(BOOL)_isStoreDownloadValidForPlayWhileDownload:(id)arg1 ;
-(void)_postActiveSessionsDidFinishForStoreDownload:(id)arg1 ;
-(void)_suspendUntilValidDownloadStateForStoreDownload:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_updateActiveSessionsForDownload:(id)arg1 ;
-(void)_updateForDownloadStateRefreshWithDownload:(id)arg1 ;
-(void)_updateForDownloadTokenRefreshWithDownload:(id)arg1 ;
@end
