/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UIImageView, UILabel, NSString, UIImage;

@interface PKThumbnailCollectionViewCell : PKDashboardCollectionViewCell {

	UIImageView* _imageView;
	UILabel* _labelTitle;
	NSString* _title;
	UIImage* _image;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * title;                   //@synthesize title=_title - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setupImageView:(id)arg1 ;
-(void)_resetFonts;
@end

