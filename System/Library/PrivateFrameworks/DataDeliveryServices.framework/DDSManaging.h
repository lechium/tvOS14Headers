/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DDSManaging <NSObject>
@property (nonatomic,retain) id<DDSManagingDelegate> delegate; 
@required
-(id<DDSManagingDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4;
-(void)removeAssertionWithID:(id)arg1;
-(void)assertionIDsForClientID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)triggerDump;
-(void)triggerUpdate;

@end

