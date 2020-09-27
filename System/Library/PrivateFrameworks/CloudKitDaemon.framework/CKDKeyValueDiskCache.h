/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PQLConnection, NSString, CKDClientContext;

@interface CKDKeyValueDiskCache : NSObject {

	double _expirationTimeout;
	PQLConnection* _db;
	NSString* _identifier;
	CKDClientContext* _context;

}

@property (nonatomic,retain) PQLConnection * db;                             //@synthesize db=_db - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) CKDClientContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) double expirationTimeout;                       //@synthesize expirationTimeout=_expirationTimeout - In the implementation block
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(CKDClientContext *)context;
-(void)setContext:(CKDClientContext *)arg1 ;
-(PQLConnection *)db;
-(void)setDb:(PQLConnection *)arg1 ;
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(id)cachedValueForKey:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 context:(id)arg2 ;
-(double)expirationTimeout;
-(void)setExpirationTimeout:(double)arg1 ;
-(BOOL)setupCacheWithError:(id*)arg1 ;
-(id)dbPath;
-(void)_garbageCollectExpiredEntries;
-(void)removeCachedValueForKey:(id)arg1 ;
-(void)deleteCachedValuesBecauseOfLowDisk;
@end
