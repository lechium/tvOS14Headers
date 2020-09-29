/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:53 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol NSObjectNSCopying;
@interface PXDataSection : NSObject <NSFastEnumeration> {

	id<NSObject><NSCopying> _outlineObject;
	unsigned long long _identifier;
	id _content;

}

@property (nonatomic,readonly) id<NSObject><NSCopying> outlineObject;              //@synthesize outlineObject=_outlineObject - In the implementation block
@property (nonatomic,readonly) unsigned long long identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) BOOL containsAnyObjects; 
@property (nonatomic,readonly) id content;                                         //@synthesize content=_content - In the implementation block
-(id)description;
-(id)init;
-(long long)count;
-(id)objectAtIndex:(long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PX43*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(unsigned long long)identifier;
-(id)content;
-(id)initWithOutlineObject:(id)arg1 ;
-(BOOL)containsAnyObjects;
-(id<NSObject><NSCopying>)outlineObject;
@end

