/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKWorkoutRouteQueryClientInterface.h>

@class HKWorkoutRoute, NSString;

@interface HKWorkoutRouteQuery : HKQuery <HKWorkoutRouteQueryClientInterface> {

	/*^block*/id _dataHandler;
	HKWorkoutRoute* _series;

}

@property (copy) id dataHandler;                                    //@synthesize dataHandler=_dataHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(id)dataHandler;
-(void)setDataHandler:(id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(void)client_deliverWorkoutRouteLocations:(id)arg1 isFinal:(BOOL)arg2 query:(id)arg3 ;
-(id)initWithRoute:(id)arg1 dataHandler:(/*^block*/id)arg2 ;
@end
