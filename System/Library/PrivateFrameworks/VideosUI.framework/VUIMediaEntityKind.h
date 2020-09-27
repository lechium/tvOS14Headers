/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary;

@interface VUIMediaEntityKind : NSObject <NSCopying> {

	NSString* _mediaEntityClassName;
	NSArray* _propertyDescriptors;
	NSDictionary* _propertyDescriptorsByName;

}

@property (nonatomic,copy) NSDictionary * propertyDescriptorsByName;              //@synthesize propertyDescriptorsByName=_propertyDescriptorsByName - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaEntityClassName;              //@synthesize mediaEntityClassName=_mediaEntityClassName - In the implementation block
@property (nonatomic,copy) NSArray * propertyDescriptors;                         //@synthesize propertyDescriptors=_propertyDescriptors - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)propertyDescriptorForName:(id)arg1 ;
-(NSArray *)propertyDescriptors;
-(id)sortingPropertyDescriptorForName:(id)arg1 ;
-(id)initWithMediaEntityClassName:(id)arg1 ;
-(void)setPropertyDescriptors:(NSArray *)arg1 ;
-(void)setPropertyDescriptorsByName:(NSDictionary *)arg1 ;
-(NSDictionary *)propertyDescriptorsByName;
-(NSString *)mediaEntityClassName;
@end
