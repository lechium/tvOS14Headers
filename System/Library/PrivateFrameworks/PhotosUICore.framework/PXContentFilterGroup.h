/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:07 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface PXContentFilterGroup : NSObject <NSCopying> {

	NSString* _name;
	NSArray* _filterIdentifiers;

}

@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * filterIdentifiers;              //@synthesize filterIdentifiers=_filterIdentifiers - In the implementation block
+(id)groupWithName:(id)arg1 filterIdentifiers:(id)arg2 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)initWithName:(id)arg1 filterIdentifiers:(id)arg2 ;
-(NSArray *)filterIdentifiers;
@end

