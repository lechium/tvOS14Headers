/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/TBTile.h>

@class NSDate, NSString, NSSet;

@interface TBTileMO : NSManagedObject <TBTile>

@property (nonatomic,readonly) unsigned long long key; 
@property (nonatomic,copy,readonly) NSDate * created; 
@property (nonatomic,retain) NSString * etag; 
@property (nonatomic,readonly) unsigned long long networkCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDate * created; 
@property (nonatomic,copy) NSString * etag; 
@property (assign,nonatomic) long long key; 
@property (nonatomic,readonly) long long networkCount; 
@property (nonatomic,retain) NSSet * networks; 
+(id)entityName;
+(id)fetchRequest;
+(id)generateNewTileObjectFromMOC:(id)arg1 ;
+(void)removeTilesUsingPredicate:(id)arg1 moc:(id)arg2 ;
+(void)removeAllTilesInMOC:(id)arg1 ;
@end
