/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DNDSAssertionSyncManager <NSObject>
@property (assign,nonatomic,__weak) id<DNDSAssertionSyncManagerDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<DNDSAssertionSyncManagerDelegate> delegate; 
@optional
-(void)updateForModeAssertionUpdateResult:(id)arg1;
-(void)updateForStateUpdate:(id)arg1;

@required
-(id<DNDSAssertionSyncManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)resume;
-(id<DNDSAssertionSyncManagerDataSource>)dataSource;
-(void)setDataSource:(id)arg1;

@end
