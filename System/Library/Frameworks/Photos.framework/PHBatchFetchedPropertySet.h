/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSManagedObjectID;


@protocol PHBatchFetchedPropertySet <NSCopying,NSObject>
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@required
+(id)entityName;
+(id)propertiesToFetch;
+(long long)batchSize;
+(long long)cacheSize;
+(id)fetchType;
+(BOOL)useNoIndexSelf;
+(BOOL)useObjectFetchingContext;
+(id)propertiesToSortBy;
-(NSManagedObjectID *)objectID;
-(id)initWithObjectID:(id)arg1 knownKeysDictionary:(id)arg2 photoLibrary:(id)arg3;

@end

