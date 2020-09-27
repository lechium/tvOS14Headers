/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPaymentSetupConfiguration, NSArray;

@interface PKPaymentSetupRequest : NSObject <NSSecureCoding> {

	PKPaymentSetupConfiguration* _configuration;
	NSArray* _paymentSetupFeatures;

}

@property (nonatomic,retain) PKPaymentSetupConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSArray * paymentSetupFeatures;                           //@synthesize paymentSetupFeatures=_paymentSetupFeatures - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKPaymentSetupConfiguration *)configuration;
-(void)setConfiguration:(PKPaymentSetupConfiguration *)arg1 ;
-(NSArray *)paymentSetupFeatures;
-(void)setPaymentSetupFeatures:(NSArray *)arg1 ;
@end
