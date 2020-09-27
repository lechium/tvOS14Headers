/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UILabel, UIActivityIndicatorView, NSLayoutConstraint, AVObservationController, AVInfoPanelMediaOption, UIImage, NSString;

@interface AVInfoPanelAudioCollectionViewCell : UICollectionViewCell {

	UIImageView* _checkmarkImageView;
	UIImageView* _iconImageView;
	UIImageView* _symbolImageView;
	UILabel* _titleLabel;
	UIActivityIndicatorView* _pendingSelectView;
	NSLayoutConstraint* _iconSpaceConstraint;
	NSLayoutConstraint* _cellWidthConstraint;
	AVObservationController* _kvoController;
	BOOL _canBeSelected;
	BOOL _displayAsSelected;
	BOOL _pendingSelect;
	AVInfoPanelMediaOption* _mediaOption;
	UIImage* _deviceImage;

}

@property (nonatomic,retain) UIImage * deviceImage;                                  //@synthesize deviceImage=_deviceImage - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) AVInfoPanelMediaOption * mediaOption;                   //@synthesize mediaOption=_mediaOption - In the implementation block
@property (assign,nonatomic) BOOL canBeSelected;                                     //@synthesize canBeSelected=_canBeSelected - In the implementation block
@property (assign,nonatomic) BOOL displayAsSelected;                                 //@synthesize displayAsSelected=_displayAsSelected - In the implementation block
@property (assign,getter=isPendingSelect,nonatomic) BOOL pendingSelect;              //@synthesize pendingSelect=_pendingSelect - In the implementation block
+(double)estimatedWidthForAdornmentsForMediaOption:(id)arg1 ;
-(void)dealloc;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_updateAppearance;
-(UIImage *)deviceImage;
-(long long)_textAlignmentForUserInterfaceLayout;
-(void)setDeviceImage:(UIImage *)arg1 ;
-(void)setMediaOption:(AVInfoPanelMediaOption *)arg1 ;
-(void)setCanBeSelected:(BOOL)arg1 ;
-(void)setPendingSelect:(BOOL)arg1 ;
-(void)setDisplayAsSelected:(BOOL)arg1 ;
-(void)constrainWidthTo:(double)arg1 ;
-(BOOL)_haveImage;
-(void)_updateIconConstraint;
-(id)_checkmarkImageIfSelected;
-(AVInfoPanelMediaOption *)mediaOption;
-(BOOL)canBeSelected;
-(BOOL)displayAsSelected;
-(BOOL)isPendingSelect;
@end
