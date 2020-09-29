/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:12 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class UIImageSymbolConfiguration, UIColor, CAFilter, UIFont, UIBlurEffect;


@protocol PXUIBadgeTheme <NSObject>
@property (nonatomic,readonly) UIImageSymbolConfiguration * imageConfiguration; 
@property (nonatomic,readonly) double imageAlpha; 
@property (nonatomic,readonly) UIColor * imageTintColor; 
@property (nonatomic,readonly) CAFilter * imageCompositingFilter; 
@property (nonatomic,readonly) UIFont * labelFont; 
@property (nonatomic,readonly) double labelAlpha; 
@property (nonatomic,readonly) UIColor * labelTextColor; 
@property (nonatomic,readonly) CAFilter * labelCompositingFilter; 
@property (nonatomic,readonly) Class backgroundViewClass; 
@property (nonatomic,readonly) double backgroundCornerRadius; 
@property (nonatomic,readonly) double backgroundBorderWidth; 
@property (nonatomic,readonly) double backgroundAlpha; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * backgroundBorderColor; 
@property (nonatomic,readonly) UIBlurEffect * backgroundBlurEffect; 
@required
-(UIColor *)backgroundColor;
-(UIColor *)labelTextColor;
-(UIColor *)imageTintColor;
-(UIImageSymbolConfiguration *)imageConfiguration;
-(double)imageAlpha;
-(CAFilter *)imageCompositingFilter;
-(UIFont *)labelFont;
-(double)labelAlpha;
-(CAFilter *)labelCompositingFilter;
-(Class)backgroundViewClass;
-(double)backgroundCornerRadius;
-(double)backgroundBorderWidth;
-(double)backgroundAlpha;
-(UIColor *)backgroundBorderColor;
-(UIBlurEffect *)backgroundBlurEffect;

@end

