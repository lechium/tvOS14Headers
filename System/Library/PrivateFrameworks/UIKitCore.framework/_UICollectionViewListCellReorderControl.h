/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol _UICollectionViewListCellReorderControlDelegate, UITableConstants;
@class UIImageView, UILongPressGestureRecognizer, UIColor, NSString;

@interface _UICollectionViewListCellReorderControl : UIControl <UIGestureRecognizerDelegate> {

	UIImageView* _imageView;
	UILongPressGestureRecognizer* _reorderRecognizer;
	BOOL _tracking;
	BOOL _needsImageViewUpdate;
	id<_UICollectionViewListCellReorderControlDelegate> _delegate;
	id<UITableConstants> _constants;
	UIColor* _accessoryTintColor;

}

@property (assign,nonatomic,__weak) id<_UICollectionViewListCellReorderControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<UITableConstants> constants;                                                   //@synthesize constants=_constants - In the implementation block
@property (nonatomic,retain) UIColor * accessoryTintColor;                                                     //@synthesize accessoryTintColor=_accessoryTintColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_UICollectionViewListCellReorderControlDelegate>)delegate;
-(void)setDelegate:(id<_UICollectionViewListCellReorderControlDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_updateImageViewIfNeeded;
-(id)initWithDelegate:(id)arg1 constants:(id)arg2 ;
-(void)setConstants:(id<UITableConstants>)arg1 ;
-(void)setAccessoryTintColor:(UIColor *)arg1 ;
-(void)pan:(id)arg1 ;
-(void)_setNeedsImageViewUpdate;
-(void)beginReordering;
-(void)gestureMovedToPoint:(CGPoint)arg1 ;
-(void)endReordering:(BOOL)arg1 ;
-(id<UITableConstants>)constants;
-(UIColor *)accessoryTintColor;
@end
