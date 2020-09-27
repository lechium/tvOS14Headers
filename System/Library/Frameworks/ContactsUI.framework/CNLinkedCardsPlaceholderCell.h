/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyPlaceholderCell.h>

@protocol CNPropertyCellDelegate;
@interface CNLinkedCardsPlaceholderCell : CNPropertyPlaceholderCell {

	id<CNPropertyCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CNPropertyCellDelegate>)delegate;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(void)performDefaultAction;
@end
