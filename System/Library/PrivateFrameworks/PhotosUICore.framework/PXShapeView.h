/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:55 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UIView.h>

@class UIBezierPath, UIColor;

@interface PXShapeView : UIView {

	UIBezierPath* _path;
	UIColor* _fillColor;

}

@property (nonatomic,copy) UIBezierPath * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
+(Class)layerClass;
-(UIBezierPath *)path;
-(void)setPath:(UIBezierPath *)arg1 ;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(id)shapeLayer;
@end

