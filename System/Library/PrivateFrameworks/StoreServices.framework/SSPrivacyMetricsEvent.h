/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSString, NSNumber;

@interface SSPrivacyMetricsEvent : SSMetricsMutableEvent

@property (nonatomic,retain) NSString * acknowledgmentIdentifier; 
@property (nonatomic,retain) NSNumber * acknowledgmentVersion; 
@property (assign,nonatomic) BOOL acknowledged; 
@property (nonatomic,retain) NSString * bundleIdentifier; 
@property (assign,nonatomic) BOOL displayed; 
-(id)init;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setDisplayed:(BOOL)arg1 ;
-(BOOL)displayed;
-(BOOL)acknowledged;
-(NSString *)acknowledgmentIdentifier;
-(NSNumber *)acknowledgmentVersion;
-(void)setAcknowledged:(BOOL)arg1 ;
-(void)setAcknowledgmentIdentifier:(NSString *)arg1 ;
-(void)setAcknowledgmentVersion:(NSNumber *)arg1 ;
@end
