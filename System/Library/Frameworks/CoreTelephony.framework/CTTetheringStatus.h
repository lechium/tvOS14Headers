/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, CTDataConnectionAvailabilityStatus, CTDataConnectionStatus, CTXPCServiceSubscriptionContext;

@interface CTTetheringStatus : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _carrierEnabled;
	NSNumber* _userAuthenticated;
	NSNumber* _asserted;
	NSNumber* _activationFailure;
	NSNumber* _misPdpMaxHosts;
	CTDataConnectionAvailabilityStatus* _connectionAvailabilityStatus;
	CTDataConnectionStatus* _connectionStatus;
	CTXPCServiceSubscriptionContext* _context;

}

@property (nonatomic,retain) NSNumber * carrierEnabled;                                                      //@synthesize carrierEnabled=_carrierEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * userAuthenticated;                                                   //@synthesize userAuthenticated=_userAuthenticated - In the implementation block
@property (nonatomic,retain) NSNumber * asserted;                                                            //@synthesize asserted=_asserted - In the implementation block
@property (nonatomic,retain) NSNumber * activationFailure;                                                   //@synthesize activationFailure=_activationFailure - In the implementation block
@property (nonatomic,retain) NSNumber * misPdpMaxHosts;                                                      //@synthesize misPdpMaxHosts=_misPdpMaxHosts - In the implementation block
@property (nonatomic,retain) CTDataConnectionAvailabilityStatus * connectionAvailabilityStatus;              //@synthesize connectionAvailabilityStatus=_connectionAvailabilityStatus - In the implementation block
@property (nonatomic,retain) CTDataConnectionStatus * connectionStatus;                                      //@synthesize connectionStatus=_connectionStatus - In the implementation block
@property (nonatomic,retain) CTXPCServiceSubscriptionContext * context;                                      //@synthesize context=_context - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CTXPCServiceSubscriptionContext *)context;
-(void)setContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(NSNumber *)carrierEnabled;
-(NSNumber *)userAuthenticated;
-(NSNumber *)asserted;
-(NSNumber *)activationFailure;
-(NSNumber *)misPdpMaxHosts;
-(CTDataConnectionAvailabilityStatus *)connectionAvailabilityStatus;
-(CTDataConnectionStatus *)connectionStatus;
-(void)setCarrierEnabled:(NSNumber *)arg1 ;
-(void)setUserAuthenticated:(NSNumber *)arg1 ;
-(void)setAsserted:(NSNumber *)arg1 ;
-(void)setActivationFailure:(NSNumber *)arg1 ;
-(void)setMisPdpMaxHosts:(NSNumber *)arg1 ;
-(void)setConnectionAvailabilityStatus:(CTDataConnectionAvailabilityStatus *)arg1 ;
-(void)setConnectionStatus:(CTDataConnectionStatus *)arg1 ;
@end
