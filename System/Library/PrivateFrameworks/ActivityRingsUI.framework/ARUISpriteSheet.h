/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, ARUISpriteTexture;

@interface ARUISpriteSheet : NSObject <NSCopying> {

	NSArray* _sprites;
	ARUISpriteTexture* _texture;

}

@property (nonatomic,readonly) ARUISpriteTexture * texture;              //@synthesize texture=_texture - In the implementation block
@property (nonatomic,readonly) NSArray * sprites;                        //@synthesize sprites=_sprites - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(ARUISpriteTexture *)texture;
-(NSArray *)sprites;
-(id)initWithSpriteSheet:(id)arg1 ;
-(id)initWithTexture:(id)arg1 sprites:(id)arg2 ;
@end
