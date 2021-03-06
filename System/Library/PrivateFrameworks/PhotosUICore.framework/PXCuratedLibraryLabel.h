/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:12 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UILabel.h>
#import <libobjc.A.dylib/PXGReusableView.h>

@class PXCuratedLibraryLabelConfiguration;

@interface PXCuratedLibraryLabel : UILabel <PXGReusableView> {

	PXCuratedLibraryLabelConfiguration* _userData;
	CGRect _clippingRect;

}

@property (nonatomic,copy) PXCuratedLibraryLabelConfiguration * userData;              //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;                                      //@synthesize clippingRect=_clippingRect - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 withConfiguration:(id)arg2 ;
-(void)prepareForReuse;
-(void)setUserData:(PXCuratedLibraryLabelConfiguration *)arg1 ;
-(PXCuratedLibraryLabelConfiguration *)userData;
-(CGRect)clippingRect;
-(void)setClippingRect:(CGRect)arg1 ;
-(void)becomeReusable;
@end

