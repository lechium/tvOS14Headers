/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:41:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CPAnalytics/CPAnalyticsDestination.h>

@class NSMapTable, NSString;

@interface CPAnalyticsMetricsDestination : NSObject <CPAnalyticsDestination> {

	NSMapTable* _eventRoutes;

}

@property (nonatomic,readonly) NSMapTable * eventRoutes;              //@synthesize eventRoutes=_eventRoutes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)processEvent:(id)arg1 ;
-(id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(void)_sendCoreAnalyticsEventWithCustomConfig:(id)arg1 eventRoute:(id)arg2 ;
-(id)_buildCustomCoreAnalyticsPayloadForEvent:(id)arg1 withPropertiesToInclude:(id)arg2 ;
-(void)_sendCoreAnalyticsEvent:(id)arg1 eventPayload:(id)arg2 ;
-(NSMapTable *)eventRoutes;
@end

