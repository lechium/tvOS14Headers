/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSString, PKCurrencyAmount, PKCreditAccountRates;

@interface PKAccountCreditTermsUpdate : NSObject <NSSecureCoding, PKRecordObject> {

	long long _type;
	long long _initiator;
	NSString* _requestIdentifier;
	NSString* _adverseActionContentIdentifier;
	PKCurrencyAmount* _creditLimit;
	PKCreditAccountRates* _rates;

}

@property (assign,nonatomic) long long type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long initiator;                                  //@synthesize initiator=_initiator - In the implementation block
@property (nonatomic,copy) NSString * requestIdentifier;                           //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy) NSString * adverseActionContentIdentifier;              //@synthesize adverseActionContentIdentifier=_adverseActionContentIdentifier - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * creditLimit;                       //@synthesize creditLimit=_creditLimit - In the implementation block
@property (nonatomic,retain) PKCreditAccountRates * rates;                         //@synthesize rates=_rates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)recordType;
+(id)recordNamePrefix;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSString *)requestIdentifier;
-(PKCreditAccountRates *)rates;
-(void)setRates:(PKCreditAccountRates *)arg1 ;
-(long long)initiator;
-(id)initWithRecord:(id)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(void)setInitiator:(long long)arg1 ;
-(PKCurrencyAmount *)creditLimit;
-(void)setCreditLimit:(PKCurrencyAmount *)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(NSString *)adverseActionContentIdentifier;
-(void)setAdverseActionContentIdentifier:(NSString *)arg1 ;
@end
