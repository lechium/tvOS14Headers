/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class NSObject, NSArray;

@interface VUIMediaEntityGroup : NSObject <NSCopying> {

	NSObject*<NSCopying> _identifier;
	NSArray* _mediaEntities;
	NSArray* _sortIndexes;

}

@property (nonatomic,copy) NSObject*<NSCopying> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * mediaEntities;                      //@synthesize mediaEntities=_mediaEntities - In the implementation block
@property (nonatomic,copy) NSArray * sortIndexes;                        //@synthesize sortIndexes=_sortIndexes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSObject*<NSCopying>)identifier;
-(void)setIdentifier:(NSObject*<NSCopying>)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setMediaEntities:(NSArray *)arg1 ;
-(NSArray *)mediaEntities;
-(NSArray *)sortIndexes;
-(void)setSortIndexes:(NSArray *)arg1 ;
@end

