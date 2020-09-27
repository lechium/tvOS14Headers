/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSTimer, NSObject, NSMutableDictionary, NSMutableSet;

@interface WFWeatherStoreCache : NSObject {

	NSURL* _URL;
	NSTimer* _cacheStoreTimer;
	NSObject*<OS_dispatch_queue> _cacheConcurrentQueue;
	NSMutableDictionary* _cacheForDomain;
	NSMutableSet* _dirtyCacheDomains;

}

@property (nonatomic,retain) NSTimer * cacheStoreTimer;                            //@synthesize cacheStoreTimer=_cacheStoreTimer - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> cacheConcurrentQueue;              //@synthesize cacheConcurrentQueue=_cacheConcurrentQueue - In the implementation block
@property (retain) NSMutableDictionary * cacheForDomain;                           //@synthesize cacheForDomain=_cacheForDomain - In the implementation block
@property (retain) NSMutableSet * dirtyCacheDomains;                               //@synthesize dirtyCacheDomains=_dirtyCacheDomains - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
+(BOOL)removeObjectsFromCache:(id)arg1 passingTest:(/*^block*/id)arg2 ;
+(id)wf_masterDomains;
+(id)createCacheIfNecessary:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)_startCacheStoreTimer;
-(void)_stopCacheStoreTimer;
-(void)writeCacheDictionaryToFile;
-(void)setCacheStoreTimer:(NSTimer *)arg1 ;
-(NSTimer *)cacheStoreTimer;
-(NSObject*<OS_dispatch_queue>)cacheConcurrentQueue;
-(void)_concurrentQueue_barrier_deleteOldDataFromCache:(id)arg1 allowedStaleness:(unsigned long long)arg2 ;
-(void)_concurrentQueue_barrier_writeCacheDictionaryToFile;
-(NSMutableDictionary *)cacheForDomain;
-(void)_concurrentQueue_barrier_deleteOldDataFromCache;
-(NSMutableSet *)dirtyCacheDomains;
-(id)cachedObjectWithinDomain:(id)arg1 forKey:(id)arg2 staleness:(unsigned long long)arg3 ;
-(void)_ensureDomainIsLoaded:(id)arg1 ;
-(void)_concurrentQueue_barrier_removeObjectWithinDomain:(id)arg1 forKey:(id)arg2 ;
-(void)cache:(id)arg1 withinDomain:(id)arg2 date:(id)arg3 forKey:(id)arg4 expiration:(id)arg5 synchronous:(BOOL)arg6 ;
-(void)_concurrentQueue_barrier_shrinkDomain:(id)arg1 ;
-(BOOL)_concurrentQueue_barrier_loadDomain:(id)arg1 ;
-(id)_loadedCacheDomains;
-(BOOL)_loadDomain:(id)arg1 ;
-(void)deleteOldDataFromCache:(id)arg1 allowedStaleness:(unsigned long long)arg2 ;
-(id)cachedObjectWithinDomain:(id)arg1 forKey:(id)arg2 ;
-(void)cache:(id)arg1 withinDomain:(id)arg2 forKey:(id)arg3 ;
-(void)cache:(id)arg1 withinDomain:(id)arg2 forKey:(id)arg3 expiration:(id)arg4 ;
-(void)removeObjectWithinDomain:(id)arg1 forKey:(id)arg2 ;
-(void)executeTransaction:(/*^block*/id)arg1 ;
-(void)_shrinkDomain:(id)arg1 ;
-(void)_markDomainDirty:(id)arg1 ;
-(id)_dirtyCacheDomains;
-(void)setCacheConcurrentQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCacheForDomain:(NSMutableDictionary *)arg1 ;
-(void)setDirtyCacheDomains:(NSMutableSet *)arg1 ;
@end
