/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNLabeledCell.h>
#import <libobjc.A.dylib/CNActionViewProtocol.h>

@protocol CNPropertyCellDelegate;
@class UILabel, CNActionView;

@interface CNFaceTimeCell : CNLabeledCell <CNActionViewProtocol> {

	BOOL _isFaceTimeAudioAvailable;
	id<CNPropertyCellDelegate> _delegate;
	UILabel* _faceTimeLabel;
	CNActionView* _actionView1;
	CNActionView* _actionView2;

}

@property (nonatomic,readonly) UILabel * faceTimeLabel;                               //@synthesize faceTimeLabel=_faceTimeLabel - In the implementation block
@property (assign,nonatomic) BOOL isFaceTimeAudioAvailable;                           //@synthesize isFaceTimeAudioAvailable=_isFaceTimeAudioAvailable - In the implementation block
@property (nonatomic,readonly) CNActionView * actionView1;                            //@synthesize actionView1=_actionView1 - In the implementation block
@property (nonatomic,readonly) CNActionView * actionView2;                            //@synthesize actionView2=_actionView2 - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CNPropertyCellDelegate>)delegate;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)isFaceTimeAudioAvailable;
-(id)variableConstraints;
-(id)labelView;
-(double)minCellHeight;
-(id)constantConstraints;
-(id)rightMostView;
-(void)performDefaultAction;
-(void)tintColorDidChange;
-(void)setActionsDataSource:(id)arg1 ;
-(void)setIsFaceTimeAudioAvailable:(BOOL)arg1 ;
-(CNActionView *)actionView1;
-(CNActionView *)actionView2;
-(UILabel *)faceTimeLabel;
-(void)didPressActionView:(id)arg1 longPress:(BOOL)arg2 ;
@end
