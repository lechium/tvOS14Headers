/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface ICURLBagProvider : NSObject {

	NSMutableDictionary* _cache;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _persistenceQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSMutableDictionary* _pendingOperationsForCacheKey;

}
+(id)sharedBagProvider;
-(id)init;
-(void)dealloc;
-(id)_cacheFilePath;
-(void)invalidateCache;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg1 ;
-(void)getBagForRequestContext:(id)arg1 forceRefetch:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)getBagForRequestContext:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_loadCache;
-(void)_fetchBagForRequestContext:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_getCacheKeyForRequestContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_saveCache;
@end

