/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBinding.h>

@class NSString;

@interface OKActionBindingKeyPressed : OKActionBinding {

	NSString* _keyPressed;
	BOOL _isKeyUp;

}

@property (nonatomic,retain) NSString * keyPressed;              //@synthesize keyPressed=_keyPressed - In the implementation block
@property (assign,nonatomic) BOOL isKeyUp;                       //@synthesize isKeyUp=_isKeyUp - In the implementation block
+(id)supportedSettings;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(void)setKeyPressed:(NSString *)arg1 ;
-(void)setIsKeyUp:(BOOL)arg1 ;
-(NSString *)keyPressed;
-(BOOL)isKeyUp;
-(void)setSettingKeyPressed:(id)arg1 ;
-(void)setSettingIsKeyUp:(BOOL)arg1 ;
@end

