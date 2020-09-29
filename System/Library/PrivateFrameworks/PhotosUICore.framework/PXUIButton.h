/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:09 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIButton.h>

@class PXUIButtonConfiguration;

@interface PXUIButton : UIButton {

	PXUIButtonConfiguration* _configuration;

}

@property (nonatomic,copy) PXUIButtonConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(PXUIButtonConfiguration *)configuration;
-(void)setConfiguration:(PXUIButtonConfiguration *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

