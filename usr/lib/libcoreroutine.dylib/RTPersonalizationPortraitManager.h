/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface RTPersonalizationPortraitManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)fetchRecentLocationDonationsSince:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchRecentLocationDonationsSince:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchLocationNamesStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)feedbackUsedNamedEntities:(id)arg1 ;
@end

