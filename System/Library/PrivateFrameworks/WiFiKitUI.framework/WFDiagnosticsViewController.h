/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKitUI/WFInsetTableViewController.h>

@class NSString;

@interface WFDiagnosticsViewController : WFInsetTableViewController {

	BOOL _saving;
	/*^block*/id _saveHandler;
	NSString* _comment;

}

@property (nonatomic,copy) NSString * comment;              //@synthesize comment=_comment - In the implementation block
@property (nonatomic,copy) id saveHandler;                  //@synthesize saveHandler=_saveHandler - In the implementation block
@property (assign,nonatomic) BOOL saving;                   //@synthesize saving=_saving - In the implementation block
-(id)init;
-(NSString *)comment;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setComment:(NSString *)arg1 ;
-(void)viewDidLoad;
-(BOOL)saving;
-(id)saveHandler;
-(void)setSaving:(BOOL)arg1 ;
-(void)setSaveHandler:(id)arg1 ;
@end
