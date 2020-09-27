/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UITableView;

@interface RUITableViewHeaderFooterView : UITableViewHeaderFooterView {

	UITableView* _tableView;

}

@property (__weak) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
-(void)setTableView:(UITableView *)arg1 ;
-(void)layoutSubviews;
-(UITableView *)tableView;
-(UIEdgeInsets)insetsForHeaderFooter;
@end
