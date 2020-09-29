/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:19 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/RUIPageAccessory.h>
#import <libobjc.A.dylib/RemoteUITableFooter.h>

@protocol GKRemoteUIAuxiliaryViewDelegate;
@class GKButton, NSDictionary, NSArray, NSString;

@interface GKRemoteUITableFooterView : UIView <RUIPageAccessory, RemoteUITableFooter> {

	BOOL _pinToBottom;
	int _layoutStyle;
	id<GKRemoteUIAuxiliaryViewDelegate> _delegate;
	GKButton* _button;
	NSDictionary* _attributes;
	NSArray* _replaceableConstraints;
	double _buttonBaselineOffset;

}

@property (nonatomic,retain) GKButton * button;                                                //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;                                        //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) BOOL pinToBottom;                                                 //@synthesize pinToBottom=_pinToBottom - In the implementation block
@property (nonatomic,retain) NSArray * replaceableConstraints;                                 //@synthesize replaceableConstraints=_replaceableConstraints - In the implementation block
@property (assign,nonatomic) double buttonBaselineOffset;                                      //@synthesize buttonBaselineOffset=_buttonBaselineOffset - In the implementation block
@property (assign,nonatomic) int layoutStyle;                                                  //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic,__weak) id<GKRemoteUIAuxiliaryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<GKRemoteUIAuxiliaryViewDelegate>)delegate;
-(void)setDelegate:(id<GKRemoteUIAuxiliaryViewDelegate>)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(GKButton *)button;
-(void)setButton:(GKButton *)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(void)setLayoutStyle:(int)arg1 ;
-(int)layoutStyle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(void)objectModelDidChange:(id)arg1 ;
-(void)tableViewDidUpdateContentInset:(id)arg1 ;
-(double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(void)createButtonWithAttributes:(id)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(NSArray *)replaceableConstraints;
-(void)setReplaceableConstraints:(NSArray *)arg1 ;
-(BOOL)pinToBottom;
-(double)buttonBaselineOffset;
-(void)adjustSizeToFillSuperview:(id)arg1 ;
-(void)setPinToBottom:(BOOL)arg1 ;
-(void)setButtonBaselineOffset:(double)arg1 ;
@end

