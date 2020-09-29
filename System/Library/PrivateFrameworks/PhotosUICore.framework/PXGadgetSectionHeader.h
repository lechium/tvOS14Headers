/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:05 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableGadgetSectionHeader.h>

@class NSString, PXGadgetSpec, UIFont, UIImage;

@interface PXGadgetSectionHeader : PXObservable <PXMutableGadgetSectionHeader> {

	BOOL _isFirstSection;
	BOOL _shouldShowDividerOnFirstSection;
	unsigned long long _headerStyle;
	NSString* _headerTitle;
	NSString* _customButtonTitle;
	unsigned long long _buttonType;
	PXGadgetSpec* _gadgetSpec;
	/*^block*/id _accessoryButtonPressed;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,copy) id accessoryButtonPressed;                           //@synthesize accessoryButtonPressed=_accessoryButtonPressed - In the implementation block
@property (nonatomic,readonly) NSString * headerTitle;                          //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,readonly) UIFont * headerFont; 
@property (nonatomic,readonly) BOOL shouldShowAccessoryButton; 
@property (nonatomic,readonly) NSString * buttonTitle; 
@property (nonatomic,readonly) UIFont * buttonFont; 
@property (nonatomic,readonly) UIImage * buttonImage; 
@property (nonatomic,readonly) BOOL shouldShowDivider; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets;                         //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,readonly) double headerHeight; 
@property (nonatomic,readonly) double titleHeight; 
@property (nonatomic,readonly) double titleTopSpacing; 
@property (nonatomic,readonly) double titleBottomSpacing; 
@property (assign,nonatomic) unsigned long long headerStyle;                    //@synthesize headerStyle=_headerStyle - In the implementation block
@property (assign,nonatomic) unsigned long long buttonType;                     //@synthesize buttonType=_buttonType - In the implementation block
@property (nonatomic,copy) NSString * customButtonTitle;                        //@synthesize customButtonTitle=_customButtonTitle - In the implementation block
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                         //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic) BOOL isFirstSection;                               //@synthesize isFirstSection=_isFirstSection - In the implementation block
@property (assign,nonatomic) BOOL shouldShowDividerOnFirstSection;              //@synthesize shouldShowDividerOnFirstSection=_shouldShowDividerOnFirstSection - In the implementation block
+(id)titleFontForHeaderStyle:(unsigned long long)arg1 ;
+(id)buttonFontForButtonType:(unsigned long long)arg1 ;
+(id)buttonImageForButtonType:(unsigned long long)arg1 ;
+(id)_buttonImageNameForButtonType:(unsigned long long)arg1 ;
-(unsigned long long)buttonType;
-(UIEdgeInsets)edgeInsets;
-(NSString *)buttonTitle;
-(void)setButtonType:(unsigned long long)arg1 ;
-(double)titleHeight;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(double)headerHeight;
-(UIImage *)buttonImage;
-(UIFont *)buttonFont;
-(id)initWithConfigurationBlock:(/*^block*/id)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(unsigned long long)headerStyle;
-(PXGadgetSpec *)gadgetSpec;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(void)setHeaderStyle:(unsigned long long)arg1 ;
-(NSString *)customButtonTitle;
-(void)setCustomButtonTitle:(NSString *)arg1 ;
-(id)accessoryButtonPressed;
-(void)setAccessoryButtonPressed:(id)arg1 ;
-(BOOL)isFirstSection;
-(void)setIsFirstSection:(BOOL)arg1 ;
-(BOOL)shouldShowDividerOnFirstSection;
-(void)setShouldShowDividerOnFirstSection:(BOOL)arg1 ;
-(id)initWithGadget:(id)arg1 ;
-(UIFont *)headerFont;
-(BOOL)shouldShowAccessoryButton;
-(BOOL)shouldShowDivider;
-(double)titleTopSpacing;
-(double)titleBottomSpacing;
-(void)performChangesWithGadget:(id)arg1 additionalChanges:(/*^block*/id)arg2 ;
-(void)_configureWithGadget:(id)arg1 ;
@end

