/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@protocol GEOTransitConnectionInfo, _MKTransitConnectionCellDelegate;
@class _MKUILabel, MKTransitInfoLabelView, UIButton, NSLayoutConstraint;

@interface _MKTransitConnectionCell : MKCustomSeparatorTableViewCell {

	_MKUILabel* _nameLabel;
	MKTransitInfoLabelView* _transitInfoLabel;
	UIButton* _button;
	NSLayoutConstraint* _nameLabelToTopConstraint;
	NSLayoutConstraint* _transitInfoToNameConstraint;
	id<GEOTransitConnectionInfo> _connectionInfo;
	id<_MKTransitConnectionCellDelegate> _delegate;

}

@property (nonatomic,retain) id<GEOTransitConnectionInfo> connectionInfo;                       //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (assign,nonatomic,__weak) id<_MKTransitConnectionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<_MKTransitConnectionCellDelegate>)delegate;
-(void)setDelegate:(id<_MKTransitConnectionCellDelegate>)arg1 ;
-(id<GEOTransitConnectionInfo>)connectionInfo;
-(void)setConnectionInfo:(id<GEOTransitConnectionInfo>)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)_buttonSelected;
@end
