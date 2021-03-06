/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class PKFamilyMember, UIImage, PKFamilyMemberRowModel;

@interface PKFamilyMemberTableViewCell : UITableViewCell {

	PKFamilyMember* _familyMember;
	UIImage* _familyMemberImage;
	unsigned long long _state;
	PKFamilyMemberRowModel* _rowModel;

}

@property (nonatomic,retain) PKFamilyMemberRowModel * rowModel;              //@synthesize rowModel=_rowModel - In the implementation block
-(void)setState:(unsigned long long)arg1 ;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)setRowModel:(PKFamilyMemberRowModel *)arg1 ;
-(void)setFamilyMemberImage:(id)arg1 ;
-(void)setFamilyMember:(id)arg1 ;
-(PKFamilyMemberRowModel *)rowModel;
@end

