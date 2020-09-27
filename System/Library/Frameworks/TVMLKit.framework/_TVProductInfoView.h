/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVFocusRedirectView.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class NSArray, UIView, NSString;

@interface _TVProductInfoView : _TVFocusRedirectView <TVAppTemplateImpressionable> {

	NSArray* _viewsAboveInfoSection;
	NSArray* _infoSectionViews;
	NSArray* _viewsBelowInfoSection;
	UIView* _defaultFocusView;

}

@property (nonatomic,retain) NSArray * viewsAboveInfoSection;              //@synthesize viewsAboveInfoSection=_viewsAboveInfoSection - In the implementation block
@property (nonatomic,retain) NSArray * infoSectionViews;                   //@synthesize infoSectionViews=_infoSectionViews - In the implementation block
@property (nonatomic,retain) NSArray * viewsBelowInfoSection;              //@synthesize viewsBelowInfoSection=_viewsBelowInfoSection - In the implementation block
@property (nonatomic,retain) UIView * defaultFocusView;                    //@synthesize defaultFocusView=_defaultFocusView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)productInfoViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(id)preferredFocusEnvironments;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)setViewsAboveInfoSection:(NSArray *)arg1 ;
-(void)setInfoSectionViews:(NSArray *)arg1 ;
-(void)setViewsBelowInfoSection:(NSArray *)arg1 ;
-(void)setDefaultFocusView:(UIView *)arg1 ;
-(UIView *)defaultFocusView;
-(NSArray *)viewsAboveInfoSection;
-(NSArray *)infoSectionViews;
-(NSArray *)viewsBelowInfoSection;
@end
