/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SABackgroundContextObject.h>

@class SALocalSearchMapItem, SALocalSearchAceNavigationEta, SALocalSearchMapItemList, SALocalSearchRoute, NSString;

@interface SALocalSearchGetNavigationStatusCompleted : SABaseCommand <SAServerBoundCommand, SABackgroundContextObject>

@property (nonatomic,retain) SALocalSearchMapItem * destination; 
@property (nonatomic,retain) SALocalSearchAceNavigationEta * nextManeuverEta; 
@property (nonatomic,retain) SALocalSearchAceNavigationEta * overallEta; 
@property (nonatomic,retain) SALocalSearchMapItemList * predictedDestinations; 
@property (nonatomic,retain) SALocalSearchRoute * route; 
@property (nonatomic,copy) NSString * trafficIncidentAlertType; 
@property (nonatomic,copy) NSString * volume; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getNavigationStatusCompleted;
+(id)getNavigationStatusCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setDestination:(SALocalSearchMapItem *)arg1 ;
-(SALocalSearchMapItem *)destination;
-(NSString *)volume;
-(void)setVolume:(NSString *)arg1 ;
-(SALocalSearchRoute *)route;
-(void)setRoute:(SALocalSearchRoute *)arg1 ;
-(SALocalSearchMapItemList *)predictedDestinations;
-(void)setPredictedDestinations:(SALocalSearchMapItemList *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SALocalSearchAceNavigationEta *)nextManeuverEta;
-(void)setNextManeuverEta:(SALocalSearchAceNavigationEta *)arg1 ;
-(SALocalSearchAceNavigationEta *)overallEta;
-(void)setOverallEta:(SALocalSearchAceNavigationEta *)arg1 ;
-(NSString *)trafficIncidentAlertType;
-(void)setTrafficIncidentAlertType:(NSString *)arg1 ;
@end

